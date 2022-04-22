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

enum UiMenuIds
{
    UI_MENU_ID_CLAN_ROOM = 0xA,
    UI_MENU_ID_ONLINE_MAIN_MENU = 0x1A,
    UI_MENU_ID_ONLINE_PROFILE_SELECT = 0x1F,
    UI_MENU_ID_STATS = 0x24
};

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

/*
 * NAME :		uiChangeMenu
 * 
 * DESCRIPTION :
 * 			Sets the current ui menu id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void uiChangeMenu(enum UiMenuIds menuId);

/*
 * NAME :		uiGetActive
 * 
 * DESCRIPTION :
 * 			Gets the current ui id.
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
 * NAME :		uiShowSelectDialog
 * 
 * DESCRIPTION :
 * 			Shows a blocking select dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int uiShowSelectDialog(const char * title, const char * items[], int itemCount, int selectedIndex);

/*
 * NAME :		uiShowInputDialog
 * 
 * DESCRIPTION :
 * 			Shows a blocking text input dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
int uiShowInputDialog(const char * title, char * value, int maxLength);

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
 * NAME :		uiShowTimer
 * 
 * DESCRIPTION :
 * 			Shows a timer popup with the given text and time to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      message             :               Message to show.
 *      timeMs              :               Time in milliseconds to show.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void uiShowTimer(int localPlayerIndex, const char * message, long timeMs);

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
