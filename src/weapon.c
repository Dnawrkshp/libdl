#include <tamtypes.h>
#include "weapon.h"

#define WRENCH_DAMAGE_TABLE                 ((WrenchDamageData*)0x00398AA0)
#define WEAPON_DAMAGE_TABLE                 ((WeaponDamageData*)0x00398BA0)
#define FLAIL_DAMAGE_TABLE                  ((WeaponDamageData*)0x00399770)
#define OMNI_DAMAGE_V1_PATCH                (0x003FFE00)
#define OMNI_DAMAGE_V2_PATCH                (0x003FFE10)


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

void weaponSetDamage(int weaponId, int level, float damage)
{
    switch (weaponId)
    {
        case WEAPON_ID_WRENCH:
        {
            WRENCH_DAMAGE_TABLE->Entries[level].NearDamage = damage;
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
            FLAIL_DAMAGE_TABLE->Entries[level].NearDamage = damage;
            break;
        }
        default:
        {
            WEAPON_DAMAGE_TABLE[weaponId - WEAPON_ID_VIPERS].Entries[level].NearDamage = damage;
            break;
        }
    }
}
