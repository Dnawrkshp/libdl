#include "string.h"
#include "player.h"
#include "team.h"
#include "game.h"

void internal_playerSetPosRot(Player *, VECTOR, VECTOR, int);

/*
 * 
 */
#define PLAYER_STRUCT_ARRAY                         ((Player**)0x00344C38)

/*
 * Local player 1 dme player index.
 */
#define PLAYER_1_ID                                 (*(u32*)0x0017218C)

/*
 * Local player 2 dme player index.
 */
#define PLAYER_2_ID                                 (*(u32*)0x001B6ED8)

/*
 * Weapon stuff.
 */
#define WEAPON_DATA_START                           (0x001D49C0)
#define WEAPON_DATA_SIZE                            (0x12B0)
#define WEAPON_EQUIPSLOT                            ((int*)0x0020C690)

// 
extern const PadHistory DefaultPadHistory;

// Player pad history
PadHistory PlayerPadHistory[GAME_MAX_PLAYERS];

//--------------------------------------------------------------------------------
Player ** playerGetAll(void)
{
    return PLAYER_STRUCT_ARRAY;
}

//--------------------------------------------------------------------------------
PlayerWeaponData * playerGetWeaponData(int playerId)
{
    return (PlayerWeaponData *)(WEAPON_DATA_START + (WEAPON_DATA_SIZE * playerId));
}

//--------------------------------------------------------------------------------
void playerSetLocalEquipslot(int localPlayerId, int slot, int weaponId)
{
    int * equipslots = WEAPON_EQUIPSLOT;
    equipslots[slot + (localPlayerId * 3)] = weaponId;
}

//--------------------------------------------------------------------------------
void playerSetWeapon(Player * player, int weaponId)
{
    if (!player)
        return;

    player->ChangeWeaponHeldId = weaponId;
}

//--------------------------------------------------------------------------------
void playerSetTeam(Player * player, int teamId)
{
    if (!player)
        return;

    
    player->Team = teamId;
    player->PlayerMoby->SecondaryColor = TEAM_COLORS[teamId];
    player->SkinMoby->TextureId = 0x80 + (8 * teamId);
    player->SkinMoby->UNK_BE = 0;
}

//--------------------------------------------------------------------------------
int playerIsLocal(Player * player)
{
    return (int)player >= 0x00300000 && (int)player <= 0x00400000;
}

//--------------------------------------------------------------------------------
int playerIdIsLocal(int playerId)
{
    return PLAYER_1_ID == playerId || PLAYER_2_ID == playerId;
}

//--------------------------------------------------------------------------------
void playerSetPosRot(Player * player, VECTOR p, VECTOR r)
{
    internal_playerSetPosRot(player, p, r, 0);
}

//--------------------------------------------------------------------------------
PadButtonStatus * playerGetPad(Player * player)
{
    if (!player)
        return 0;

    if (playerIsLocal(player))
    {
        return player->Paddata;
    }
    else
    {
        u8 * remotePadInfo = player->RemotePadInfo;
        if (!remotePadInfo)
            return 0;

        return (PadButtonStatus*)(remotePadInfo + 0x70);
    }
}

//--------------------------------------------------------------------------------
void playerPadUpdate(void)
{
    int i;
    PadButtonStatus * playerPad;
    struct PadHistory * padHistory;
    Player ** players = playerGetAll();
    Player * player;

    // Update player pad in game
    if (gameIsIn())
    {
        for (i = 0; i < GAME_MAX_PLAYERS; ++i)
        {
            player = players[i];
            padHistory = &PlayerPadHistory[i];
            playerPad = playerGetPad(player);

            // Copy last player pad
            if (playerPad)
            {
                memcpy(padHistory, &playerPad->btns, sizeof(struct PadHistory));
                padHistory->id = player->PlayerId;
            }
            // Reset pad if no player
            else if (padHistory->id >= 0)
            {
                memcpy(padHistory, &DefaultPadHistory, sizeof(struct PadHistory));
            }
        }
    }

    // Reset player pad history when not in game
    else if (PlayerPadHistory[0].id >= 0)
    {
        for (i = 0; i < GAME_MAX_PLAYERS; ++i)
            memcpy(PlayerPadHistory + i, &DefaultPadHistory, sizeof(struct PadHistory));
    }
}

//--------------------------------------------------------------------------------
int playerPadGetButton(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    PadButtonStatus * paddata = playerGetPad(player);
    if (!paddata)
        return 0;

    return (paddata->btns & buttonMask) == 0;
}

//--------------------------------------------------------------------------------
int playerPadGetButtonDown(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    return playerPadGetButton(player, buttonMask) &&
            (PlayerPadHistory[player->PlayerId].btns & buttonMask) != 0;
}

//--------------------------------------------------------------------------------
int playerPadGetButtonUp(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    return !playerPadGetButton(player, buttonMask) &&
        (PlayerPadHistory[player->PlayerId].btns & buttonMask) != 0;
}

//--------------------------------------------------------------------------------
PlayerVTable* playerGetVTable(Player * player)
{
    if (!player)
        return NULL;

    return (PlayerVTable*)player->Guber.Vtable;
}
