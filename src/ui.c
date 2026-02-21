#include "ui.h"
#include "game.h"
#include "string.h"

#define UI_ACTIVE_ID                            (*(int*)0x003434B8)
#define UI_DIALOG_A0                            ((void*)0x011C7000)

int internal_uiDialog(void *, const char *, const char *, int, int, int, int);
int internal_uiSelectDialog(void *, const char *, const char **, int, int, int, int);
int internal_uiInputDialog(void *, const char *, char *, int, int, int, int, int, int);
char * internal_uiMsgString_inGame(int textId);
char * internal_uiMsgString_inLobby(int textId);
void internal_uiPlaySound_inLobby(int soundId, int a1, Moby* moby);
void internal_uiPlaySound_inGame(int soundId, int a1, Moby* moby);
int internal_uiPrintCommaNumber_inGame(char* buffer, long number, int bShowSign);
int internal_uiPrintCommaNumber_inLobby(char* buffer, long number, int bShowSign);

int uiGetActive(void)
{
    return UI_ACTIVE_ID;
}

int uiShowYesNoDialog(const char * title, const char * description)
{
    return internal_uiDialog(UI_DIALOG_A0, title, description, 3, 0, 1, 0);
}

int uiShowOkDialog(const char * title, const char * description)
{
    return internal_uiDialog(UI_DIALOG_A0, title, description, 4, 0, 0, 0);
}

int uiShowSelectDialog(const char * title, const char * items[], int itemCount, int selectedIndex)
{
    return internal_uiSelectDialog(UI_DIALOG_A0, title, items, itemCount, selectedIndex, 0, 0);
}

int uiShowInputDialog(const char * title, char * value, int maxLength)
{
    return internal_uiInputDialog(UI_DIALOG_A0, title, value, 0, maxLength, 0, 0, 0, 0);
}

char * uiMsgString(int textId)
{
    if (isInGame())
        return internal_uiMsgString_inGame(textId);
    else if (isInMenus())
        return internal_uiMsgString_inLobby(textId);

    return NULL;
}

void uiChangeMenu(enum UiMenuIds menuId)
{
    *(int*)((int)UI_DIALOG_A0 + 0x118) = (int)menuId;
}

UiMenu_t* uiGetPointer(int id)
{
    return *(UiMenu_t**)((u32)UI_DIALOG_A0 + 0x64 + (id * 4));
}

UiMenu_t* uiGetActivePointer()
{
    return *(UiMenu_t**)((u32)UI_DIALOG_A0 + 0x64 + 0xA4);
}

void uiPlaySound(int soundId, int a1)
{
    if (isInGame())
        internal_uiPlaySound_inGame(soundId, a1, NULL);
    else if (isInMenus())
        internal_uiPlaySound_inLobby(soundId, a1, NULL);
}

int uiPrintCommaNumber(char* buffer, int size, long number, int bShowSign)
{
    char tempBuf[64];
    int len = 0;

    if (isInGame())
        len = internal_uiPrintCommaNumber_inGame(tempBuf, number, bShowSign);
    else if (isInMenus())
        len = internal_uiPrintCommaNumber_inLobby(tempBuf, number, bShowSign);
    
    if (len <= 0)
    {
      buffer[len] = 0;
      return 0;
    }

    // function inserts a space if no sign
    // we don't want that
    int skipFirstChar = tempBuf[0] == ' ' ? 1 : 0;
    safe_strcpy(buffer, tempBuf + skipFirstChar, size);
    return len - skipFirstChar;
}
