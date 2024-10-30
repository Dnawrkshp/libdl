/***************************************************
 * FILENAME :    moby.h
 * 
 * DESCRIPTION :
 *     Contains moby specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 *     Each offset is determined per app id.
 *     This is to ensure compatibility between versions of Deadlocked/Gladiator.
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_MOBY_H_
#define _LIBDL_MOBY_H_

#include <tamtypes.h>
#include "math3d.h"
#include "common.h"
#include "gid.h"

struct Guber;
struct GuberMoby;
struct GuberEvent;
struct Gid;

//--------------------------------------------------------
enum MobyModeBit
{
  MOBY_MODE_BIT_NONE =                  (0x0000),
  MOBY_MODE_BIT_DISABLED =              (0x0001),
  MOBY_MODE_BIT_NO_UPDATE =             (0x0002),
  MOBY_MODE_BIT_NO_POST_UPDATE =        (0x0004),
  MOBY_MODE_BIT_TRANSPARENT =           (0x0008),
  MOBY_MODE_BIT_HAS_GLOW =              (0x0010),
  MOBY_MODE_BIT_HAS_SPECIAL_VARS =      (0x0020),
  MOBY_MODE_BIT_UNK_40 =                (0x0040),
  MOBY_MODE_BIT_HIDDEN =                (0x0080),
  MOBY_MODE_BIT_LOCK_ROTATION =         (0x0100),
  MOBY_MODE_BIT_DRAW_TRANSPARENT_WEIRD =(0x0200),
  MOBY_MODE_BIT_DRAW_SHADOW =           (0x0400),
  MOBY_MODE_BIT_DISABLE_Z_WRITE =       (0x0800),
  MOBY_MODE_BIT_CAN_BE_AUTO_TARGETED =  (0x1000),
  MOBY_MODE_BIT_HIDE_BACKFACES =        (0x2000),
  MOBY_MODE_BIT_CAN_BE_DAMAGED =        (0x4000),
  MOBY_MODE_BIT_MIRROR =                (0x8000),
};

//--------------------------------------------------------
enum MobyId
{
    MOBY_ID_CLANK = 0x000A,
    MOBY_ID_BOLT_BOLT = 0x000D,
    MOBY_ID_BOLT_STAR = 0x000F,
    MOBY_ID_BOLT_GEAR = 0x0010,
    MOBY_ID_BOLT_SPRING = 0x0011,
    MOBY_ID_BOLT_MISC = 0x0012,
    MOBY_ID_BOLT_1000 = 0x0013,
    MOBY_ID_MOON = 0x0070,
    MOBY_ID_SMALL_WHITE_ROCK = 0x007A,
    MOBY_ID_CHICKEN = 0x010E,
    MOBY_ID_BOLT_CRATE_DEBRIS = 0x0165,
    MOBY_ID_BOLT_CRATE_DEBRIS_2 = 0x0166,
    MOBY_ID_FEATHER = 0x01AC,
    MOBY_ID_BETA_BOX = 0x01F4,
    MOBY_ID_HEALTH_BOX_WITH_HEALTH = 0x01F5,
    MOBY_ID_BONUS_BOLTS_CRATE = 0x01F7,
    MOBY_ID_QUAD_CRATE = 0x01F8,
    MOBY_ID_SHIELD_CRATE_DOESNT_WORK = 0x01FA,
    MOBY_ID_AMMO_CRATE = 0x01FF,
    MOBY_ID_SWINGSHOT_REALIN_KIND = 0x02F6,
    MOBY_ID_WATER_SPLASH = 0x0307,
    MOBY_ID_HEALTH_ORB_SINGLE_PLAYER = 0x0326,
    MOBY_ID_FLAT_WHITE_SQUARE = 0x03EF,
    MOBY_ID_ICE_BLOCK = 0x052A,
    MOBY_ID_BLADEBALL = 0x099C,
    MOBY_ID_WATER = 0x0B37,
    MOBY_ID_BOLT_CRANK_SP = 0x0B57,
    MOBY_ID_AMMO = 0x0CDB,
    MOBY_ID_DARK_BLUE_SPIKE_RING = 0x0CEB,
    MOBY_ID_DARK_BLUE_SPIKE_RING_TALLER = 0x0CEC,
    MOBY_ID_WHITE_ORANGE_FLASH = 0x0CFA,
    MOBY_ID_CQ_LIGHT = 0x0E49,
    MOBY_ID_SHEEP = 0x0E7D,
    MOBY_ID_PLAYER_TURRET_SHOT = 0x0EA7,
    MOBY_ID_GIANT_WHITE_WALL = 0x0EAE,
    MOBY_ID_MAGMA_CANNON = 0x1087,
    MOBY_ID_SNIPER_RIFLE = 0x1088,
    MOBY_ID_ARBITER = 0x1089,
    MOBY_ID_B6_OBLITERATOR = 0x108A,
    MOBY_ID_ARBITER_ROCKET0 = 0x108C,
    MOBY_ID_B6_BALL0 = 0x108E,
    MOBY_ID_B6_BOMB_EXPLOSION = 0x108F,
    MOBY_ID_SMALL_MAGMA_ROCK = 0x1093,
    MOBY_ID_DUAL_VIPERS = 0x1094,
    MOBY_ID_DUAL_VIPER_SHOT = 0x1095,
    MOBY_ID_FUSION_RIFLE = 0x1096,
    MOBY_ID_FUSION_SHOT = 0x1097,
    MOBY_ID_BOMB_GLOVE = 0x1098,
    MOBY_ID_MINE_LAUNCHER_MINE = 0x1099,
    MOBY_ID_HOLOSHIELD_LAUNCHER = 0x10A5,
    MOBY_ID_HOLOSHIELD_SHOT = 0x10A9,
    MOBY_ID_PLAYER_TURRET = 0x10C2,
    MOBY_ID_TELEPORT_PAD = 0x10C3,
    MOBY_ID_HEALTH_PAD0 = 0x1388,
    MOBY_ID_ROCKET0 = 0x15A5,
    MOBY_ID_BLUE_TEAM_HEALTH_PAD = 0x15EE,
    MOBY_ID_SOMETHING_YOU_CAN_DESTROY_AND_GET_BOLTS = 0x185A,
    MOBY_ID_THE_ARBITER = 0x1864,
    MOBY_ID_MINI_BOMB = 0x1897,
    MOBY_ID_SWINGSHOT_GADGET = 0x18DF,
    MOBY_ID_ARROW = 0x1935,
    MOBY_ID_VEHICLE_PAD = 0x1981,
    MOBY_ID_HOVEN_BRIDGE_SIDE_PIECE = 0x19AF,
    MOBY_ID_ACID = 0x19B0,
    MOBY_ID_HOVEN_BRIDGE_DESTROYED = 0x19B2,
    MOBY_ID_SWINGSHOT_ORB = 0x19C4,
    MOBY_ID_BOLT_CRANK_MP = 0x1A27,
    MOBY_ID_HOVEN_BRIDGE_CENTER_PIECE = 0x1A29,
    MOBY_ID_VERY_SMALL_SQUARE = 0x1A2F,
    MOBY_ID_BLACK_ROCK = 0x1A50,
    MOBY_ID_BIGASS_ROCK = 0x1A53,
    MOBY_ID_UYA_TURRET = 0x1A63,
    MOBY_ID_SMALL_ELBOW_TUBE_THING = 0x1A7B,
    MOBY_ID_HEALTH_BOX_MULT = 0x1AF2,
    MOBY_ID_HEALTH_ORB_MULT = 0x1AF3,
    MOBY_ID_WEAPON_PACK = 0x1AFC,
    MOBY_ID_CHARGEBOOTS_PICKUP_MODEL = 0x1B0C,
    MOBY_ID_HEALTH_PAD1 = 0x1B10,
    MOBY_ID_CQ_ROCKET_TURRET_ROCKET = 0x1B1E,
    MOBY_ID_MAGMA_ROCK_VEHICLE_SHOTS = 0x1B35,
    MOBY_ID_TESLA_BARRIER = 0x1B37,
    MOBY_ID_SILVER_BOLT_WITH_NUT_ATTACHED = 0x1BA5,
    MOBY_ID_DUCK = 0x1BC3,
    MOBY_ID_UYA_GRAVITY_BOOTS = 0x1BDD,
    MOBY_ID_UYA_CHARGE_BOOTS = 0x1BDE,
    MOBY_ID_RED_FLAG = 0x1C2F,
    MOBY_ID_BLUE_FLAG = 0x1C31,
    MOBY_ID_WEIRD_GRAY_FLAT_BOX = 0x1C32,
    MOBY_ID_DUCK_EGG = 0x1C59,
    MOBY_ID_ROCKET_UNKNOWN = 0x1D37,
    MOBY_ID_WING_NUT = 0x1D5D,
    MOBY_ID_MARAXUS_BOX = 0x1D86,
    MOBY_ID_BROKEN_MARAXUS_BOX = 0x1E0B,
    MOBY_ID_EMP = 0x201C,
    MOBY_ID_SARATHOS_MOUNTAIN = 0x2022,
    MOBY_ID_NEVER_BEFORE_SEEN_TELEPORT_PAD = 0x2023,
    MOBY_ID_MARAXUS_SCENERY_WAVING_FLAGS = 0x2031,
    MOBY_ID_EMP_EXPLOISION = 0x2034,
    MOBY_ID_LANDSTALKER = 0x2038,
    MOBY_ID_LANDSTALKER_MID = 0x2039,
    MOBY_ID_SWARMER_RED_ORANGE = 0x2051,
    MOBY_ID_HOVERBIKE = 0x2054,
    MOBY_ID_LANDSTALKER_LEG = 0x205E,
    MOBY_ID_PUMA = 0x2064,
    MOBY_ID_BOT_GRIND_CABLE_LAUNCH_PAD = 0x206B,
    MOBY_ID_BOT_GRIND_CABLE_RECEIVER = 0x206C,
    MOBY_ID_JUMP_PAD = 0x2072,
    MOBY_ID_BARRICADE = 0x2073,
    MOBY_ID_NODE_BASE = 0x2075,
    MOBY_ID_PART_CATACROM_BRIDGE = 0x2076,
    MOBY_ID_HACKER_ORB = 0x2077,
    MOBY_ID_BOT_GUN_PISTON_FLUX_LX = 0x207B,
    MOBY_ID_BETA_GUN_NO_TEXTURE = 0x207C,
    MOBY_ID_BOT_WRENCH = 0x207D,
    MOBY_ID_BOT_SNIPER = 0x207F,
    MOBY_ID_BATTLE_BOT_PRISON_CONTAINER_MARAXUS = 0x2083,
    MOBY_ID_BOT_GUN_SPECIAL_WEAPON = 0x2085,
    MOBY_ID_SARATHOS_GLASS = 0x2082,
    MOBY_ID_NODE_BOLT_GUARD = 0x2087,
    MOBY_ID_INTERPLANETARY_TRANSPORT_SHIP = 0x208A,
    MOBY_ID_BOT_GUN_SHIELD_LINK = 0x208E,
    MOBY_ID_BOT_GUN_NUKE = 0x208F,
    MOBY_ID_SOMETHING_TO_DO_WITH_BOT_1 = 0x2090,
    MOBY_ID_MINE_LAUNCHER = 0x2094,
    MOBY_ID_MARAXUS_CELL_BLOCK_DOOR = 0x209B,
    MOBY_ID_SMALL_RED_CIRCULAR_PLATFORM = 0x209C,
    MOBY_ID_MARAXUS_SCENERY_SWAYING_RIBBONS = 0x209F,
    MOBY_ID_EXECUTIONER = 0x20A1,
    MOBY_ID_NAPALM = 0x20AB,
    MOBY_ID_HOVERSHIP = 0x20AE,
    MOBY_ID_NAPALM_OF_SOME_SORT = 0x20B6,
    MOBY_ID_FLAT_SQUARE = 0x20BA,
    MOBY_ID_ARBITER_ROCKET1 = 0x20BB,
    MOBY_ID_LEVIATHAN_TAIL = 0x20C4,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_ENTIRE_GLASS_WALKWAY = 0x20C5,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_GLASS_RING_ABOVE_CLANKS_HOUSE_AND_ALS = 0x20C8,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_GLASS_TUBE_SOLID = 0x20C9,
    MOBY_ID_B6_BALL1 = 0x20D6,
    MOBY_ID_CATACROM_ENERGY_BRIDGE_CONFIG = 0x20DC,
    MOBY_ID_POSSIBLY_THE_BOTTOM_TO_THE_BATTLE_BOT_PRISON_CONTAINER = 0x20DE,
    MOBY_ID_BULLET_SPLASH_VIPERS_MAG_FLAIL = 0x20E2,
    MOBY_ID_NAPALM_ON_FIRE = 0x20E3,
    MOBY_ID_OTHER_PART_FOR_SARATHOS_BRIDGE = 0x20E8,
    MOBY_ID_SARATHOS_BRIDGE = 0x20E9,
    MOBY_ID_SARATHOS_BRIDGE_PIECE = 0x20EA,
    MOBY_ID_BATTLEDOME_INTERACTIVE_PLATFORM_RED_LIGHTS_ON_THE_SIDE = 0x20F0,
    MOBY_ID_ROBOT_ZOMBIE = 0x20F6,
    MOBY_ID_GRIND_CABLE_LAUNCHER = 0x20F7,
    MOBY_ID_EMP_LAUNCHER = 0x20F9,
    MOBY_ID_HACKER_RAY = 0x20FA,
    MOBY_ID_DREADZONE_TV_SCREEN_THE_ONE_ABOVE_ALS_PLACE = 0x20FB,
    MOBY_ID_PROJECTILE_UNKNOWN = 0x2103,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_GLASS = 0x2105,
    MOBY_ID_FLAIL = 0x2106,
    MOBY_ID_FLAIL_HEAD = 0x210B,
    MOBY_ID_BIG_BOX = 0x2112,
    MOBY_ID_ALL_OF_LEVIATHANS_LAIR_GLASS = 0x211E,
    MOBY_ID_GLASS_FROM_LEVIATHANS_LAIR = 0x211F,
    MOBY_ID_BIG_AL = 0x2124,
    MOBY_ID_DREADZONE_TRANSPORT_SHIP_TO_BATTLEDOME_NOT_INTERPLANETARY = 0x2126,
    MOBY_ID_LARGER_GREY_SCENERY_DREADZONE_SHIP = 0x212B,
    MOBY_ID_GREY_SCENERY_DREADZONE_SHIP = 0x212C,
    MOBY_ID_GREY_SEGMENTED_SCENERY_DREADZONE_SHIP = 0x212D,
    MOBY_ID_RED_SCENERY_DREADZONE_SHIP = 0x212E,
    MOBY_ID_DZ_STRIKER_LEGS = 0x2130,
    MOBY_ID_DZ_STRIKER_TORSO_RED = 0x2133,
    MOBY_ID_ROBOT_ZOMBIE_TORSO = 0x213A,
    MOBY_ID_ROBOT_ZOMBIE_LEGS = 0x213B,
    MOBY_ID_PUMA_TIRE = 0x213C,
    MOBY_ID_STORYMODE_TELEPORT_PAD = 0x2147,
    MOBY_ID_RATCHET_MARAUDER_HELMET_OFF = 0x216A,
    MOBY_ID_RATCHET_BLUE_ARMOR,_NO_HEAD = 0x23F7,
    MOBY_ID_DARK_CATHEDRAL_ARENA_DOOR = 0x23F9,
    MOBY_ID_WRENCH = 0x23FA,
    MOBY_ID_CATACROM_ENERGY_BRIDGE = 0x23FD,
    MOBY_ID_SWARMER_SWAMP = 0x23FF,
    MOBY_ID_HACKER_ORB_HOLDER = 0x2401,
    MOBY_ID_CATHEDRAL_LIGHT_BEAM = 0x240A,
    MOBY_ID_DREADZONE_SATELLITE = 0x2411,
    MOBY_ID_DECORATIVE_CAMERA = 0x2419,
    MOBY_ID_DECORATIVE_STAND_FOR_LIGHT_CAMERA = 0x241A,
    MOBY_ID_DECORATIVE_LIGHT = 0x241B,
    MOBY_ID_MARAXUS_AWNING = 0x2428,
    MOBY_ID_DREADZONE_CAMERA = 0x242A,
    MOBY_ID_BREAKABLE_FLOORLIGHT_THING = 0x242D,
    MOBY_ID_LEVIATHANS_LAIR_DOOR = 0x2432,
    MOBY_ID_LAND_MINE_VEHICLE_MISSIONS = 0x243C,
    MOBY_ID_SMALLER_DREADZONE_TV_ONES_IN_CLANKS_ROOM = 0x243D,
    MOBY_ID_WEAPON_PICKUP = 0x243E,
    MOBY_ID_CYCLOID = 0x243F,
    MOBY_ID_KRONOS_LIFT_GEAR = 0x2451,
    MOBY_ID_DARK_CATHEDRAL_SECRET_PLATFORM = 0x2453,
    MOBY_ID_VIPER_MAGMA_CANNON_SHELL = 0x2455,
    MOBY_ID_2_WHITE_FLOOR_LIGHTS = 0x245A,
    MOBY_ID_BLUE_FLOORLIGHT_OBJECT_CONTAINMENT_SUITE_THINGS = 0x245B,
    MOBY_ID_GLASS_RING = 0x245C,
    MOBY_ID_TUBE_LIGHT_OBJECT_THING = 0x245D,
    MOBY_ID_SMALL_BLUE_LIGHT_WITH_CLAW = 0x245E,
    MOBY_ID_BROKEN_VERSION_OF_245A = 0x245F,
    MOBY_ID_WALKWAY_LIGHT = 0x2460,
    MOBY_ID_BROKEN_VERSION_OF_245E = 0x2464,
    MOBY_ID_BROKEN_WIRES = 0x2465,
    MOBY_ID_DARK_CATHEDRAL_DOOR = 0x2467,
    MOBY_ID_EXECUTIONER_GREEN = 0x2468,
    MOBY_ID_DZ_STRIKER_TORSOGREEN = 0x246A,
    MOBY_ID_DZ_STRIKER_LEGS_GREEN = 0x246D,
    MOBY_ID_LANDSTALKER_SCORE_CHALLENGE_ORB = 0x2479,
    MOBY_ID_DECORATIVE_COLUMN = 0x2488,
    MOBY_ID_VALIX_HANGAR_DOOR = 0x248E,
    MOBY_ID_VALIX_HANGAR_DOOR_2 = 0x248F,
    MOBY_ID_VALIX_HANGAR_DOOR_3 = 0x2490,
    MOBY_ID_VALIX_HANGAR_DOOR_4 = 0x2491,
    MOBY_ID_CLANKS_CHAIR = 0x24AB,
    MOBY_ID_CYCLOID_BLADE_WINGS = 0x24B3,
    MOBY_ID_VALIX_LIGHTHOUSE_GLASS_RING = 0x24B8,
    MOBY_ID_QUASAR_RAY = 0x24B4,
    MOBY_ID_RATCHET_MARAUDER = 0x24CB,
    MOBY_ID_EVISCERATOR_MINION_THING = 0x24D3,
    MOBY_ID_SHELL_SHOCK = 0x24D5,
    MOBY_ID_DECORATIVE_FLAG_SHAARR = 0x24D8,
    MOBY_ID_KRONOS_LAMP_POST = 0x24E0,
    MOBY_ID_VALIX_PLANT_ROOTS = 0x24E2,
    MOBY_ID_VALIX_PLANT_STALK = 0x24E3,
    MOBY_ID_VALIX_CRATER = 0x24E4,
    MOBY_ID_KRONOS_LAMP_POST_STAND = 0x24E5,
    MOBY_ID_DREADZONE_EMBLEM = 0x24EB,
    MOBY_ID_ACE_HARDLIGHT_STATUE = 0x24EC,
    MOBY_ID_EITHER_NOTHING,_OR_SOMETHING_REALLY_REALLY_SMALL = 0x24F0,
    MOBY_ID_MINITURRET_LAUNCHER = 0x24F2,
    MOBY_ID_MINITURRET_GUN_NO_STAND = 0x24F8,
    MOBY_ID_LASERBACK = 0x24F9,
    MOBY_ID_ANNOUNCER_SHIP = 0x2506,
    MOBY_ID_BIG_GRAY_BOX = 0x2507,
    MOBY_ID_TEMPUS_SCENERY_BOT_FLYING = 0x2509,
    MOBY_ID_TORVAL_GLASS_FLOOR_HALLWAY = 0x250F,
    MOBY_ID_SKIN_RATCHET = 0x251C,
    MOBY_ID_SKIN_BATTLEBOT = 0x251D,
    MOBY_ID_SKIN_DREADBOT = 0x251E,
    MOBY_ID_SKIN_EVISCRATOR = 0x251F,
    MOBY_ID_SKIN_SHELLSHOCK = 0x2520,
    MOBY_ID_SKIN_SQUIDZOR = 0x2521,
    MOBY_ID_SKIN_THE_MUSCLE = 0x2522,
    MOBY_ID_SKIN_MR_SUNSHINE = 0x2523,
    MOBY_ID_SKIN_VENUS = 0x2524,
    MOBY_ID_SKIN_ACE = 0x2525,
    MOBY_ID_SKIN_REAPER = 0x2526,
    MOBY_ID_SKIN_KID_NOVA = 0x2527,
    MOBY_ID_SKIN_STARSHIELD = 0x2528,
    MOBY_ID_SKIN_KING_CLAUDE = 0x2529,
    MOBY_ID_SKIN_THRILLER = 0x252A,
    MOBY_ID_SKIN_ALPHA_CLANK = 0x252B,
    MOBY_ID_SKIN_W3RM = 0x252C,
    MOBY_ID_SKIN_LANDSHARK = 0x252D,
    MOBY_ID_SKIN_VERNON = 0x252E,
    MOBY_ID_SKIN_JAK = 0x252F,
    MOBY_ID_SKIN_RENEGADE = 0x2530,
    MOBY_ID_SKIN_EUGENE = 0x2531,
    MOBY_ID_CONQUEST_HACKER_ORB = 0x253A,
    MOBY_ID_ROCKET1 = 0x253F,
    MOBY_ID_DECORATIVE_BANNER = 0x2546,
    MOBY_ID_TORVAL_PLATFORM = 0x254E,
    MOBY_ID_TORVAL_GLASS_ROOF_1 = 0x2669,
    MOBY_ID_TORVAL_GLASS_ROOF_2 = 0x266A,
    MOBY_ID_CONQUEST_TURRET_HOLDER_TRIANGLE_THING = 0x2554,
    MOBY_ID_CONQUEST_NODE_TURRET = 0x2555,
    MOBY_ID_CONQUEST_POWER_TURRET = 0x2556,
    MOBY_ID_CONQUEST_ROCKET_TURRET = 0x2557,
    MOBY_ID_GHOST_STATION_INTERIOR_SLIDING_DOORS = 0x255A,
    MOBY_ID_B6_BALL_UNKNOWN = 0x2561,
    MOBY_ID_BATTLEDOME_LIGHT = 0x2566,
    MOBY_ID_TORVAL_ESCAPE_SHUTTLE = 0x256D,
    MOBY_ID_ROCKET_OF_SOME_SORT = 0x2604,
    MOBY_ID_RED_ELEVATOR_LIFT = 0x2607,
    MOBY_ID_SHIELD_LINK = 0x260A,
    MOBY_ID_B6_BOMB_2 = 0x260D,
    MOBY_ID_HARBINGER = 0x2613,
    MOBY_ID_MIGHT_BE_THE_FAKE_SARATHOS_ISLANDS_ONLY_SEEN_IN_SPLITSCREEN = 0x261E,
    MOBY_ID_PICKUP_PAD = 0x261F,
    MOBY_ID_ROCKET2 = 0x2620,
    MOBY_ID_MARAXUS_JAIL_DOOR = 0x2622,
    MOBY_ID_TURRET_SHIELD_UPGRADE = 0x2628,
    MOBY_ID_MAGMA_CANNON_SHOT = 0x262B,
    MOBY_ID_CHARGE_BOOTS_PLAYER_EQUIP_VERSION = 0x262D,
    MOBY_ID_CIRCLE_BARRICADE = 0x2639,
    MOBY_ID_WEAPON_VENDOR = 0x263A,
    MOBY_ID_FLOOR_SHIELD = 0x263B,
    MOBY_ID_PLAYER_TURRET_CAMPAIGN = 0x263E,
    MOBY_ID_BOT_UPGRADE_VENDOR = 0x2643,
    MOBY_ID_GHOST_STATION_SCENERY_SHIP = 0x2659,
    MOBY_ID_SARATHOS_FLOATING_ORGANISM = 0x265A,
    MOBY_ID_SARATHOS_LAND_BUBBLE_ORGANISM = 0x2664,
    MOBY_ID_DECORATIVE_FLAG_WITH_POLE = 0x2667,
    MOBY_ID_FLAG_SPAWN_POINT = 0x266E,
    MOBY_ID_RED_DREADZONE_LIFT = 0x2677,
    MOBY_ID_BOLT_CRATE_DEBRIS_3 = 0x267E,
    MOBY_ID_BATTLE_BOT = 0x268B,
    MOBY_ID_PIG = 0x2692,
    MOBY_ID_SWARMER_BLUE = 0x2695,
    MOBY_ID_TORVAL_STREET_LIGHT = 0x2699,
    MOBY_ID_KRONOS_SCENERY_SHIP = 0x269C,
    MOBY_ID_VALIX_BEAM_REFLECTOR = 0x269F,
    MOBY_ID_VALIX_BEAM_REFLECTOR_STAND = 0x26A5,
    MOBY_ID_VALIX_BEAM_REFLECTOR_PART = 0x26A7,
    MOBY_ID_GRIND_RAIL_END_PIECE_RED_LIGHTS = 0x26AB,
    MOBY_ID_VALIX_ASTEROID = 0x26B4,
    MOBY_ID_VALIX_ASTEROID_2 = 0x26B5,
    MOBY_ID_GREEN_FLAG = 0x26BC,
    MOBY_ID_ORANGE_FLAG = 0x26BD,
    MOBY_ID_HARBINGER_SHOT_PART_1 = 0x26C3,
    MOBY_ID_RANK_O_METER = 0x26CA,
    MOBY_ID_BATTLEDOME_GLASS = 0x26CB,
    MOBY_ID_DECORATIVE_FLAG = 0x26CC,
    MOBY_ID_DZ_STRIKER_TORSO_GREEN = 0x26D0,
    MOBY_ID_DZ_STRIKER_LEGS_GREEN_2 = 0x26D1,
    MOBY_ID_DREADBOT_TORSO = 0x26D3,
    MOBY_ID_DREADBOT_LEGS = 0x26D4,
    MOBY_ID_BOT_BOMB_GLOWING_RED_ORANGE_THING_USED_ON_CATACROM_STATUES = 0x26E5,
    MOBY_ID_HARBINGER_SHORT_PART_2 = 0x26EA,
    MOBY_ID_SHELLSHOCK_EXTERMINATOR_CARD = 0x26FA,
    MOBY_ID_ENEMY_BOT_SHOT = 0x26F1,
    MOBY_ID_REACTOR_EXTERMINATOR_CARD = 0x26FB,
    MOBY_ID_EVISCERATOR_EXTERMINATOR_CARD = 0x26FC,
    MOBY_ID_ACE_HARDLIGHT_EXTERMINATOR_CARD = 0x26FD,
    MOBY_ID_VOX_EXTERMINATOR_CARD = 0x26FE,
    MOBY_ID_BATTLEDOME_GLASS_2 = 0x2714,
    MOBY_ID_RATCHET_HELMET_SCREEN_OVERLAY = 0x2715,
    MOBY_ID_SLUGGA_EXTERMINATOR_CARD = 0x2716,
    MOBY_ID_SOMETHING_INVISIBLE_FROM_GHOST_STATION = 0x271E,
    MOBY_ID_BLUE_SCENERY_DREADZONE_SHIP = 0x2720,
    MOBY_ID_STALKER_TURRET_BASE = 0x2722,
    MOBY_ID_OBJECTIVE_GOAL_PAD_USUALLY_HAS_BIG_BLUE_LIGHT_TUBE_ON_IT = 0x2724,
    MOBY_ID_CAPTAIN_QWARK_DZ_STRIKER_TORSO = 0x2726,
    MOBY_ID_CAPTAIN_QWARK_DZ_STRIKER_LEGS = 0x2727,
    MOBY_ID_SOMETHING_INVISIBLE_FROM_GHOST_STATION_2 = 0x2728,
    MOBY_ID_NINJA_SWORD = 0x272E,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_BUILDING_PIECE = 0x2739,
    MOBY_ID_BATTLEDOME_CONTAINMENT_SUITE_BUILDING_PIECE_2 = 0x273A,
    MOBY_ID_RATCHET = 0x2752,
    MOBY_ID_CYCLOID_GREEN = 0x2756,
    MOBY_ID_CYCLOID_BLADE_WINGS_GREEN = 0x2757,
    MOBY_ID_INTERPLANETARY_TRANSPORT_SHIP_2 = 0x2766,
    MOBY_ID_NOTHING = 0x276E,
    MOBY_ID_UYA_RATCHET = 0x277E,
    MOBY_ID_SHAAR_POLES_THEY_GO_IN_THE_HOLES_ON_THE_SIDES_OF_THE_TEMPLE = 0x2789,
    MOBY_ID_QUICK_FUSION_SHOT_DISSAPEAR = 0x2E9F,
    MOBY_ID_BIG_BROWN_CIRCLE_THING = 0x333D,
    MOBY_ID_BIG_BROWN_CIRCLE_THING_2 = 0x3341,
};

/*
 * NAME :    Moby
 * 
 * DESCRIPTION :
 *       Contains the moby struct data.
 * 
 * NOTES :
 *          Mobies are objects that can be spawned in game.
 *          This includes things like vehicles, turrets, mod pads, etc
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
typedef struct Moby
{
    VECTOR BSphere;
    VECTOR Position;
    char State;
    u8 Group;
    char MClass;
    u8 Opacity;
    void * PClass;
    struct Moby * PChain;
    char CollDamage;
    char DeathCnt;
    u16 OcclIndex;
    char UpdateDist;
    char Drawn;
    short DrawDist;
    u16 ModeBits;
    u16 ModeBits2;
    u32 Lights;
    u32 PrimaryColor;
    void * AnimSeq;
    float AnimSeqT;
    float AnimSpeed;
    short AnimIScale;
    short PoseCacheEntryIndex;
    void * AnimLayers;
    char AnimSeqId;
    char AnimFlags;
    char LSeq;
    char JointCnt;
    void * JointCache;
    void * PManipulator;
    u32 GlowRGBA;
    char LodTrans;
    char LodTrans2;
    char Metal;
    char SubState;
    char PrevState;
    char StateType;
    u16 StateTimer;
    char SoundTrigger;
    char SoundDesired;
    short SoundChannel;
    float Scale;
    u16 Bangles;
    char Shadow;
    char ShadowIndex;
    float ShadowPlane;
    float ShadowRange;
    VECTOR LSphere;
    union
    {
        struct Guber * Guber;
        struct GuberMoby * GuberMoby;
        void * NetObject;
        Gid NetObjectGid;
    };
    short UpdateId;
    short Spad0;
    int * CollData;
    int CollActive;
    u32 CollCnt;
    char GridMinX;
    char GridMinY;
    char GridMaxX;
    char GridMaxY;
    void * PUpdate;
    void * PVar;
    char Mission;
    char Pad;
    short UID;
    short Bolts;
    u16 Xp;
    struct Moby* PParent;
    short OClass;
    char Triggers;
    char StandardDeathCalled;
    VECTOR M0_03;
    VECTOR M1_03;
    VECTOR M2_03;
    VECTOR Rotation;
} Moby;

typedef struct MobyColDamageIn {
    VECTOR Momentum;
    Moby * Damager;
    int DamageFlags;
    u8 DamageClass;
    u8 DamageStrength;
    u16 DamageIndex;
    float DamageHp;
    int Flags;
    float DamageHeroHp;
    int ShotUID;
    int UNK_2C;
} MobyColDamageIn;

typedef struct MobyColDamage {
    VECTOR Ip;
    VECTOR Momentum;
    Moby* Damager;
    int DamageFlags;
    u8 DamageClass;
    u8 DamageStrength;
    u16 DamageIndex;
    float DamageHp;
    int Flags;
    float DamageHeroHp;
    int ShotUID;
    Moby* Moby;
} MobyColDamage;


enum FlashTypes {
  FT_NONE = 0,
  FT_HIT = 1,
  FT_SELECT = 2,
  FT_PULSE = 3,
  FT_BLINK = 4,
  FT_SOLID = 5,
  FT_SLOWFADE = 6
};

struct FlashVars {
  /*   0 */ short int timer;
  /*   2 */ short int type;
  /*   4 */ int destColor;
  /*   8 */ int srcColor;
  /*   c */ int flags;
};

struct TargetVars {
  /*   0 */ float hitPoints;
  /*   4 */ int maxHitPoints;
  /*   8 */ unsigned char attackDamage[6];
  /*   e */ short int hitCount;
  /*  10 */ int flags;
  /*  14 */ float targetHeight;
  /*  18 */ Moby* mobyThatHurtMeLast;
  /*  1c */ float camPushDist;
  /*  20 */ float camPushHeight;
  /*  24 */ short int damageCounter;
  /*  26 */ short int empTimer;
  /*  28 */ short int infectedTimer;
  /*  2a */ short int invincTimer;
  /*  2c */ short int bogeyType;
  /*  2e */ short int team;
  /*  30 */ char lookAtMeDist;
  /*  31 */ char lookAtMePriority;
  /*  32 */ char lookAtMeZOfsIn8ths;
  /*  33 */ char lookAtMeJoint;
  /*  34 */ char lookAtMeExpression;
  /*  35 */ char lockOnPriority;
  /*  36 */ char soundType;
  /*  37 */ char targetRadiusIn8ths;
  /*  38 */ char noAutoTrack;
  /*  39 */ char trackSpeedInMps;
  /*  3a */ char camModOverride;
  /*  3b */ char destroyMe;
  /*  3c */ char morphoraySpecial;
  /*  3d */ char headJoint;
  /*  3e */ char hitByContinuous;
  /*  3f */ char infected;
  /*  40 */ char empFxTimer;
  /*  41 */ char weaponTargetedOnMe;
  /*  42 */ char isOrganic;
  /*  43 */ signed char bundleIndex;
  /*  44 */ char bundleDamage;
  /*  45 */ char firedAt;
  /*  46 */ char weaponThatHurtMeLast;
  /*  47 */ char invalidTarget;
  /*  48 */ int maxDifficultySlotted;
  /*  4c */ int curDifficultySlotted;
  /*  50 */ Moby* pTargettedByBogeys[8];
  /*  70 */ Moby* mobyThatFiredAtMe;
  /*  74 */ int targetShadowMask;
  /*  78 */ int damageTypes;
  /*  7c */ int padA;
  /*  80 */ float morphDamage;
  /*  84 */ float freezeDamage;
  /*  88 */ float infectDamage;
  /*  8c */ float lastDamage;
};

struct MoveVarsAnimCache {
  /*   0 */ long unsigned int actCache[32];
  /* 100 */ long unsigned int reactCache[7];
  /* 138 */ long unsigned int elvCache[5];
  /* 160 */ long unsigned int motCache[3];
  /* 178 */ long unsigned int dirCache[4];
  /* 198 */ long unsigned int grpCache[33];
  /* 2a0 */ long unsigned int alertCache[4];
};

struct MoveVars_V2 {
  /*   0 */ int flags;
  /*   4 */ int internalFlags;
  /*   8 */ int effectorFlags;
  /*   c */ int dirty;
  /*  10 */ float maxStepUp;
  /*  14 */ float maxStepDown;
  /*  18 */ int avoidHotspots;
  /*  1c */ int passThruHotspots;
  /*  20 */ short int arrestedTimer;
  /*  22 */ short int lostTimer;
  /*  24 */ float gravity;
  /*  28 */ float slopeLimit;
  /*  2c */ float maxFlightAngle;
  /*  30 */ char elv_state;
  /*  31 */ char alert_state;
  /*  32 */ char reaction_state;
  /*  33 */ char action_state;
  /*  34 */ char blend;
  /*  35 */ char lockAnim;
  /*  36 */ short int numColl;
  /*  38 */ struct MoveVarsAnimCache* pAnimCache;
  /*  3c */ struct MoveVarsAnimCache* pAttachAnimCache;
  /*  40 */ Moby** effectorOverrideList;
  /*  44 */ int effectorOverrideCount;
  /*  48 */ int boundArea;
  /*  4c */ Moby* pIgnoreCollMoby;
  /*  50 */ Moby* pBumpMoby;
  /*  54 */ Moby* pGroundMoby;
  /*  58 */ Moby* pIgnoreEffector;
  /*  5c */ Moby* pAttach;
  /*  60 */ int attachJoint;
  /*  64 */ float attachMaxRot;
  /*  68 */ float actionStartFrame;
  /*  6c */ void* pActionCallback;
  /*  70 */ int lastUpdateFrame;
  /*  74 */ int animGroups;
  /*  78 */ float collRadius;
  /*  7c */ float gravityVel;
  /*  80 */ float swarmOfsAmp;
  /*  84 */ int swarmOfsTimer;
  /*  88 */ int swarmOfsMinTime;
  /*  8c */ int swarmOfsMaxTime;
  /*  90 */ float stopDist;
  /*  94 */ float walkDist;
  /*  98 */ float runDist;
  /*  9c */ float walkSpeed;
  /*  a0 */ float runSpeed;
  /*  a4 */ float strafeSpeed;
  /*  a8 */ float backSpeed;
  /*  ac */ float flySpeed;
  /*  b0 */ float linearAccel;
  /*  b4 */ float linearDecel;
  /*  b8 */ float linearLimit;
  /*  bc */ float linearSpeed;
  /*  c0 */ float angularAccel;
  /*  c4 */ float angularDecel;
  /*  c8 */ float angularLimit;
  /*  cc */ float hitGroundSpeed;
  /*  d0 */ float legFacing;
  /*  d4 */ float bodyFacing;
  /*  d8 */ float legAngularSpeed;
  /*  dc */ float bodyAngularSpeed;
  /*  e0 */ float groundSlope;
  /*  e4 */ float groundZ;
  /*  e8 */ int groundHotspot;
  /*  ec */ int groundCheckFrame;
  /*  f0 */ int onGround;
  /*  f4 */ int offGround;
  /*  f8 */ float passThruSurface;
  /*  fc */ int passThruSurfaceType;
  /* 100 */ float projectedLandingZ;
  /* 104 */ float moveDamper;
  /* 108 */ short int moveDamperTimer;
  /* 10a */ char curNode;
  /* 10b */ char destNode;
  /* 10c */ struct Path* pLastFollowPath;
  /* 110 */ float walkTurnFactor;
  /* 114 */ float desiredFacing;
  /* 120 */ VECTOR vel;
  /* 130 */ VECTOR arrestedPos;
  /* 140 */ VECTOR groundNormal;
  /* 150 */ VECTOR jumpVel;
  /* 160 */ VECTOR target;
  /* 170 */ VECTOR passThruPoint;
  /* 180 */ VECTOR passThruNormal;
  /* 190 */ VECTOR waypoint;
  /* 1a0 */ u64 groupCache;
  /* 1a8 */ u64 attachGroupCache;
};

struct MobyFunctions;

typedef struct MobyFunctions* (*MobyGetInterface_func)(int mobyId, int arg2, int arg3);
typedef struct Guber* (*MobyGetGuberObject_func)(Moby * moby);
typedef void (*MobyEventHandler_func)(Moby * moby, struct GuberEvent * event);

typedef struct MobyFunctions
{
    void * FUNC_00;
    MobyGetGuberObject_func GetGuberObject;
    void * FUNC_08;
    void * FUNC_0C;
    MobyGetInterface_func GetMobyInterface;
    MobyEventHandler_func MobyEventHandler;
    void * GetDamager;
    void * FUNC_1C;

} MobyFunctions;

/*
 * Spawns a moby with the given id and properties size.
 */
Moby * mobySpawn(int id, int propSize);

/*
 * Returns pointer to the start of the moby list.
 */
__LIBDL_GETTER__ Moby * mobyListGetStart(void);

/*
 * Returns pointer to the end of the moby list.
 */
__LIBDL_GETTER__ Moby * mobyListGetEnd(void);

/*
 *
 */
__LIBDL_GETTER__ u16 * mobyGetLoadedMobyClassList(void);

/*
 * Returns non-zero if the given moby is destroyed.
 */
__LIBDL_GETTER__ int mobyIsDestroyed(Moby* moby);

/*
 * Returns a pointer to the next living moby of the given oclass.
 * Returns NULL if none found.
 */
Moby* mobyFindNextByOClass(Moby* start, int oClass);

/*
 * Returns pointer to the moby's MobyClass (if loaded).
 */
void * mobyGetClass(int oClass);

/*
 * Returns non-zero if the given o class is loaded in the map.
 */
int mobyClassIsLoaded(int oClass);

/*
 * Destroys the given moby.
 */
void mobyDestroy(Moby * moby);

/*
 * Updates the moby's transform
 */
void mobyUpdateTransform(Moby * moby);

/*
 * Gets a pointer to the moby functions
 */
MobyFunctions * mobyGetFunctions(Moby * moby);

/*
 * 
 */
void mobySetState(Moby* moby, char a1, long a2);

/*
 * 
 */
int mobyPlaySound(short a0, u8 a1, Moby* moby);

/*
 * 
 */
int mobyPlaySoundByClass(short a0, u8 a1, Moby* moby, int oclass);

/*
 * 
 */
void mobyAnimTransition(Moby* moby, int animId, int a2, float f12);

/*
 * 
 */
void mobyCollDamageDirect(Moby* target, MobyColDamageIn * in);

/*
 * If a2 is zero and the filter doesn't match an existing damage entry,
 * the moby's damage index will be reset to -1.
 * Otherwise it will be left.
 */
MobyColDamage* mobyGetDamage(Moby* moby, int damageFlagsFilter, int a2);

/*
 * 
 */
void mobyProcessDamage(Moby* moby, float* damageOut, MobyColDamage* colDamageIn);

/*
 *
 */
int mobyGetNumSpawnableMobys(void);

/*
 * 
 */
int mobyIsHero(Moby* moby);

/*
 * 
 */
void mobyMoveSystemUpdate(Moby* moby);

/*
 * 
 */
void mobyMoveSystemInit(Moby* moby);

/*
 * 
 */
void mobySetMoveDistanceThresholds(Moby* moby, float collRadius, float stopDist, float walkDist, float runDist);

/*
 * 
 */
void mobySetMoveSpeedLimits(Moby* moby, float linearAccel, float linearDecell, float walkSpeed, float runSpeed, float strafeSpeed, float backSpeed, float flySpeed);

/*
 * 
 */
void mobySetMoveAngularSpeeds(Moby* moby, float angularAccel, float angularDecel, float angularLimit);

/*
 *
 */
void mobySetAnimCache(Moby* moby, void* cache1, void* cache2);

/*
 * 
 */
void mobyMove(Moby* moby, u128 vectorTo, float dt);

/*
 * 
 */
void mobyStand(Moby* moby);

/*
 * 
 */
void mobyUpdateFlash(Moby* moby, struct FlashVars* flashVars);

/*
 * 
 */
void mobyStartFlash(Moby* moby, int flashType, u32 color, struct FlashVars* flashVars);

/*
 * 
 */
void mobyBlowCorn(Moby* moby, int bangle, u128 baseVelocity
                , float minEmitHorizontalSpeed, float maxEmitHorizontalSpeed, float minEmitVerticalSpeed, float maxEmitVerticalSpeed
                , char arg8
                , float gravity, float rotationalVelocity
                , int lifetime, int arg12
                , int arg13, int bArg14, float arg15, int arg16
                , int arg17, float arg18, Moby* arg19, int arg20);

void mobyGetJointMatrix(Moby* moby, int jointIdx, MATRIX out);
void mobyComputeJointWorldMatrix(Moby* moby, int jointIdx, MATRIX out);

/*
 *
 */
Moby* mobySpawnExplosion(u128 pos,int bCameraShake,int numMoonRock,int numSliver,
              int numMoltenRock,int numCloud,u16 numLines,u16 numPlumes,int bDistort,
              int bShell,int bScreenFlash1,int bScreenFlash2,int bGroundRing,int bRandomRing,
              int damageFlags,Moby *pPlatform,int colorCenterCore1,int colorCenterCore2,int colorMoonRock,
              int colorMoonRockGlow,int colorSliver,int colorMoltenRock,int colorCloud,
              int colorShell,int colorRing,int bDirtyRing,Moby *pDamager,Moby *pIgnore,u128 externalVel,
              float exploScale,float pointLightRadius,float damageHp,float damageRadius);

void mobySpawnMinibombs(Moby* pParent, int count, VECTOR rootVel, float randSpeed, float damage, int damageFlags, int lifeTimeMin, int lifeTimeMax, int weaponSource);

int flagIsReturning(Moby* flagMoby);
int flagIsBeingPickedUp(Moby* flagMoby);
int flagIsOnSafeGround(Moby* flagMoby);
int flagIsAtBase(Moby* flagMoby);
void flagReturnToBase(Moby* flagMoby, int a0, char returnedByPlayerIdx);
void flagPickup(Moby* flagMoby, int playerIdx);

#endif // _LIBDL_MOBY_H_
