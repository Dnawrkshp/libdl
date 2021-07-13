#define FUNCTION(name, address) \
    .set	push;		        \
	.set	noreorder;	        \
	.section	.text.##name,"ax",@progbits; \
	.align 2;		            \
	.globl	name;		        \
	.type	name,@function;	    \
	.ent	name,0;		        \
name:	j address;              \
	nop;			            \
	.end	name;		        \
	.size	name,.-name;	    \
	.set	pop;


#--------------------------------------------------------
#------------------- STANDARD LIBRARY -------------------
#--------------------------------------------------------
FUNCTION(printf, 0x0011D5D8)
FUNCTION(sprintf, 0x0011D920)
FUNCTION(memset, 0x0011A518)
FUNCTION(memcpy, 0x0011A370)
FUNCTION(strncpy, 0x0011AFC8)

#--------------------------------------------------------
#------------------------- MATH -------------------------
#--------------------------------------------------------
# FUNCTION(cosf, 0x00135878)
FUNCTION(asinf, 0x00136278)
FUNCTION(sqrtf, 0x00136C90)
FUNCTION(powf, 0x00136788)
FUNCTION(fabsf, 0x00135960)
FUNCTION(fptodp, 0x00131918)
FUNCTION(floorf, 0x001359A8)

#--------------------------------------------------------
#------------------------ COLOR -------------------------
#--------------------------------------------------------
FUNCTION(lerpColor, 0x004d75e0)

#--------------------------------------------------------
#------------------------ DIALOG ------------------------
#--------------------------------------------------------
FUNCTION(internal_dialogPlaySound_inGame, 0x004E3688)
FUNCTION(internal_dialogPlaySound_inLobby, 0x005C97D8)

#--------------------------------------------------------
#------------------------- MUSIC ------------------------
#--------------------------------------------------------

FUNCTION(internal_musicPlayTrack_inGame, 0x0051F980)
FUNCTION(internal_musicPlayTrack_inLobby, 0x005FEDE8)
FUNCTION(internal_musicStopTrack_inGame, 0x0051FD28)
FUNCTION(internal_musicStopTrack_inLobby, 0x005FF190)
FUNCTION(internal_musicPauseTrack_inGame, 0x0051FE18)
FUNCTION(internal_musicPauseTrack_inLobby, 0x005FF280)
FUNCTION(internal_musicUnpauseTrack_inGame, 0x0051FE38)
FUNCTION(internal_musicUnpauseTrack_inLobby, 0x005FF2A0)

#--------------------------------------------------------
#------------------------- GAME -------------------------
#--------------------------------------------------------
FUNCTION(internal_gameEnd, 0x006228C8)

#--------------------------------------------------------
#----------------------- GRAPHICS -----------------------
#--------------------------------------------------------
FUNCTION(internal_drawFunc_inGame, 0x004D8420)
FUNCTION(internal_drawFunc_inLobby, 0x005BE058)
FUNCTION(internal_widthFunc_inGame, 0x004D8130)
FUNCTION(internal_widthFunc_inLobby, 0x005BDC90)
FUNCTION(internal_drawBox_inGame, 0x005BE610)
FUNCTION(internal_drawBox_inLobby, 0x00699C08)

#--------------------------------------------------------
#---------------------- MEMORY CARD ---------------------
#--------------------------------------------------------
FUNCTION(McOpen, 0x0013A160)
FUNCTION(McClose, 0x0013A2C0)
FUNCTION(McSeek, 0x0013A380)
FUNCTION(McRead, 0x0013A510)
FUNCTION(McWrite, 0x0013A628)
FUNCTION(McSync, 0x0013A7A0)

#--------------------------------------------------------
#------------------------- MOBY -------------------------
#--------------------------------------------------------
FUNCTION(mobySpawn, 0x004F7200)
FUNCTION(mobyDestroy, 0x004F76A0)
FUNCTION(mobyUpdateTransform, 0x004FE720)
FUNCTION(mobyGetFunctions, 0x0051F358)

#--------------------------------------------------------
#-------------------------- NET -------------------------
#--------------------------------------------------------
FUNCTION(internal_netSendMediusAppMessage, 0x01E9E198)

#--------------------------------------------------------
#------------------------ PLAYER ------------------------
#--------------------------------------------------------
FUNCTION(playerGiveWeapon, 0x00628018)
FUNCTION(playerRespawn, 0x005E2940)
FUNCTION(internal_playerSetPosRot, 0x005EB448)

#--------------------------------------------------------
#------------------------- SHA1 -------------------------
#--------------------------------------------------------
FUNCTION(sha1, 0x01EB30C8)

#--------------------------------------------------------
#-------------------------- UI --------------------------
#--------------------------------------------------------
FUNCTION(internal_uiDialog, 0x00719A28)
FUNCTION(uiShowPopup, 0x00540170)
FUNCTION(uiShowHelpPopup, 0x00540140)
FUNCTION(uiMsgString,  0x004E4180)

#--------------------------------------------------------
#------------------------ VEHICLE -----------------------
#--------------------------------------------------------
FUNCTION(vehicleRemovePlayer, 0x00619140)

#--------------------------------------------------------
#------------------------ GUBER -------------------------
#--------------------------------------------------------
FUNCTION(guberEventRead, 0x00611880)
FUNCTION(guberEventWrite, 0x00611808)
FUNCTION(guberEventCreateEvent, 0x00611338)
FUNCTION(guberMobyCreateSpawned, 0x0061C2B0)
