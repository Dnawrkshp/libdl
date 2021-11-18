/***************************************************
 * FILENAME :		ui.h
 * 
 * DESCRIPTION :
 * 		
 * 		
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_UI_H_
#define _LIBDL_UI_H_

#include "common.h"

enum UiIds
{
    UI_ID_MULTIPLAYER_MENU = 0xFF,
    UI_ID_DNAS_SELECT = 0x11A,
    UI_ID_ONLINE_SELECT_PROFILE = 0x10E,
    UI_ID_EDIT_PROFILE = 0x123,
    UI_ID_POPUP_YES_NO1 = 0x13B,
    UI_ID_POPUP_YES_NO2 = 0x24d,
    UI_ID_POPUP_OK = 0x270,
    UI_ID_KEYBOARD = 0x21B,
    UI_ID_ONLINE_MAIN_MENU = 0x12C,
    UI_ID_MENU_QUICKPLAY = 0x14F,
    UI_ID_MENU_CREATE_GAME = 0x136,
    UI_ID_CREATE_GAME_WEAPON_OPTIONS = 0x156,
    UI_ID_CREATE_GAME_VEHICLES = 0x14E,
    UI_ID_GAME_LOBBY = 0x23E,
    UI_ID_GAME_LOBBY_GAME_DETAILS = 0x26F,
    UI_ID_GAME_LOBBY_STAGING_ACTIONS = 0x261,
    UI_ID_GAME_LOBBY_CHANGE_TEAM = 0x259,
    UI_ID_GAME_LOBBY_INVITE_PLAYER = 0x261,
    UI_ID_GAME_LOBBY_INVITE_KEYBOARD = 0x323,
    UI_ID_MENU_FIND_GAME = 0x14C,
    UI_ID_FIND_GAME_DETAILS = 0x153,
    UI_ID_MENU_BUDDIES = 0x14b,
    UI_ID_VIEW_PROFILE = 0x122,
    UI_ID_BUDDIES_ADD_IGNORE = 0x230,
    UI_ID_MENU_CLAN = 0x119,
    UI_ID_CREATE_CLAN = 0x1FE,
    UI_ID_MENU_STATS = 0x14C,
};

enum UIPointers
{
    UIP_BETA_ONLINE_LOBBY = 0x0,
    UIP_GAME_DETAILS = 0x1,
    UIP_ONLINE_AGREEMENT_PAGE_2 = 0x2,
    UIP_BUDDY_LIST = 0x3,
    UIP_CLAN_CHALLENGE_LIST = 0x4,
    UIP_CLAN_1 = 0x5,
    UIP_CLAN_MESSAGE = 0x6,
    UIP_CLAN_3 = 0x7,
    UIP_CLAN_4 = 0x8,
    UIP_CLAN_INVITE = 0x9,
    UIP_CLAN_ROOM = 0xA,
    UIP_CLAN_YES_NO_MESSAGE_BOX = 0xB,
    UIP_CREATE_GAME = 0xC,
    UIP_DNAS_AUTH = 0xD,
    UIP_SELECT_NETWORK = 0xE,
    UIP_FIND_GAME = 0xF,
    UIP_GAME_INFO = 0x10,
    UIP_INVITE_BUDDY = 0x11,
    UIP_END_GAME_DETAILS = 0x12,
    UIP_IGNORED_PLAYERS = 0x13,
    UIP_KEYBOARD = 0x14,
    UIP_ONLINE_AGREEMENT_PAGE_1 = 0x15,
    UIP_STAGING_SECONDARY_PLAYER_OPTIONS = 0x16,
    UIP_CREATE_GAME1 = 0x17,
    UIP_END_GAME_DETAILS_2 = 0x18,
    UIP_LOCAL_PLAY_STAGING = 0x19,
    UIP_ONLINE_LOCAL_EDIT_PROFILE_MENU = 0x1A,
    UIP_ONLINE_LOBBY = 0x1B,
    UIP_FORM_PARTY = 0x1C,
    UIP_PLAYER_PROFILE = 0x1D,
    UIP_EDIT_PROFILE = 0x1E,
    UIP_SELECT_PROFILE = 0x1F,
    UIP_RECENT_PLAYERS = 0x20,
    UIP_STAGING = 0x21,
    UIP_IN_GAME_DETAILS = 0x22,
    UIP_CHANGE_SKIN_TEAM = 0x23,
    UIP_STATS = 0x24,
    UIP_VEHICLE_SELECT = 0x25,
    UIP_WEAPON_SELECT = 0x26,
    UIP_KEYBOARD_UNK = 0x27
};

/*
 * NAME :		uiGetActive
 * 
 * DESCRIPTION :
 * 			Gets the current ui menu id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int uiGetActive(void);

/*
 * NAME :		uiShowYesNoDialog
 * 
 * DESCRIPTION :
 * 			Shows a blocking yes no dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 *          Returns 1 if 'Yes' is selected.
 *          Returns 2 if 'No' is selected.
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int uiShowYesNoDialog(const char * title, const char * description);

/*
 * NAME :		uiShowOkDialog
 * 
 * DESCRIPTION :
 * 			Shows a blocking ok dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int uiShowOkDialog(const char * title, const char * description);

/*
 * NAME :		uiShowPopup
 * 
 * DESCRIPTION :
 * 			Shows a popup with the given text to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      message             :               Message to show.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void uiShowPopup(int localPlayerIndex, const char * message);

/*
 * NAME :		uiShowHelpPopup
 * 
 * DESCRIPTION :
 * 			Shows a help popup with the given text to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      message             :               Message to show.
 *      seconds             :               How many seconds to show the popup for.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void uiShowHelpPopup(int localPlayerIndex, const char * message, int seconds);

/*
 * NAME :		uiMsgString
 * 
 * DESCRIPTION :
 * 			Returns the string associated with the given text id.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      textId              :               Id of the string to return.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
char * uiMsgString(int textId);

#endif // _LIBDL_UI_H_
