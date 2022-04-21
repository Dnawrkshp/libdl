#include "ui.h"

#define UI_ACTIVE_ID                            (*(int*)0x003434B8)
#define UI_DIALOG_A0                            ((void*)0x011C7000)

int internal_uiDialog(void *, const char *, const char *, int, int, int, int);
int internal_uiSelectDialog(void *, const char *, const char **, int, int, int, int);

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
