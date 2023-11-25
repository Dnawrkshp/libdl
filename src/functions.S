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
FUNCTION(sscanf, 0x0011d9a8)
FUNCTION(memset, 0x0011A518)
FUNCTION(memcpy, 0x0011A370)
FUNCTION(memmove, 0x0011A41C)
FUNCTION(memcmp, 0x0011A2DC)
FUNCTION(strncpy, 0x0011AFC8)
FUNCTION(strlen, 0x0011AB04)
FUNCTION(strcmp, 0x0011A8A0)
FUNCTION(strstr, 0x00122160)
FUNCTION(malloc, 0x0011ef60)
FUNCTION(free, 0x0011efb0)

#--------------------------------------------------------
#------------------------- MATH -------------------------
#--------------------------------------------------------
# FUNCTION(cosf, 0x00135878)
FUNCTION(asinf, 0x00136278)
FUNCTION(powf, 0x00136788)
FUNCTION(fabsf, 0x00135960)
FUNCTION(fptodp, 0x00131918)
FUNCTION(floorf, 0x001359A8)
FUNCTION(__divdi3, 0x0012feb0)
FUNCTION(ceilf, 0x00135770)
FUNCTION(logf, 0x001364f0)
FUNCTION(log10f, 0x00136638)
FUNCTION(internal_fastmodf_inGame, 0x004d75a8)
FUNCTION(internal_fastmodf_inLobby, 0x005bd108)

#--------------------------------------------------------
#------------------------ MATH 3D -----------------------
#--------------------------------------------------------
FUNCTION(matrix_unit, 0x0013c478)
FUNCTION(matrix_rotate_x, 0x0013c5c0)
FUNCTION(matrix_rotate_y, 0x0013c668)
FUNCTION(matrix_rotate_z, 0x0013c518)

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
FUNCTION(gameScoreboardSetTeamScore, 0x005425d0)
FUNCTION(gameScoreboardAddTeam, 0x005423C8)
FUNCTION(gameGetWorldId, 0x01ea55e8)


#--------------------------------------------------------
#----------------------- GRAPHICS -----------------------
#--------------------------------------------------------
FUNCTION(internal_drawFunc_inGame, 0x004D8420)
FUNCTION(internal_drawFunc_inLobby, 0x005BE058)
FUNCTION(internal_widthFunc_inGame, 0x004D8130)
FUNCTION(internal_widthFunc_inLobby, 0x005BDC90)
FUNCTION(internal_drawBox_inGame, 0x005BE610)
FUNCTION(internal_drawBox_inLobby, 0x00699C08)
FUNCTION(internal_doGifPaging_inGame, 0x004c3f40)
FUNCTION(internal_doGifPaging_inLobby, 0x005af9e8)
FUNCTION(internal_setupGifPaging_inGame, 0x004c3e10)
FUNCTION(internal_setupGifPaging_inLobby, 0x005af8b8)
FUNCTION(internal_getFrameTex_inGame, 0x004e4d70)
FUNCTION(internal_getFrameTex_inLobby, 0x005cab40)
FUNCTION(internal_getEffectTex_inGame, 0x004c4200)
FUNCTION(internal_getEffectTex_inLobby, 0x005afbe8)
FUNCTION(internal_drawSprite_inGame, 0x004c5b30)
FUNCTION(internal_drawSprite_inLobby, 0x005b1518)
FUNCTION(gfxDrawCubicLine, 0x004d1780)
FUNCTION(gfxDrawSimpleTwoPointLightning, 0x004cab58)
FUNCTION(gfxRegisterDrawFunction, 0x004C4650)
FUNCTION(gfxDrawQuad, 0x004CA188)
FUNCTION(gfxDrawBillboardQuad, 0x005b6450)
FUNCTION(gfxResetQuad, 0x005b6378)
FUNCTION(gfxSetBlendMode, 0x004c97d8)
FUNCTION(gfxSetTexture, 0x004c9a58)

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
FUNCTION(mobyPlaySoundByClass, 0x0058f778)
FUNCTION(mobyBlowCorn, 0x0050e318)
FUNCTION(mobyAnimTransition, 0x00502030)
FUNCTION(mobyCollDamageDirect, 0x00503408)
FUNCTION(mobyIsHero, 0x005cd578)
FUNCTION(mobyMoveSystemUpdate, 0x0051d528)
FUNCTION(mobyMoveSystemInit, 0x0051a758)
FUNCTION(mobySetMoveDistanceThresholds, 0x0051ef30)
FUNCTION(mobySetMoveSpeedLimits, 0x0051efa0)
FUNCTION(mobySetMoveAngularSpeeds, 0x0051f040)
FUNCTION(mobySetAnimCache, 0x0051aba0)
FUNCTION(mobyProcessDamage, 0x005184d0)
FUNCTION(mobyMove, 0x005169F8)
FUNCTION(mobyStand, 0x00516a70)
FUNCTION(mobyStartFlash, 0x00506960)
FUNCTION(mobyUpdateFlash, 0x00506b88)
FUNCTION(mobyGetJointMatrix, 0x004f8150)
FUNCTION(mobySpawnExplosion, 0x003c3b38)

#--------------------------------------------------------
#-------------------------- NET -------------------------
#--------------------------------------------------------
FUNCTION(internal_netSendMessage, 0x01E9E198)
FUNCTION(internal_netSendAppMessage, 0x01E9E270)
FUNCTION(internal_netUpdatetNWGameSettings, 0x007700A8)
FUNCTION(netSetSendAggregationInterval, 0x01ea0558)

#--------------------------------------------------------
#------------------------- INET -------------------------
#--------------------------------------------------------
FUNCTION(inetAbort, 0x01e9bce8)
FUNCTION(inetClose, 0x01e9bb28)
FUNCTION(inetControl, 0x01e9bd30)
FUNCTION(inetCreate, 0x01e9ba68)
FUNCTION(inetGetInterfaceList, 0x01e9bde0)
FUNCTION(inetGetNameServers, 0x01e9bf20)
FUNCTION(inetInterfaceControl, 0x01e9be70)
FUNCTION(inetName2Address, 0x01e9b978)
FUNCTION(inetOpen, 0x01e9bae0)
FUNCTION(inetRecv, 0x01e9bb70)
FUNCTION(inetSend, 0x01e9bc38)

#--------------------------------------------------------
#------------------------ PLAYER ------------------------
#--------------------------------------------------------
FUNCTION(playerGiveWeapon, 0x00628018)
FUNCTION(playerEquipWeapon, 0x005F0208)
FUNCTION(playerGetWeaponMaxAmmo, 0x00626FB8)
FUNCTION(playerRespawn, 0x005E2940)
FUNCTION(playerDropFlag, 0x005F05E8)
FUNCTION(playerGetFromUID, 0x005cd480)
FUNCTION(internal_playerSetPosRot, 0x005EB448)
FUNCTION(playerIncHealth, 0x005D1140)
FUNCTION(playerDecHealth, 0x005D1038)
FUNCTION(playerGetFromSlot, 0x005cd3d0)
FUNCTION(playerGetSpawnpoint, 0x006242d0)
FUNCTION(playerGetJuggSafeTeam, 0x005d0fd8)

#--------------------------------------------------------
#------------------------ MASTER ------------------------
#--------------------------------------------------------
FUNCTION(masterGet, 0x005cf340)
FUNCTION(masterDelete, 0x005cf4c8)
FUNCTION(masterCreate, 0x005cf3f8)

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
FUNCTION(internal_uiSelectDialog, 0x00719C68)
FUNCTION(internal_uiInputDialog, 0x00719B80)
FUNCTION(uiShowPopup, 0x00540170)
FUNCTION(uiShowHelpPopup, 0x00540140)
FUNCTION(internal_uiMsgString_inGame,  0x004E4180)
FUNCTION(internal_uiMsgString_inLobby,  0x005c9f50)
FUNCTION(uiShowTimer, 0x005401E8)
FUNCTION(uiRunCallbacks, 0x0015a050)

#--------------------------------------------------------
#------------------------- TIME -------------------------
#--------------------------------------------------------
FUNCTION(timerGetSystemTime, 0x0012e370)

#--------------------------------------------------------
#------------------------ VEHICLE -----------------------
#--------------------------------------------------------
FUNCTION(vehicleRemovePlayer, 0x00619140)
FUNCTION(vehicleAddPlayer, 0x006158E8)

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
#------------------------- FLAG -------------------------
#--------------------------------------------------------
FUNCTION(flagIsReturning, 0x004177c8)
FUNCTION(flagIsBeingPickedUp, 0x00417758)
FUNCTION(flagIsAtBase, 0x00417410)
FUNCTION(flagReturnToBase, 0x004177f0)
FUNCTION(flagIsOnSafeGround, 0x00417528)
FUNCTION(flagPickup, 0x00417780)

#--------------------------------------------------------
#------------------------ RADAR -------------------------
#--------------------------------------------------------
FUNCTION(radarGetBlipIndex, 0x00553b00)
FUNCTION(radarGetBlipColor, 0x00553db0)

#--------------------------------------------------------
#------------------------ SOUND -------------------------
#--------------------------------------------------------
FUNCTION(soundPlay, 0x0058f340)
FUNCTION(soundCreateHandle, 0x0058ce58)
FUNCTION(soundKillByHandle, 0x0058f228)
FUNCTION(soundKillById, 0x0058f118)

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
FUNCTION(internal_vector_pack, 0x0050A7E0)
FUNCTION(internal_vector_unpack, 0x0050a858)

#--------------------------------------------------------
#----------------------- COLLISION ----------------------
#--------------------------------------------------------
FUNCTION(CollMobysSphere_Fix, 0x004bb788)
FUNCTION(CollLine_Fix, 0x004b7e50)
FUNCTION(CollMovingSphere, 0x005038d0)

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

#--------------------------------------------------------
#------------------------- HUD --------------------------
#--------------------------------------------------------
FUNCTION(internal_hudGetCanvas_inGame, 0x0053f988)
FUNCTION(internal_hudGetCurrentCanvas_inGame, 0x005c2288)
FUNCTION(internal_hudSetCurrentCanvas_inGame, 0x005c2240)
FUNCTION(internal_hudCanvasGetObject_inGame, 0x005bcc90)
FUNCTION(hudGetTeamColor, 0x00541ef8)
FUNCTION(hudPanelGetElement, 0x0054b1d8)
