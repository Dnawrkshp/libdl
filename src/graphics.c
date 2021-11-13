#include "graphics.h"
#include "game.h"

int internal_drawFunc_inGame(u32,const char*,long,u64,u64,u64,float,float,float,float,float,float);
int internal_drawFunc_inLobby(u32,const char*,long,u64,u64,u64,float,float,float,float,float,float);
int internal_widthFunc_inGame(const char*,long,float);
int internal_widthFunc_inLobby(const char*,long,float);
void internal_drawBox_inGame(void *, void *);
void internal_drawBox_inLobby(void *, void *);

//--------------------------------------------------------
int gfxWorldSpaceToScreenSpace(VECTOR position, int * x, int * y)
{
    int output = 0;

    asm __volatile__ (
        "addiu      $sp, $sp, -0x40     \n"
        "sq         $ra, 0x00($sp)      \n"
        "sq         $s0, 0x10($sp)      \n"
        "sq         $s1, 0x20($sp)      \n"
        "swc1       $f20, 0x30($sp)     \n"

        "move       $s0, %0             \n"
        "move       $s1, %1             \n"
        "li.s       $f20, 0.0625        \n"
        
        "lq		    $a0, 0x00(%2)	    \n"
        "jal		0x004BFCA8	        \n"
        "lui		$v1, 0x001D	        \n"
        "mtc1		$v0, $f01   	    \n"
        "addiu		$a0, $v1, 0x3F40    \n"
        "lwc1		$f02, 0x10($a0)	    \n"
        "cvt.s.w	$f02, $f02	        \n"
        "prot3w		$v1, $v0	        \n"
        "mtc1		$v1, $f00	        \n"
        "lwc1		$f03, 0x14($a0)	    \n"
        "cvt.s.w	$f03, $f03	        \n"
        "lw		    $v0, 0x18($a0)	    \n"
        "sub.s		$f01, $f01, $f02    \n"
        "addiu		$v0, $v0, 0x40	    \n"
        "sub.s		$f00, $f00, $f03    \n"
        "mul.s		$f01, $f01, $f20    \n"
        "mul.s		$f00, $f00, $f20    \n"
        "cvt.w.s	$f02, $f01  	    \n"
        "mfc1       $t0, $f02           \n"
        "sw		    $t0, 0x00($s0)	    \n"
        "cvt.w.s	$f01, $f00	        \n"
        "mfc1       $t1, $f01           \n"
        "sw		    $t1, 0x00($s1)	    \n"

        "lw         $v0, 0x18($a0)      \n"
        "addiu      $v0, $v0, 0x40      \n"
        "slt        $v1, $v0, $t0       \n"
        "bne        $v1, $0, exit       \n"
        "slti       $v1, $t0, -0x40     \n"
        "bne        $v1, $0, exit       \n"
        "lw         $v0, 0x1C($a0)      \n"
        "addiu      $v0, $v0, 0x40      \n"
        "slt        $v1, $v0, $t1       \n"
        "bne        $v1, $0, exit       \n"
        "slti       $v1, $t1, -0x40     \n"
        "bne        $v1, $0, exit       \n"
        "li         %3, 1              \n"

        "exit:                          \n"
        "lq         $ra, 0x00($sp)      \n"
        "lq         $s0, 0x10($sp)      \n"
        "lq         $s1, 0x20($sp)      \n"
        "lwc1       $f20, 0x30($sp)     \n"
        "addiu      $sp, $sp, 0x40      \n"
        : : "r" (x), "r" (y), "r" (position), "r" (output)
    );

    return output;
}

//--------------------------------------------------------
int gfxGetFontWidth(const char * string, int length, float scale)
{
    if (gameIsIn())
    {
        return internal_widthFunc_inGame(string, length, scale);
    }
    else
    {
        return internal_widthFunc_inLobby(string, length, scale);
    }
}

//--------------------------------------------------------
int gfxScreenSpaceText(float x, float y, float scaleX, float scaleY, u32 color, const char * string, int length, int alignment)
{
    // draw
    if (gameIsIn())
    {
        internal_drawFunc_inGame(color, string, length, alignment, 0, 0x80000000, x, y, scaleX, scaleY, 0, 0);
        return x + internal_widthFunc_inGame(string, length, scaleX);
    }
    else
    {
        internal_drawFunc_inLobby(color, string, length, alignment, 0, 0x80000000, x, y, scaleX, scaleY, 0, 0);
        return x + internal_widthFunc_inLobby(string, length, scaleX);
    }
}

//--------------------------------------------------------
void gfxScreenSpaceQuad(RECT * rect, u32 colorTL, u32 colorTR, u32 colorBL, u32 colorBR)
{
    u32 buffer[11];
    buffer[0] = 8;
    buffer[1] = 0;
    buffer[2] = 0x005C97AC;
    buffer[3] = 0;
    buffer[4] = 0;
    buffer[5] = 0xBE130000;
    buffer[6] = colorTL;
    buffer[7] = colorTR;
    buffer[8] = colorBL;
    buffer[9] = colorBR;
    buffer[10] = 2;

    if (gameIsIn())
    {
        internal_drawBox_inGame(rect, buffer);
    }
    else
    {
        internal_drawBox_inLobby(rect, buffer);
    }
}

//--------------------------------------------------------
void gfxScreenSpaceBox(float x, float y, float w, float h, u32 color)
{
    RECT r = {
        { x, y },
        { x + w, y },
        { x, y + h },
        { x + w, y + h}
    };

    gfxScreenSpaceQuad(&r, color, color, color, color);
}

void gfxScreenSpacePIF(RECT * rect)
{
    u32 buffer[11];
    int inGame = gameIsIn();
    u32 pifAddr = inGame ? 0x01E72C00 : 0x0036DED0;
    
    buffer[0] = 0x8;
    buffer[1] = 0;
    buffer[2] = 0xD0;
    buffer[3] = 0;
    buffer[4] = 0x006A8D5C;
    buffer[5] = 0;
    buffer[6] = 0x33010101;
    buffer[7] = 0x33010101;
    buffer[8] = 0x33010101;
    buffer[9] = 0x33010101;
    buffer[10] = 0x8;

    if (inGame)
        internal_drawBox_inGame(rect, buffer);
    else
        internal_drawBox_inLobby(rect, buffer);

    buffer[0] = 0x9;
    buffer[1] = 0;
    buffer[2] = pifAddr;
    buffer[3] = 0;
    buffer[4] = 0x006A8D5C;
    buffer[5] = 0;
    buffer[6] = 0x80808080;
    buffer[7] = 0x80808080;
    buffer[8] = 0x80808080;
    buffer[9] = 0x80808080;
    buffer[10] = 0xE;

    if (inGame)
        internal_drawBox_inGame(rect, buffer);
    else
        internal_drawBox_inLobby(rect, buffer);
}
