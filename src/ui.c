#include "ui.h"

#define UI_ACTIVE_ID                            (*(int*)0x003434B8)
#define UI_DIALOG_A0                            ((void*)0x011C7000)

int internal_uiDialog(void *, const char *, const char *, int, int, int, int);

int uiGetActive(void)
{
    return UI_ACTIVE_ID;
}

/*========================================================*\
========              Grabs the Active Pointer
================      if true: returns Pointer
========              if false: returns zero
\*========================================================*/
int GetActiveUIPointer(u8 UI)
{
	int UI_POINTER_LIST = 0x011C7064;
	int Pointer = (*(u32*)((u32)UI_POINTER_LIST + (UI * 0x4)));
	int ActiveUIPointer = (*(u32*)0x011C7108);
	if (ActiveUIPointer == Pointer)
	{
		return Pointer;
	}
	else
	{
		return 0;
	}
}

int uiShowYesNoDialog(const char * title, const char * description)
{
    return internal_uiDialog(UI_DIALOG_A0, title, description, 3, 0, 1, 0);
}

int uiShowOkDialog(const char * title, const char * description)
{
    return internal_uiDialog(UI_DIALOG_A0, title, description, 4, 0, 0, 0);
}
