#include "string.h"
#include "player.h"
#include "team.h"
#include "game.h"

void internal_playerSetPosRot(Player *, VECTOR, VECTOR, int, int, int, int, int);

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
 *
 */
#define PLAYER_LOCAL_COUNT                          (*(int*)0x00172174)

/*
 * Weapon stuff.
 */
#define WEAPON_EQUIPSLOT                            ((int*)0x0020C690)

// 
extern const PadHistory DefaultPadHistory;

// Player pad history
PadHistory PlayerPadHistory[GAME_MAX_PLAYERS] = {};

//--------------------------------------------------------------------------------
Player ** playerGetAll(void)
{
    return PLAYER_STRUCT_ARRAY;
}

//--------------------------------------------------------------------------------
void playerSetLocalEquipslot(int localPlayerId, int slot, int weaponId)
{
    int * equipslots = WEAPON_EQUIPSLOT;
    equipslots[slot + (localPlayerId * 3)] = weaponId;
}

//--------------------------------------------------------------------------------
int playerGetLocalEquipslot(int localPlayerId, int slot)
{
    int * equipslots = WEAPON_EQUIPSLOT;
    return equipslots[slot + (localPlayerId * 3)];
}

//--------------------------------------------------------------------------------
void playerSetHealth(Player * player, float health)
{
    if (!player)
        return;

    player->Health = health;
    if (player->pNetPlayer && player->pNetPlayer->pNetPlayerData)
        player->pNetPlayer->pNetPlayerData->hitPoints = health;
}

//--------------------------------------------------------------------------------
void playerSetTeam(Player * player, int teamId)
{
  if (!player || player->Team == teamId)
      return;

  player->Team = teamId;
  player->PlayerMoby->GlowRGBA = TEAM_COLORS[teamId];
  player->SkinMoby->ModeBits2 = (player->SkinMoby->ModeBits2 & 0xff) | ((0x80 + (8 * teamId)) << 8);
  player->SkinMoby->Triggers = 0;

  // update game settings
  GameSettings* gs = gameGetSettings();
  if (gs) {
    gs->PlayerTeams[player->PlayerId] = teamId;
  }
 
  // move to correct voice channel
  if (player->IsLocal && player->LocalPlayerIndex == 0) {
    int channel = voiceGetChannel();
    if (channel > 0 && channel != (teamId + 1)) {
      internal_voiceEnableGlobalChat(1);
      internal_voiceEnableGlobalChat(0);
    }
  }
}

//--------------------------------------------------------------------------------
int playerIsLocal(Player * player)
{
    return (int)player >= 0x00300000 && (int)player <= 0x00400000;
}

//--------------------------------------------------------------------------------
int playerGetNumLocals(void)
{
    return PLAYER_LOCAL_COUNT;
}

//--------------------------------------------------------------------------------
int playerIdIsLocal(int playerId)
{
    return PLAYER_1_ID == playerId || PLAYER_2_ID == playerId;
}

//--------------------------------------------------------------------------------
void playerSetPosRot(Player * player, VECTOR p, VECTOR r)
{
    internal_playerSetPosRot(player, p, r, 0, 1, 1, 1, 1);
}

//--------------------------------------------------------------------------------
PadButtonStatus * playerGetPad(Player * player)
{
    if (!player)
        return 0;

    if (playerIsLocal(player))
    {
        if (!player->Paddata) return 0;
        return (PadButtonStatus*)((u32)player->Paddata + 0x574);
    }
    else
    {
        struct tNW_Player* netPlayer = player->pNetPlayer;
        if (!netPlayer)
            return 0;

        return (PadButtonStatus*)(netPlayer->padMessageElems[0].msg.pad_data);
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
    if (isInGame())
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
int playerPadGetAnyButton(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    PadButtonStatus * paddata = playerGetPad(player);
    if (!paddata)
        return 0;

    return (paddata->btns & buttonMask) != buttonMask;
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
int playerPadGetAnyButtonDown(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    return playerPadGetAnyButton(player, buttonMask) &&
            (PlayerPadHistory[player->PlayerId].btns & buttonMask) == buttonMask;
}

//--------------------------------------------------------------------------------
int playerPadGetButtonUp(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    return !playerPadGetButton(player, buttonMask) &&
        (PlayerPadHistory[player->PlayerId].btns & buttonMask) == 0;
}

//--------------------------------------------------------------------------------
int playerPadGetAnyButtonUp(Player * player, u16 buttonMask)
{
    if (!player)
        return 0;

    return !playerPadGetAnyButton(player, buttonMask) &&
        (PlayerPadHistory[player->PlayerId].btns & buttonMask) != buttonMask;
}

//--------------------------------------------------------------------------------
PlayerVTable* playerGetVTable(Player * player)
{
    if (!player)
        return NULL;

    return (PlayerVTable*)player->Guber.VTable;
}

//--------------------------------------------------------------------------------
int playerStateIsDead(int state)
{
  return state == PLAYER_STATE_DEATH
        || state == PLAYER_STATE_DROWN
        || state == PLAYER_STATE_DEATH_FALL
        || state == PLAYER_STATE_DEATHSAND_SINK
        || state == PLAYER_STATE_LAVA_DEATH
        || state == PLAYER_STATE_DEATH_NO_FALL
        || state == PLAYER_STATE_WAIT_FOR_RESURRECT
        ;
}

//--------------------------------------------------------------------------------
int playerIsDead(Player * player)
{
  return playerStateIsDead(player->PlayerState);
}
