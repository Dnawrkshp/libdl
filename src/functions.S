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
FUNCTION(snprintf, 0x0011D878)
FUNCTION(memset, 0x0011A518)
FUNCTION(memcpy, 0x0011A370)
FUNCTION(strncpy, 0x0011AFC8)
FUNCTION(strlen, 0x0011AB04)

#--------------------------------------------------------
#------------------------- MATH -------------------------
#--------------------------------------------------------
# FUNCTION(cosf, 0x00135878)
FUNCTION(asinf, 0x00136278)
FUNCTION(powf, 0x00136788)
FUNCTION(fabsf, 0x00135960)
FUNCTION(fptodp, 0x00131918)
FUNCTION(floorf, 0x001359A8)

#--------------------------------------------------------
#------------------------ COLOR -------------------------
#--------------------------------------------------------
FUNCTION(internal_colorLerp_inGame, 0x004d75e0)
FUNCTION(internal_colorLerp_inLobby, 0x005bd140)

#--------------------------------------------------------
#------------------------ DIALOG ------------------------
#--------------------------------------------------------
FUNCTION(internal_dialogPlaySound_inGame, 0x004E3688)
FUNCTION(internal_dialogPlaySound_inLobby, 0x005C97D8)

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

#--------------------------------------------------------
#------------------------- MOBY -------------------------
#--------------------------------------------------------
FUNCTION(mobySpawn, 0x004F7200)
FUNCTION(mobyDestroy, 0x004F76A0)
FUNCTION(mobyUpdateTransform, 0x004FE720)
FUNCTION(mobyGetFunctions, 0x0051F358)
FUNCTION(mobySetState, 0x00502250)
FUNCTION(mobyGetDamage, 0x00504248)
FUNCTION(mobyPlaySound, 0x0058f6d0)
FUNCTION(mobyBlowCorn, 0x0050e318)
FUNCTION(mobyAnimTransition, 0x00502030)
FUNCTION(mobyCollDamageDirect, 0x00503408)
FUNCTION(mobyIsHero, 0x005cd578)
FUNCTION(mobyMoveSystemUpdate, 0x0051d528)
FUNCTION(mobyProcessDamage, 0x005184d0)
FUNCTION(mobyMove, 0x005169F8)
FUNCTION(mobyStand, 0x00516a70)
FUNCTION(mobyStartFlash, 0x00506960)
FUNCTION(mobyUpdateFlash, 0x00506b88)

#--------------------------------------------------------
#-------------------------- NET -------------------------
#--------------------------------------------------------
FUNCTION(internal_netSendMediusAppMessage, 0x01E9E198)
FUNCTION(internal_netBroadcastMediusAppMessage, 0x01E9E270)

#--------------------------------------------------------
#------------------------ PLAYER ------------------------
#--------------------------------------------------------
FUNCTION(playerGiveWeapon, 0x00628018)
FUNCTION(playerRespawn, 0x005E2940)
FUNCTION(playerDropFlag, 0x005F05E8)
FUNCTION(playerGetFromUID, 0x005cd480)
FUNCTION(internal_playerSetPosRot, 0x005EB448)

#--------------------------------------------------------
#------------------------ WEAPON ------------------------
#--------------------------------------------------------
FUNCTION(weaponTurnOnHoloshields, 0x005a37f0)
FUNCTION(weaponTurnOffHoloshields, 0x005a3940)

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
FUNCTION(guberGetObjectByUID, 0x005ce6e0)
FUNCTION(guberGetObjectByMoby, 0x005cec98)
FUNCTION(guberGetUID, 0x005cec68)
FUNCTION(guberMobyGetPlayerDamager, 0x005ce5c8)
FUNCTION(guberMobyDestroy, 0x0061c450)

#--------------------------------------------------------
#------------------------ RADAR -------------------------
#--------------------------------------------------------
FUNCTION(radarGetBlipIndex, 0x00553b00)

#--------------------------------------------------------
#------------------------ SOUND -------------------------
#--------------------------------------------------------
FUNCTION(soundPlay, 0x0058f340)
FUNCTION(soundCreateHandle, 0x0058ce58)
FUNCTION(soundKillByHandle, 0x0058f228)

#--------------------------------------------------------
#------------------------- HELP -------------------------
#--------------------------------------------------------
FUNCTION(internal_helpGetMapName_inLobby, 0x00707680)
FUNCTION(internal_helpGetString_inLobby, 0x005c9f50)
FUNCTION(internal_helpGetString_inGame, 0x004e4180)

#--------------------------------------------------------
#------------------------- SIF --------------------------
#--------------------------------------------------------
FUNCTION(SifInitRpc, 0x00129d90)
FUNCTION(SifExitRpc, 0x00129f30)
FUNCTION(SifRpcGetOtherData, 0x0012a270)
FUNCTION(SifBindRpc, 0x0012a538)
FUNCTION(SifCallRpc, 0x0012a718)

FUNCTION(SifCheckStatRpc, 0x0012a918)
FUNCTION(SifInitIopHeap, 0x0012c1b8)
FUNCTION(SifAllocIopHeap, 0x0012c240)
FUNCTION(SifFreeIopHeap, 0x0012C3A8)
FUNCTION(SifIopReset, 0x0012cc30)
FUNCTION(SifIopSync, 0x0012cdb0)
FUNCTION(_SifLoadModuleBuffer, 0x0012CBC0)

FUNCTION(SifWriteBackDCache, 0x00129ce0)
FUNCTION(SifSetDma, 0x00126f60)
FUNCTION(SifDmaStat, 0x00126f40)

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
FUNCTION(internal_musicTransitionTrack_inGame, 0x0051FBC8)
FUNCTION(internal_musicTransitionTrack_inLobby, 0x005FF030)

#--------------------------------------------------------
#------------------------- WAD --------------------------
#--------------------------------------------------------
FUNCTION(internal_wadGetSectors, 0x00159A00)

#--------------------------------------------------------
#------------------------ VECTOR ------------------------
#--------------------------------------------------------
FUNCTION(internal_vectorReflect, 0x005b9ae8)

#--------------------------------------------------------
#----------------------- COLLISION ----------------------
#--------------------------------------------------------
FUNCTION(CollMobysSphere_Fix, 0x004bb788)
FUNCTION(CollLine_Fix, 0x004b7e50)

#--------------------------------------------------------
#------------------------ RANDOM ------------------------
#--------------------------------------------------------
FUNCTION(rand, 0x005006d0)
FUNCTION(randVector, 0x004b7e50)
FUNCTION(randVectorRangeNeg, 0x005083c8)
FUNCTION(randVectorRange, 0x00508448)
FUNCTION(randRange, 0x00500748)
FUNCTION(randRangeNeg, 0x005007a0)
FUNCTION(randRangeInt, 0x00500700)
FUNCTION(randRadian, 0x00500800)
