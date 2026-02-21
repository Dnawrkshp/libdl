/***************************************************
 * FILENAME :    ui.h
 * 
 * DESCRIPTION :
 *     
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_UI_H_
#define _LIBDL_UI_H_

#include "common.h"

enum UiMenuIds
{
    UI_MENU_ID_BETA_ONLINE_LOBBY = 0x0,
    UI_MENU_ID_GAME_DETAILS = 0x1,
    UI_MENU_ID_ONLINE_AGREEMENT_PAGE_2 = 0x2,
    UI_MENU_ID_BUDDY_LIST = 0x3,
    UI_MENU_ID_CLAN_CHALLENGE_LIST = 0x4,
    UI_MENU_ID_CLAN_1 = 0x5,
    UI_MENU_ID_CLAN_MESSAGE = 0x6,
    UI_MENU_ID_CLAN_3 = 0x7,
    UI_MENU_ID_CLAN_4 = 0x8,
    UI_MENU_ID_CLAN_INVITE = 0x9,
    UI_MENU_ID_CLAN_ROOM = 0xA,
    UI_MENU_ID_CLAN_YES_NO_MESSAGE_BOX = 0xB,
    UI_MENU_ID_CREATE_GAME = 0xC,
    UI_MENU_ID_DNAS_AUTH = 0xD,
    UI_MENU_ID_SELECT_NETWORK = 0xE,
    UI_MENU_ID_FIND_GAME = 0xF,
    UI_MENU_ID_GAME_INFO = 0x10,
    UI_MENU_ID_INVITE_BUDDY = 0x11,
    UI_MENU_ID_END_GAME_DETAILS = 0x12,
    UI_MENU_ID_IGNORED_PLAYERS = 0x13,
    UI_MENU_ID_KEYBOARD = 0x14,
    UI_MENU_ID_ONLINE_AGREEMENT_PAGE_1 = 0x15,
    UI_MENU_ID_STAGING_SECONDARY_PLAYER_OPTIONS = 0x16,
    UI_MENU_ID_CREATE_GAME1 = 0x17,
    UI_MENU_ID_END_GAME_DETAILS_2 = 0x18,
    UI_MENU_ID_LOCAL_PLAY_STAGING = 0x19,
    UI_MENU_ID_ONLINE_LOCAL_EDIT_PROFILE_MENU = 0x1A,
    UI_MENU_ID_ONLINE_LOBBY = 0x1B,
    UI_MENU_ID_FORM_PARTY = 0x1C,
    UI_MENU_ID_PLAYER_PROFILE = 0x1D,
    UI_MENU_ID_EDIT_PROFILE = 0x1E,
    UI_MENU_ID_ONLINE_PROFILE_SELECT = 0x1F,
    UI_MENU_ID_RECENT_PLAYERS = 0x20,
    UI_MENU_ID_STAGING = 0x21,
    UI_MENU_ID_IN_GAME_DETAILS = 0x22,
    UI_MENU_ID_CHANGE_SKIN_TEAM = 0x23,
    UI_MENU_ID_STATS = 0x24,
    UI_MENU_ID_VEHICLE_SELECT = 0x25,
    UI_MENU_ID_WEAPON_SELECT = 0x26,
    UI_MENU_ID_KEYBOARD_UNK = 0x27,
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

enum UiElementType
{
    UI_ELEMENT_MENU = -1,
    UI_ELEMENT_BUTTON = 0,
    UI_ELEMENT_NUMBER_SELECT = 8,
    UI_ELEMENT_TEXT = 10,
};

enum UiSoundIds
{
    UI_SOUND_ID_NAV_UP_DOWN = 0x00,
    UI_SOUND_ID_OPEN_MENU = 0x01,
    UI_SOUND_ID_UYA_OPEN_MENU = 0x03,
    UI_SOUND_ID_BAD_SELECT = 0x04,
    UI_SOUND_ID_OPEN_SUBMENU = 0x07,
    UI_SOUND_ID_CLOSE_SUBMENU = 0x08,
    UI_SOUND_ID_OPEN_SUBMENU_2 = 0x0B,
    UI_SOUND_ID_CLOSE_MENU_DECLINE = 0x0C,
    UI_SOUND_ID_CLOSE_MENU_ACCEPT = 0x0E,
    UI_SOUND_ID_SELECT = 0x25,
};

typedef struct UiElement
{
    enum UiElementType Type;
    int State;
    int LastState;
    struct UiElement* Parent;
} UiElement_t;

typedef struct UiTextElement
{
    UiElement_t Element;
    char PAD_10[0x48];
    void* VTable;
    unsigned int Id;
    char Text[200];
    /* 138 */
} UiTextElement_t;

typedef struct UiButtonElement
{
    UiElement_t Element;
    int SelectId;
    int Id;
    char Text[64];
    void* VTable;
    int PAD_5C;
    /* 60 */
} UiButtonElement_t;

typedef struct UiMenu
{
    UiElement_t Element;
    char PAD_10[0x48];
    void* VTable;
    char PAD_5C[0x40];
    int Id;
    int ReturnToMenuId;
    int LastMenuId;
    char PAD_A8[0x04];
    int ChildCount;
    UiElement_t* Children[64];
} UiMenu_t;

/*
 * NAME :    uiChangeMenu
 * 
 * DESCRIPTION :
 *       Sets the current ui menu id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiChangeMenu(enum UiMenuIds menuId);

/*
 * NAME :    uiGetActive
 * 
 * DESCRIPTION :
 *       Gets the current ui id.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
__LIBDL_GETTER__ int uiGetActive(void);

/*
 * NAME :    uiShowYesNoDialog
 * 
 * DESCRIPTION :
 *       Shows a blocking yes no dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 *          Returns 1 if 'Yes' is selected.
 *          Returns 2 if 'No' is selected.
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int uiShowYesNoDialog(const char * title, const char * description);

/*
 * NAME :    uiShowOkDialog
 * 
 * DESCRIPTION :
 *       Shows a blocking ok dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int uiShowOkDialog(const char * title, const char * description);

/*
 * NAME :    uiShowSelectDialog
 * 
 * DESCRIPTION :
 *       Shows a blocking select dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int uiShowSelectDialog(const char * title, const char * items[], int itemCount, int selectedIndex);

/*
 * NAME :    uiShowInputDialog
 * 
 * DESCRIPTION :
 *       Shows a blocking text input dialog.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int uiShowInputDialog(const char * title, char * value, int maxLength);

/*
 * NAME :    uiShowPopup
 * 
 * DESCRIPTION :
 *       Shows a popup with the given text to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      message             :               Message to show.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiShowPopup(int localPlayerIndex, const char * message);

/*
 * NAME :    uiShowLowerPopup
 * 
 * DESCRIPTION :
 *       Shows a popup on bottom of the screen with the given msg string text to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      msgStringId         :               Message to show.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiShowLowerPopup(int localPlayerIdx, int msgStringId);

/*
 * NAME :    uiShowHelpPopup
 * 
 * DESCRIPTION :
 *       Shows a help popup with the given text to the given local player.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      localPlayerIndex    :               Local player to show popup for.
 *      message             :               Message to show.
 *      ticks               :               How many ticks to show the popup for.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiShowHelpPopup(int localPlayerIndex, const char * message, int ticks);

/*
 * NAME :    uiShowTimer
 * 
 * DESCRIPTION :
 *       Shows a timer popup with the given text and time to the given local player.
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
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiShowTimer(int localPlayerIndex, const char * message, long timeMs);

/*
 * NAME :    uiMsgString
 * 
 * DESCRIPTION :
 *       Returns the string associated with the given text id.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      textId              :               Id of the string to return.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
char * uiMsgString(int textId);


/*
 * NAME :    uiGetPointer
 * 
 * DESCRIPTION :
 *       Returns pointer to the given ui menu.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      id              :               Id of the menu.
 * 
 * RETURN :
 * 
 * AUTHOR :      Troy "Agent Moose" Pruitt
 */
UiMenu_t* uiGetPointer(int id);

/*
 * NAME :    uiGetActivePointer
 * 
 * DESCRIPTION :
 *       Returns the pointer to the current menu.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Troy "Agent Moose" Pruitt
 */
UiMenu_t* uiGetActivePointer(void);

/*
 * NAME :    uiRunCallbacks
 * 
 * DESCRIPTION :
 *       Runs background ui callbacks.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiRunCallbacks(void);

/*
 * NAME :    uiPlaySound
 * 
 * DESCRIPTION :
 *       Plays the given menu sound.
 * 
 * NOTES :
 * 
 * ARGS : 
 *      soundId             :               Id of the sound to play.
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
void uiPlaySound(int soundId, int a1);

/*
 * NAME :    uiPrintCommaNumber
 * 
 * DESCRIPTION :
 *       Prints the number with commas to the buffer.
 * 
 * NOTES :
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */
int uiPrintCommaNumber(char* buffer, int size, long number, int bShowSign);

#endif // _LIBDL_UI_H_
