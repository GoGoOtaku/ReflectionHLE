// ID_VH.H


#define WHITE			15			// graphics mode independant colors
#define BLACK			0
#define FIRSTCOLOR		1
#define SECONDCOLOR		12
#define F_WHITE			15
#define F_BLACK			0
#define F_FIRSTCOLOR	1
#define F_SECONDCOLOR	12

//===========================================================================

#define MAXSHIFTS	1

typedef struct
{
  id0_int_t	width,
	height,
	orgx,orgy,
	xl,yl,xh,yh,
	shifts;
} spritetabletype;

typedef	struct
{
	id0_unsigned_t	sourceoffset[MAXSHIFTS];
	id0_unsigned_t	planesize[MAXSHIFTS];
	id0_unsigned_t	width[MAXSHIFTS];
	id0_byte_t		data[];
} spritetype;		// the memptr for each sprite points to this

typedef struct
{
	id0_int_t width,height;
} pictabletype;


typedef struct
{
	id0_int_t height;
	id0_int_t location[256];
	id0_char_t width[256];
} fontstruct;


//===========================================================================


extern	pictabletype	id0_seg *pictable;
extern	pictabletype	id0_seg *picmtable;
extern	spritetabletype id0_seg *spritetable;

extern	id0_byte_t	fontcolor;
extern	id0_int_t	fontnumber;
extern	id0_int_t	px,py;

//
// Double buffer management routines
//

void VW_InitDoubleBuffer (void);
id0_int_t	 VW_MarkUpdateBlock (id0_int_t x1, id0_int_t y1, id0_int_t x2, id0_int_t y2);
// *** ALPHA RESTORATION ***
// wolfenstein EGA compatability stuff (need to have it here)
#if (GAMEVER_WOLFREV <= GV_WR_WL920312)
#define VW_UpdateScreen		VH_UpdateScreen
#endif
void VW_UpdateScreen (void);

//
// mode independant routines
// coordinates in pixels, rounded to best screen res
// regions marked in double buffer
//

void VWB_DrawTile8 (id0_int_t x, id0_int_t y, id0_int_t tile);
void VWB_DrawTile8M (id0_int_t x, id0_int_t y, id0_int_t tile);
void VWB_DrawTile16 (id0_int_t x, id0_int_t y, id0_int_t tile);
void VWB_DrawTile16M (id0_int_t x, id0_int_t y, id0_int_t tile);
void VWB_DrawPic (id0_int_t x, id0_int_t y, id0_int_t chunknum);
void VWB_DrawMPic(id0_int_t x, id0_int_t y, id0_int_t chunknum);
void VWB_Bar (id0_int_t x, id0_int_t y, id0_int_t width, id0_int_t height, id0_int_t color);

void VWB_DrawPropString	 (id0_char_t id0_far *string);
void VWB_DrawMPropString (id0_char_t id0_far *string);
void VWB_DrawSprite (id0_int_t x, id0_int_t y, id0_int_t chunknum);
void VWB_Plot (id0_int_t x, id0_int_t y, id0_int_t color);
void VWB_Hlin (id0_int_t x1, id0_int_t x2, id0_int_t y, id0_int_t color);
void VWB_Vlin (id0_int_t y1, id0_int_t y2, id0_int_t x, id0_int_t color);


//
// wolfenstein EGA compatability stuff
//
extern id0_byte_t id0_far gamepal;

void VH_SetDefaultColors (void);

#define VW_Startup		VL_Startup
#define VW_Shutdown		VL_Shutdown
#define VW_SetCRTC		VL_SetCRTC
#define VW_SetScreen	VL_SetScreen
#define VW_Bar			VL_Bar
#define VW_Plot			VL_Plot
#define VW_Hlin(x,z,y,c)	VL_Hlin(x,y,(z)-(x)+1,c)
#define VW_Vlin(y,z,x,c)	VL_Vlin(x,y,(z)-(y)+1,c)
#define VW_DrawPic		VH_DrawPic
#define VW_SetSplitScreen	VL_SetSplitScreen
#define VW_SetLineWidth		VL_SetLineWidth
#define VW_ColorBorder	VL_ColorBorder
#define VW_WaitVBL		VL_WaitVBL
// *** S3DNA RESTORATION ***
#ifdef GAMEVER_NOAH3D
#define VW_FadeIn()		VL_FadeIn(0,255,&gamepal,24);
#define VW_FadeOut()	VL_FadeOut(0,255,0,0,0,24);
#else
#define VW_FadeIn()		VL_FadeIn(0,255,&gamepal,30);
#define VW_FadeOut()	VL_FadeOut(0,255,0,0,0,30);
#endif
#define VW_ScreenToScreen	VL_ScreenToScreen
#define VW_SetDefaultColors	VH_SetDefaultColors
void	VW_MeasurePropString (id0_char_t id0_far *string, id0_word_t *width, id0_word_t *height);
#define EGAMAPMASK(x)	VGAMAPMASK(x)
#define EGAWRITEMODE(x)	VGAWRITEMODE(x)

//#define VW_MemToScreen	VL_MemToLatch

#define MS_Quit			Quit


#define LatchDrawChar(x,y,p) VL_LatchToScreen(latchpics[0]+(p)*16,2,8,x,y)
#define LatchDrawTile(x,y,p) VL_LatchToScreen(latchpics[1]+(p)*64,4,16,x,y)

void LatchDrawPic (id0_unsigned_t x, id0_unsigned_t y, id0_unsigned_t picnum);
void 	LoadLatchMem (void);
// *** S3DNA RESTORATION ***
#ifndef GAMEVER_NOAH3D
id0_boolean_t 	FizzleFade (id0_unsigned_t source, id0_unsigned_t dest,
	id0_unsigned_t width,id0_unsigned_t height, id0_unsigned_t frames,id0_boolean_t abortable);
#endif


#define NUMLATCHPICS	100
extern	id0_unsigned_t	latchpics[NUMLATCHPICS];
extern	id0_unsigned_t freelatch;
