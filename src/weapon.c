#include <tamtypes.h>
#include "weapon.h"

#define WRENCH_DEFS_TABLE                   ((WrenchDefsData*)0x00398A98)
#define WEAPON_DEFS_TABLE                   ((WeaponDefsData*)0x00398B98)
#define FLAIL_DEFS_TABLE                    ((WeaponDefsData*)0x00399758)
#define OMNI_DAMAGE_V1_PATCH                (0x003FFE00)
#define OMNI_DAMAGE_V2_PATCH                (0x003FFE10)


WeaponDefsData* weaponGetGunLevelDefs(void)
{
    return WEAPON_DEFS_TABLE;
}

WeaponDefsData* weaponGetFlailLevelDefs(void)
{
    return FLAIL_DEFS_TABLE;
}

WrenchDefsData* weaponGetWrenchLevelDefs(void)
{
    return WRENCH_DEFS_TABLE;
}

int weaponSlotToId(int slotId)
{
    switch (slotId)
    {
        case WEAPON_SLOT_WRENCH: return WEAPON_ID_WRENCH;
        case WEAPON_SLOT_VIPERS: return WEAPON_ID_VIPERS;
        case WEAPON_SLOT_MAGMA_CANNON: return WEAPON_ID_MAGMA_CANNON;
        case WEAPON_SLOT_ARBITER: return WEAPON_ID_ARBITER;
        case WEAPON_SLOT_FUSION_RIFLE: return WEAPON_ID_FUSION_RIFLE;
        case WEAPON_SLOT_MINE_LAUNCHER: return WEAPON_ID_MINE_LAUNCHER;
        case WEAPON_SLOT_B6: return WEAPON_ID_B6;
        case WEAPON_SLOT_FLAIL: return WEAPON_ID_FLAIL;
        case WEAPON_SLOT_OMNI_SHIELD: return WEAPON_ID_OMNI_SHIELD;
        default: return WEAPON_ID_EMPTY;
    }
}

int weaponIdToSlot(int id)
{
    switch (id)
    {
        case WEAPON_ID_WRENCH: return WEAPON_SLOT_WRENCH;
        case WEAPON_ID_VIPERS: return WEAPON_SLOT_VIPERS;
        case WEAPON_ID_MAGMA_CANNON: return WEAPON_SLOT_MAGMA_CANNON;
        case WEAPON_ID_ARBITER: return WEAPON_SLOT_ARBITER;
        case WEAPON_ID_FUSION_RIFLE: return WEAPON_SLOT_FUSION_RIFLE;
        case WEAPON_ID_MINE_LAUNCHER: return WEAPON_SLOT_MINE_LAUNCHER;
        case WEAPON_ID_B6: return WEAPON_SLOT_B6;
        case WEAPON_ID_FLAIL: return WEAPON_SLOT_FLAIL;
        case WEAPON_ID_OMNI_SHIELD: return WEAPON_SLOT_OMNI_SHIELD;
        default: return WEAPON_SLOT_WRENCH;
    }
}

void weaponSetDamage(int weaponId, int level, float damage)
{
    switch (weaponId)
    {
        case WEAPON_ID_WRENCH:
        {
            WRENCH_DEFS_TABLE->Entries[level].Damage[2] = damage;
            break;
        }
        case WEAPON_ID_OMNI_SHIELD:
        {
            if (level == 0)
                *(u16*)OMNI_DAMAGE_V1_PATCH = *(((u16*)&damage)+1);
            else
                *(u16*)OMNI_DAMAGE_V2_PATCH = *(((u16*)&damage)+1);
            break;
        }
        case WEAPON_ID_FLAIL:
        {
            FLAIL_DEFS_TABLE->Entries[level].Damage[2] = damage;
            break;
        }
        default:
        {
            WEAPON_DEFS_TABLE[weaponId - WEAPON_ID_VIPERS].Entries[level].Damage[2] = damage;
            break;
        }
    }
}

