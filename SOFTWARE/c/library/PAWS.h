// I/O MEMORY MAPPED REGISTER DEFINITIONS
unsigned char volatile *UART_DATA = (unsigned char volatile *) 0xf000;
unsigned char volatile *UART_STATUS = (unsigned char volatile *) 0xf002;
unsigned short volatile *BUTTONS = (unsigned short volatile *) 0xf200;
unsigned char volatile *LEDS = (unsigned char volatile *) 0xf300;

// SDCARD
unsigned char volatile *SDCARD_READY = (unsigned char volatile *) 0xf400;
unsigned char volatile *SDCARD_READSTART = (unsigned char volatile *) 0xf400;
unsigned char volatile *SDCARD_WRITESTART = (unsigned char volatile *) 0xf402;
unsigned int volatile *SDCARD_SECTOR = (unsigned int *) 0xf404;
unsigned char volatile *SDCARD_RESET_BUFFERADDRESS = (unsigned char volatile *) 0xf500;
unsigned char volatile *SDCARD_DATA = (unsigned char volatile *) 0xf502;

// DISPLAY UNITS
unsigned char volatile *VBLANK = (unsigned char volatile *) 0xdf00;
unsigned char volatile *SCREENMODE = (unsigned char volatile *) 0xdf00;
unsigned char volatile *COLOUR = (unsigned char volatile *) 0xdf01;
unsigned char volatile *REZ = (unsigned char volatile *) 0xdf02;
unsigned char volatile *DIMMER = (unsigned char volatile *) 0xdf03;
unsigned int volatile *PALETTERGB = (unsigned int volatile *) 0xdf10;
unsigned char volatile *PALETTEENTRY = (unsigned char volatile *) 0xdf14;
unsigned char volatile *PALETTEACTIVE = (unsigned char volatile *) 0xdf15;

// BACKGROUND AND COPPER - BASE 0xd000
unsigned char volatile *BACKGROUND_COLOUR = (unsigned char volatile *) 0xd000;
unsigned char volatile *BACKGROUND_ALTCOLOUR = (unsigned char volatile *) 0xd002;
unsigned char volatile *BACKGROUND_MODE = (unsigned char volatile *) 0xd004;
unsigned char volatile *BACKGROUND_COPPER_STARTSTOP = (unsigned char volatile *) 0xd006;
unsigned short volatile *BACKGROUND_COPPER_CPUINPUT = (unsigned short volatile *) 0xd008;
unsigned char volatile *BACKGROUND_COPPER_PROGRAM = (unsigned char volatile *) 0xd00a;
unsigned char volatile *BACKGROUND_COPPER_ADDRESS = (unsigned char volatile *) 0xd00c;
unsigned char volatile *BACKGROUND_COPPER_COMMAND = (unsigned char volatile *) 0xd00e;
unsigned char volatile *BACKGROUND_COPPER_CONDITION = (unsigned char volatile *) 0xd010;
unsigned short volatile *BACKGROUND_COPPER_COORDINATE = (unsigned short volatile *) 0xd012;
unsigned char volatile *BACKGROUND_COPPER_MODE = (unsigned char volatile *) 0xd014;
unsigned char volatile *BACKGROUND_COPPER_ALT = (unsigned char volatile *) 0xd016;
unsigned char volatile *BACKGROUND_COPPER_COLOUR = (unsigned char volatile *) 0xd018;

unsigned char volatile *LOWER_TM_X = (unsigned char volatile *) 0xd100;
unsigned char volatile *LOWER_TM_Y = (unsigned char volatile *) 0xd102;
unsigned char volatile *LOWER_TM_TILE = (unsigned char volatile *) 0xd104;
unsigned char volatile *LOWER_TM_ACTION = (unsigned char volatile *) 0xd106;
unsigned char volatile *LOWER_TM_COMMIT = (unsigned char volatile *) 0xd108;
unsigned char volatile *LOWER_TM_STATUS = (unsigned char volatile *) 0xd108;
unsigned char volatile *LOWER_TM_WRITER_TILE_NUMBER = (unsigned char volatile *) 0xd10a;
unsigned char volatile *LOWER_TM_WRITER_COLOUR = (unsigned char volatile *) 0xd10c;
unsigned char volatile *LOWER_TM_SCROLLWRAPCLEAR = (unsigned char volatile *) 0xd10e;
unsigned char volatile *LOWER_TM_SCROLLAMOUNT = (unsigned char volatile *) 0xd10f;

unsigned char volatile *UPPER_TM_X = (unsigned char volatile *) 0xd200;
unsigned char volatile *UPPER_TM_Y = (unsigned char volatile *) 0xd202;
unsigned char volatile *UPPER_TM_TILE = (unsigned char volatile *) 0xd204;
unsigned char volatile *UPPER_TM_ACTION = (unsigned char volatile *) 0xd206;
unsigned char volatile *UPPER_TM_COMMIT = (unsigned char volatile *) 0xd208;
unsigned char volatile *UPPER_TM_STATUS = (unsigned char volatile *) 0xd208;
unsigned char volatile *UPPER_TM_WRITER_TILE_NUMBER = (unsigned char volatile *) 0xd20a;
unsigned char volatile *UPPER_TM_WRITER_COLOUR = (unsigned char volatile *) 0xd20c;
unsigned char volatile *UPPER_TM_SCROLLWRAPCLEAR = (unsigned char volatile *) 0xd20e;
unsigned char volatile *UPPER_TM_SCROLLWRAPAMOUNT = (unsigned char volatile *) 0xd20f;

short volatile *GPU_X = (short volatile *) 0xd600;
short volatile *GPU_Y = (short volatile *) 0xd602;
short volatile *GPU_PARAM0 = (short volatile *) 0xd604;
short volatile *GPU_PARAM1 = (short volatile *) 0xd606;
short volatile *GPU_PARAM2 = (short volatile *) 0xd608;
short volatile *GPU_PARAM3 = (short volatile *) 0xd60a;
short volatile *GPU_PARAM4 = (short volatile *) 0xd60c;
short volatile *GPU_PARAM5 = (short volatile *) 0xd60e;
unsigned char volatile *GPU_COLOUR = (unsigned char volatile *) 0xd610;
unsigned char volatile *GPU_COLOUR_ALT = (unsigned char volatile *) 0xd612;
unsigned char volatile *GPU_DITHERMODE = (unsigned char volatile *) 0xd614;
unsigned char volatile *GPU_WRITE = (unsigned char volatile *) 0xd616;
unsigned char volatile *GPU_STATUS = (unsigned char volatile *) 0xd616;
unsigned char volatile *GPU_FINISHED = (unsigned char volatile *) 0xd618;

unsigned char volatile *VECTOR_DRAW_BLOCK = (unsigned char volatile *) 0xd620;
unsigned char volatile *VECTOR_DRAW_COLOUR = (unsigned char volatile *) 0xd622;
short volatile *VECTOR_DRAW_XC = (short volatile *) 0xd624;
short volatile *VECTOR_DRAW_YC = (short volatile *) 0xd626;
unsigned char volatile *VECTOR_DRAW_SCALE = (unsigned char volatile *) 0xd628;
unsigned char volatile *VECTOR_DRAW_ACTION = (unsigned char volatile *) 0xd62a;
unsigned char volatile *VECTOR_DRAW_START = (unsigned char volatile *) 0xd62c;
unsigned char volatile *VECTOR_DRAW_STATUS = (unsigned char volatile *) 0xd62a;
unsigned char volatile *VECTOR_WRITER_BLOCK = (unsigned char volatile *) 0xd630;
unsigned char volatile *VECTOR_WRITER_VERTEX = (unsigned char volatile *) 0xd632;
char volatile *VECTOR_WRITER_DELTAX = (char volatile *) 0xd634;
char volatile *VECTOR_WRITER_DELTAY = (char volatile *) 0xd636;
unsigned char volatile *VECTOR_WRITER_ACTIVE = (unsigned char volatile *) 0xd638;

unsigned char volatile *BLIT_WRITER_TILE = (unsigned char volatile *) 0xd640;
unsigned short volatile *BLIT_WRITER_BITMAP = (unsigned short volatile *) 0xd642;
unsigned char volatile *BLIT_CHWRITER_TILE = (unsigned char volatile *) 0xd650;
unsigned char volatile *BLIT_CHWRITER_BITMAP = (unsigned char volatile *) 0xd652;
unsigned char volatile *COLOURBLIT_WRITER_TILE = (unsigned char volatile *) 0xd660;
unsigned char volatile *COLOURBLIT_WRITER_COLOUR = (unsigned char volatile *) 0xd662;

unsigned char volatile *PB_COLOUR = (unsigned char volatile *) 0xd670;
unsigned char volatile *PB_COLOUR8R = (unsigned char volatile *) 0xd672;
unsigned char volatile *PB_COLOUR8G = (unsigned char volatile *) 0xd674;
unsigned char volatile *PB_COLOUR8B = (unsigned char volatile *) 0xd676;
unsigned char volatile *PB_STOP = (unsigned char volatile *) 0xd678;
unsigned char volatile *PB_MODE = (unsigned char volatile *) 0xd67a;
unsigned char volatile *PB_CMNUMBER = (unsigned char volatile *) 0xd67c;
unsigned char volatile *PB_CMENTRY = (unsigned char volatile *) 0xd67e;

unsigned short volatile *CROP_LEFT = (unsigned short volatile *) 0xd6e0;
unsigned short volatile *CROP_RIGHT = (unsigned short volatile *) 0xd6e2;
unsigned short volatile *CROP_TOP = (unsigned short volatile *) 0xd6e4;
unsigned short volatile *CROP_BOTTOM = (unsigned short volatile *) 0xd6e6;

unsigned char volatile *FRAMEBUFFER_DISPLAY = (unsigned char volatile *) 0xd6f0;
unsigned char volatile *FRAMEBUFFER_DRAW = (unsigned char volatile *) 0xd6f2;
unsigned char volatile *BITMAP_DISPLAY256 = (unsigned char volatile *) 0xd6f4;

unsigned short volatile *LOWER_SPRITE_ACTIVE = (unsigned short volatile *) 0xd300;
unsigned short volatile *LOWER_SPRITE_ACTIONS = (unsigned short volatile *) 0xd320;
short volatile *LOWER_SPRITE_X = (short volatile *) 0xd360;
short volatile *LOWER_SPRITE_Y = (short volatile *) 0xd380;
unsigned short volatile *LOWER_SPRITE_TILE = (unsigned short volatile *) 0xd3a0;
unsigned short volatile *LOWER_SPRITE_UPDATE = (unsigned short volatile *) 0xd3c0;
unsigned short volatile *LOWER_SPRITE_COLLISION_BASE = (unsigned short volatile *) 0xd3c0;
unsigned short volatile *LOWER_SPRITE_LAYER_COLLISION_BASE = (unsigned short volatile *) 0xd3e0;
unsigned char volatile *LOWER_SPRITE_WRITER_NUMBER = (unsigned char volatile *) 0xd800;
unsigned char volatile *LOWER_SPRITE_WRITER_COLOUR = (unsigned char volatile *) 0xd802;

unsigned short volatile *UPPER_SPRITE_ACTIVE = (unsigned short volatile *) 0xd400;
unsigned short volatile *UPPER_SPRITE_ACTIONS = (unsigned short volatile *) 0xd420;
short volatile *UPPER_SPRITE_X = (short volatile *) 0xd460;
short volatile *UPPER_SPRITE_Y = (short volatile *) 0xd480;
unsigned short volatile *UPPER_SPRITE_TILE = (unsigned short volatile *) 0xd4a0;
unsigned short volatile *UPPER_SPRITE_UPDATE = (unsigned short volatile *) 0xd4c0;
unsigned short volatile *UPPER_SPRITE_COLLISION_BASE = (unsigned short volatile *) 0xd4c0;
unsigned short volatile *UPPER_SPRITE_LAYER_COLLISION_BASE = (unsigned short volatile *) 0xd4e0;
unsigned char volatile *UPPER_SPRITE_WRITER_NUMBER = (unsigned char volatile *) 0xd900;
unsigned char volatile *UPPER_SPRITE_WRITER_COLOUR = (unsigned char volatile *) 0xd902;

unsigned char volatile *TPU_X = (unsigned char volatile *) 0xd500;
unsigned char volatile *TPU_Y = (unsigned char volatile *) 0xd502;
unsigned short volatile *TPU_CHARACTER = (unsigned short volatile *) 0xd504;
unsigned char volatile *TPU_BACKGROUND = (unsigned char volatile *) 0xd506;
unsigned char volatile *TPU_FOREGROUND = (unsigned char volatile *) 0xd508;
unsigned char volatile *TPU_COMMIT = (unsigned char volatile *) 0xd50a;
unsigned char volatile *TPU_CURSOR = (unsigned char volatile *) 0xd50c;
unsigned char volatile *CURSES_BACKGROUND = (unsigned char volatile *) 0xd50e;
unsigned char volatile *CURSES_FOREGROUND = (unsigned char volatile *) 0xd50f;
unsigned short volatile *TPUREAD_CHARACTER = (unsigned short volatile *) 0xd514;
unsigned char volatile *TPUREAD_BACKGROUND = (unsigned char volatile *) 0xd516;
unsigned char volatile *TPUREAD_FOREGROUND = (unsigned char volatile *) 0xd518;

unsigned char volatile *TERMINAL_COMMIT = (unsigned char volatile *) 0xd700;
unsigned char volatile *TERMINAL_STATUS = (unsigned char volatile *) 0xd700;
unsigned char volatile *TERMINAL_SHOW = (unsigned char volatile *) 0xd702;
unsigned char volatile *TERMINAL_RESET = (unsigned char volatile *) 0xd704;

unsigned char volatile *AUDIO_WAVEFORM = (unsigned char volatile *) 0xe000;
unsigned char volatile *AUDIO_FREQUENCY = (unsigned char volatile *) 0xe002;
unsigned short volatile *AUDIO_DURATION = (unsigned short volatile *) 0xe004;
unsigned char volatile *AUDIO_START = (unsigned char volatile *) 0xe006;
unsigned char volatile *AUDIO_NEW_SAMPLE = (unsigned char volatile *) 0xe008;
unsigned char volatile *AUDIO_LEFT_SAMPLE = (unsigned char volatile *) 0xe00a;
unsigned char volatile *AUDIO_RIGHT_SAMPLE = (unsigned char volatile *) 0xe00c;
unsigned char volatile *AUDIO_L_ACTIVE = (unsigned char volatile *) 0xe010;
unsigned char volatile *AUDIO_R_ACTIVE = (unsigned char volatile *) 0xe012;
unsigned char volatile *AUDIO_L_VOLUME = (unsigned char volatile *) 0xe010;
unsigned char volatile *AUDIO_R_VOLUME = (unsigned char volatile *) 0xe012;

unsigned short volatile *RNG = (unsigned short volatile *) 0xc000;
unsigned short volatile *ALT_RNG = (unsigned short volatile *) 0xc002;
float volatile *FRNG = (float volatile *) 0xc004;
unsigned short volatile *TIMER1HZ0 = (unsigned short volatile *) 0xc010;
unsigned short volatile *TIMER1HZ1 = (unsigned short volatile *) 0xc012;
unsigned short volatile *TIMER1KHZ0 = (unsigned short volatile *) 0xc014;
unsigned short volatile *TIMER1KHZ1 = (unsigned short volatile *) 0xc016;
unsigned short volatile *SLEEPTIMER0 = (unsigned short volatile *) 0xc018;
unsigned short volatile *SLEEPTIMER1 = (unsigned short volatile *) 0xc01a;
unsigned int volatile *SYSTEMSECONDS = (unsigned int volatile *) 0xc020;
unsigned int volatile *SYSTEMMILLISECONDS = (unsigned int volatile *)0xc028;
unsigned int volatile *RTC = (unsigned int volatile *) 0xf600;
int volatile *PAWSMAGIC = (int volatile *) 0xf700;

// HANDLE SMT - RUNNING STATUS AND POINTER TO CODE TO RUN
unsigned char volatile *SMTSTATUS = (unsigned char volatile *) 0xff04;
unsigned int volatile *SMTPC = (unsigned int volatile *) 0xff00;

// HANDLE MINI DMA CONTROLLER
int volatile *DMASOURCEADD = (int volatile *) 0xfd00;
int volatile *DMADESTADD = (int volatile *) 0xfd04;
unsigned char volatile *DMACYCLES = (unsigned char volatile *) 0xfd08;
unsigned int volatile *DMASOURCE = (unsigned int volatile *) 0xfe00;
unsigned int volatile *DMADEST = (unsigned int volatile *) 0xfe04;
unsigned int volatile *DMACOUNT = (unsigned int volatile *) 0xfe08;
unsigned char volatile *DMAMODE = (unsigned char volatile *) 0xfe0c;
unsigned char volatile *DMASET = (unsigned char volatile *) 0xfe0e;

// FIXED POINT DIVISION ACCELERATOR
int volatile *FIXED_REGS = (int volatile *)0xf800;                                       // TOP & RESULT [0], BOTTOM [1]

// HARDWARE REGISTER BASES
int volatile *TIMER_REGS = (int volatile *) 0xc000;
int volatile *GPU_REGS = (int volatile *) 0xd600;
int volatile *DISPLAY_REGS = (int volatile *) 0xdf00;
int volatile *AUDIO_REGS = (int volatile *) 0xe000;
int volatile *IO_REGS = (int volatile *) 0xf000;
int volatile *DMA_REGS = (int volatile *) 0xfe00; int volatile *DMA_REGS_ALT = (int volatile *) 0xfd00;

