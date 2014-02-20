/*
 * boot.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"
#include "dryos31.h"

#define offsetof(TYPE, MEMBER) ((int) &((TYPE *)0)->MEMBER)

const char * const new_sa = &_end;

extern void task_CaptSeq();
extern void task_InitFileModules();
extern void task_MovieRecord();
extern void task_ExpDrv();
extern void task_FileWrite();

/*----------------------------------------------------------------------
    CreateTask_spytask
-----------------------------------------------------------------------*/
void CreateTask_spytask()
{
    _CreateTask("SpyTask", 0x19, 0x2000, core_spytask, 0);
}

/*----------------------------------------------------------------------
    boot()

    Main entry point for the CHDK code
-----------------------------------------------------------------------*/

/*************************************************************/
//** boot @ 0xFF00000C - 0xFF000178, length=92
void __attribute__((naked,noinline)) boot() {
asm volatile (
"    LDR     R1, =0xC0410000 \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R1] \n"
"    MOV     R1, #0x78 \n"
"    MCR     p15, 0, R1, c1, c0 \n"
"    MOV     R1, #0 \n"
"    MCR     p15, 0, R1, c7, c10, 4 \n"
"    MCR     p15, 0, R1, c7, c5 \n"
"    MCR     p15, 0, R1, c7, c6 \n"
"    MOV     R0, #0x3D \n"
"    MCR     p15, 0, R0, c6, c0 \n"
"    MOV     R0, #0xC000002F \n"
"    MCR     p15, 0, R0, c6, c1 \n"
"    MOV     R0, #0x37 \n"
"    MCR     p15, 0, R0, c6, c2 \n"
"    MOV     R0, #0x40000037 \n"
"    MCR     p15, 0, R0, c6, c3 \n"
"    MOV     R0, #0x80000017 \n"
"    MCR     p15, 0, R0, c6, c4 \n"
"    LDR     R0, =0xFF00002F \n"
"    MCR     p15, 0, R0, c6, c5 \n"
"    LDR     R0, =0xD000002B \n"
"    MCR     p15, 0, R0, c6, c7 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0, 1 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c3, c0 \n"
"    LDR     R0, =0x33333330 \n"
"    MCR     p15, 0, R0, c5, c0, 2 \n"
"    LDR     R0, =0x33333330 \n"
"    MCR     p15, 0, R0, c5, c0, 3 \n"
"    MRC     p15, 0, R0, c1, c0 \n"
"    ORR     R0, R0, #0x1000 \n"
"    ORR     R0, R0, #4 \n"
"    ORR     R0, R0, #1 \n"
"    MCR     p15, 0, R0, c1, c0 \n"
"    MOV     R1, #0x80000006 \n"
"    MCR     p15, 0, R1, c9, c1 \n"
"    MOV     R1, #6 \n"
"    MCR     p15, 0, R1, c9, c1, 1 \n"
"    MRC     p15, 0, R1, c1, c0 \n"
"    ORR     R1, R1, #0x50000 \n"
"    MCR     p15, 0, R1, c1, c0 \n"
"    LDR     R2, =0xC0200000 \n"
"    MOV     R1, #1 \n"
"    STR     R1, [R2, #0x10C] \n"
"    MOV     R1, #0xFF \n"
"    STR     R1, [R2, #0xC] \n"
"    STR     R1, [R2, #0x1C] \n"
"    STR     R1, [R2, #0x2C] \n"
"    STR     R1, [R2, #0x3C] \n"
"    STR     R1, [R2, #0x4C] \n"
"    STR     R1, [R2, #0x5C] \n"
"    STR     R1, [R2, #0x6C] \n"
"    STR     R1, [R2, #0x7C] \n"
"    STR     R1, [R2, #0x8C] \n"
"    STR     R1, [R2, #0x9C] \n"
"    STR     R1, [R2, #0xAC] \n"
"    STR     R1, [R2, #0xBC] \n"
"    STR     R1, [R2, #0xCC] \n"
"    STR     R1, [R2, #0xDC] \n"
"    STR     R1, [R2, #0xEC] \n"
"    STR     R1, [R2, #0xFC] \n"
"    LDR     R1, =0xC0400008 \n"
"    LDR     R2, =0x430005 \n"
"    STR     R2, [R1] \n"
"    LDR     R2, =0xC0242010 \n"
"    LDR     R1, [R2] \n"
"    ORR     R1, R1, #1 \n"
"    STR     R1, [R2] \n"
"    LDR     R0, =0xFF8986EC \n"
"    LDR     R1, =0x685000 \n"
"    LDR     R3, =0x6AFB54 \n"

"loc_FF000138:\n"
"    CMP     R1, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF000138 \n"
"    LDR     R0, =0xFF880068 \n"
"    LDR     R1, =0x1900 \n"
"    LDR     R3, =0x19F84 \n"

"loc_FF000154:\n"
"    CMP     R1, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF000154 \n"
"    LDR     R1, =0x26172C \n"
"    MOV     R2, #0 \n"

"loc_FF00016C:\n"
"    CMP     R3, R1 \n"
"    STRCC   R2, [R3], #4 \n"
"    BCC     loc_FF00016C \n"
/* Install task hooks via 0x193x is not possible with this new dryos version
   So the below code patches the CreateTask function in RAM to install our
   hook -- ERR99
*/
// Install CreateTask patch
"    LDR     R0, =patch_CreateTask\n"   // Patch data
"    LDM     R0, {R1,R2}\n"             // Get two patch instructions
"    LDR     R0, =hook_CreateTask\n"    // Address to patch
"    STM     R0, {R1,R2}\n"             // Store patch instructions

"    B       sub_FF00038C_my \n"  // --> Patched. Old value = 0xFF00038C.

"patch_CreateTask:\n"
"    LDR     PC, [PC,#-0x4]\n"          // Do jump to absolute address CreateTask_my
"    .long   CreateTask_my\n"
);
}

/*************************************************************/
//** CreateTask_my @ 0x0068AB8C - 0x0068AB90, length=2
void __attribute__((naked,noinline)) CreateTask_my() {
asm volatile (
"    STMFD   SP!, {R0}\n"
//R3 = Pointer to task function to create

/*** INSTALL capt_seq_task() hook ***/
"    LDR     R0, =task_CaptSeq\n"       // DryOS original code function ptr.
"    CMP     R0, R3\n"                  // is the given taskptr equal to our searched function?
"    LDREQ   R3, =capt_seq_task\n"      // if so replace with our task function base ptr.
"    BEQ     exitHook\n"                // below compares not necessary if this check has found something.

/*** INSTALL exp_drv_task() hook ***/
"    LDR     R0, =task_ExpDrv\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =exp_drv_task\n"
"    BEQ     exitHook\n"

/*** INSTALL filewrite() hook ***/
"    LDR     R0, =task_FileWrite\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =filewritetask\n"
"    BEQ     exitHook\n"

/*** INSTALL movie_record_task() hook ***/
/*
"    LDR     R0, =task_MovieRecord\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =movie_record_task\n"
"    BEQ     exitHook\n"
*/

/*** INSTALL init_file_modules_task() hook ***/
"    LDR     R0, =task_InitFileModules\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =init_file_modules_task\n"

"exitHook:\n" 
// restore overwritten registers
"    LDMFD   SP!, {R0}\n"
// Execute overwritten instructions from original code, then jump to firmware
"    STMFD   SP!, {R1-R9,LR} \n"
"    MOV     R4, R0 \n"
"    LDR     PC, =0x0068AB94 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF00038C_my @ 0xFF00038C - 0xFF0003F4, length=27
void __attribute__((naked,noinline)) sub_FF00038C_my() {

    //Replacement of sub_ for correct power-on.
    //(short press = playback mode, long press = record mode)

	// look at power-on switch sub_FF031094
	// value and pointer from sub_FF090140 
    if ((*(int*) 0xC0220100) & 1)       
        *(int*)(0x2F30) = 0x200000; // Playmode 
    else
        *(int*)(0x2f30) = 0x100000; // Shootingmode

asm volatile (
"    LDR     R0, =0xFF000404 \n"
"    MOV     R1, #0 \n"
"    LDR     R3, =0xFF00043C \n"

"loc_FF000398:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF000398 \n"
"    LDR     R0, =0xFF00043C \n"
"    MOV     R1, #0x1B0 \n"
"    LDR     R3, =0xFF000624 \n"

"loc_FF0003B4:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF0003B4 \n"
"    MOV     R0, #0xD2 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    MOV     R0, #0xD3 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    LDR     R0, =0x398 \n"
"    LDR     R2, =0xEEEEEEEE \n"
"    MOV     R3, #0x1000 \n"

"loc_FF0003E8:\n"
"    CMP     R0, R3 \n"
"    STRCC   R2, [R0], #4 \n"
"    BCC     loc_FF0003E8 \n"
"    BL      sub_FF00110C_my \n"  // --> Patched. Old value = 0xFF00110C.
);
}

/*************************************************************/
//** sub_FF00110C_my @ 0xFF00110C - 0xFF0011C0, length=46
void __attribute__((naked,noinline)) sub_FF00110C_my() {
asm volatile (
"    STR     LR, [SP, #-4]! \n"
"    SUB     SP, SP, #0x74 \n"
"    MOV     R1, #0x74 \n"
"    MOV     R0, SP \n"
"    BL      sub_006A93A4 \n"
"    MOV     R0, #0x83000 \n"
"    STR     R0, [SP, #4] \n"

#if defined(CHDK_NOT_IN_CANON_HEAP) // use original heap offset if CHDK is loaded in high memory
"    LDR     R0, =0x26172C \n"
#else
"    LDR     R0, =new_sa\n"   // otherwise use patched value
"    LDR     R0, [R0]\n"      //
#endif

"    LDR     R2, =0x53F15C \n"
"    STR     R0, [SP, #8] \n"
"    SUB     R0, R2, R0 \n"
"    STR     R0, [SP, #0xC] \n"
"    MOV     R0, #0x22 \n"
"    STR     R0, [SP, #0x18] \n"
"    MOV     R0, #0x98 \n"
"    STR     R0, [SP, #0x1C] \n"
"    LDR     R0, =0x1E2 \n"
"    LDR     R1, =0x549C00 \n"
"    STR     R2, [SP, #0x10] \n"
"    STR     R0, [SP, #0x20] \n"
"    MOV     R0, #0xF6 \n"
"    STR     R1, [SP] \n"
"    STR     R1, [SP, #0x14] \n"
"    STR     R0, [SP, #0x24] \n"
"    MOV     R0, #0xB6 \n"
"    STR     R0, [SP, #0x28] \n"
"    MOV     R0, #0x85 \n"
"    STR     R0, [SP, #0x2C] \n"
"    MOV     R0, #0x40 \n"
"    STR     R0, [SP, #0x30] \n"
"    MOV     R0, #4 \n"
"    STR     R0, [SP, #0x34] \n"
"    MOV     R0, #0x10 \n"
"    STR     R0, [SP, #0x5C] \n"
"    MOV     R0, #0x800 \n"
"    STR     R0, [SP, #0x60] \n"
"    MOV     R0, #0xA0 \n"
"    STR     R0, [SP, #0x64] \n"
"    MOV     R0, #0x280 \n"
"    STR     R0, [SP, #0x68] \n"
"    LDR     R1, =sub_FF00420C_my \n"  // --> Patched. Old value = 0xFF00420C.
"    MOV     R2, #0 \n"
"    MOV     R0, SP \n"
"    BL      sub_006867E8 \n"
"    ADD     SP, SP, #0x74 \n"
"    LDR     PC, [SP], #4 \n"
);
}

/*************************************************************/
//** sub_FF00420C_my @ 0xFF00420C - 0xFF004280, length=30
void __attribute__((naked,noinline)) sub_FF00420C_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    BL      sub_FF000AE8 \n"
"    BL      sub_FF00539C \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00434C \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF003E44 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF004354 \n"
"    BLLT    _err_init_task \n"
"    LDR     R0, =0xFF004364 \n"
"    BL      sub_FF003F2C \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00436C \n"
"    BLLT    _err_init_task \n"
"    LDR     R0, =0xFF004364 \n"
"    BL      sub_FF00294C \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF004380 \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF004D38 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00438C \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF001604 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF004398 \n"
"    BLLT    _err_init_task \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF00B24C_my \n"  // --> Patched. Old value = 0xFF00B24C.
);
}

/*************************************************************/
//** sub_FF00B24C_my @ 0xFF00B24C - 0xFF00B2BC, length=29
void __attribute__((naked,noinline)) sub_FF00B24C_my() {
asm volatile (
"    STMFD   SP!, {R3,LR} \n"
"    BL      sub_FF038080 \n"
"    BL      sub_FF03970C \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF00B270 \n"
"    BL      sub_FF034190 /*_IsNormalCameraMode_FW*/ \n"
"    CMP     R0, #0 \n"
"    MOVNE   R0, #1 \n"
"    BNE     loc_FF00B274 \n"

"loc_FF00B270:\n"
"    MOV     R0, #0 \n"

"loc_FF00B274:\n"
"    BL      sub_FF032004_my \n"  // --> Patched. Old value = 0xFF032004.
"    CMP     R0, #0 \n"
"    BNE     loc_FF00B288 \n"
"    BL      sub_FF0317F0 \n"

"loc_FF00B284:\n"
"    B       loc_FF00B284 \n"

"loc_FF00B288:\n"
"    BL      sub_0068C318 \n"
"    LDR     R1, =0x5CE000 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF039C48 \n"
"    BL      sub_0068C530 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =task_Startup_my \n"  // --> Patched. Old value = 0xFF00B1E4.
"    MOV     R2, #0 \n"
"    MOV     R1, #0x19 \n"
"    LDR     R0, =0xFF00B2C8 \n"
"    BL      _CreateTask \n"
"    MOV     R0, #0 \n"
"    LDMFD   SP!, {R3,PC} \n"
);
}

/*************************************************************/
//** sub_FF032004_my @ 0xFF032004 - 0xFF032068, length=26
void __attribute__((naked,noinline)) sub_FF032004_my() {
asm volatile (
"    STMFD   SP!, {R2-R8,LR} \n"
"    MOV     R6, #0 \n"
"    MOV     R8, R0 \n"
"    MOV     R7, R6 \n"
//"  BL      _sub_FF093A20 \n"  // --> Nullsub call removed.
"    MOV     R0, #0x36 \n"
"    BL      sub_FF091350 \n"
"    MOV     R4, #1 \n"
"    BIC     R5, R4, R0 \n"
"    MOV     R0, #0x37 \n"
"    BL      sub_FF091350 \n"
"    CMP     R8, #0 \n"
"    BIC     R4, R4, R0 \n"
"    BEQ     loc_FF032044 \n"
"    ORRS    R0, R5, R4 \n"
"    BEQ     loc_FF032068 \n"

"loc_FF032044:\n"
"    BL      sub_FF03970C \n"
"    MOV     R2, R0 \n"
"    MOV     R3, #0 \n"
"    MOV     R1, R4 \n"
"    MOV     R0, R5 \n"
"    STRD    R6, [SP] \n"
//"  BL      _sub_FF093A28 \n"  // Disable StartUpChecks
//"  BL      _sub_FF093A24 \n"  // --> Nullsub call removed.
"    MOV     R0, #1 \n"

"loc_FF032068:\n"
"    LDMFD   SP!, {R2-R8,PC} \n"
);
}

/*************************************************************/
//** task_Startup_my @ 0xFF00B1E4 - 0xFF00B248, length=26
void __attribute__((naked,noinline)) task_Startup_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    BL      sub_FF0048A4 \n"
"    BL      sub_FF033220 \n"
"    BL      sub_FF031778 \n"
//"  BL      _sub_FF094228 \n"  // --> Nullsub call removed.
"    BL      sub_FF03997C \n"
//"  BL      _sub_FF039804 \n"  // load DISKBOOT.BIN
"    BL      sub_FF039AE4 \n"
"    BL      sub_FF03A2BC \n"
//"  BL      _sub_FF039AD8 \n"  // --> Nullsub call removed.
"    BL      sub_FF0399B8 \n"
"    BL      sub_FF037FB8 \n"
"    BL      sub_FF03A2C4 \n"
"    BL      CreateTask_spytask\n" // added
"    BL      taskcreatePhySw_my \n"  // --> Patched. Old value = 0xFF031EB0.
"    BL      sub_FF036024 \n"
"    BL      sub_FF0DFBB0 \n"
"    BL      sub_FF02F374 \n"
"    BL      sub_FF0310E8 \n"
"    BL      sub_FF03953C \n"
"    BL      sub_FF03172C \n"
"    BL      sub_FF031084 \n"
//"  BL      _sub_FF039ADC \n"  // --> Nullsub call removed.
"    BL      sub_FF030004 \n"
"    BL      sub_FF031048 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF0049E0 \n"
);
}

/*************************************************************/
//** taskcreatePhySw_my @ 0xFF031EB0 - 0xFF031F00, length=21
void __attribute__((naked,noinline)) taskcreatePhySw_my() {
asm volatile (
"    STMFD   SP!, {R3-R5,LR} \n"
"    LDR     R4, =0x1E20 \n"
"    LDR     R0, [R4, #4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF031EE4 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =mykbd_task \n"  // --> Patched. Old value = 0xFF031E7C.
"    MOV     R2, #0x2000 \n"  // --> Patched. Old value = 0x800. stack size for new task_PhySw so we don't have to do stack switch
"    MOV     R1, #0x17 \n"
"    LDR     R0, =0xFF032160 \n"
"    BL      sub_0068AF04 /*_CreateTaskStrictly*/ \n"
"    STR     R0, [R4, #4] \n"

"loc_FF031EE4:\n"
"    BL      sub_FF0C8E90 \n"
"    BL      sub_FF0340E0 /*_IsFactoryMode_FW*/ \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF031F00 \n"
"    LDR     R1, =0x3F490 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF0C8DFC /*_OpLog.Start_FW*/ \n"

"loc_FF031F00:\n"
"    LDMFD   SP!, {R3-R5,PC} \n"
);
}

/*************************************************************/
//** init_file_modules_task @ 0xFF08360C - 0xFF083640, length=14
void __attribute__((naked,noinline)) init_file_modules_task() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    BL      sub_FF0CB788 \n"
"    LDR     R5, =0x5006 \n"
"    MOVS    R4, R0 \n"
"    MOVNE   R1, #0 \n"
"    MOVNE   R0, R5 \n"
"    BLNE    _PostLogicalEventToUI \n"
"    BL      sub_FF0CB7BC \n"
"    BL      core_spytask_can_start\n"  // CHDK: Set "it's-safe-to-start" flag for spytask
"    CMP     R4, #0 \n"
"    LDMNEFD SP!, {R4-R6,PC} \n"
"    MOV     R0, R5 \n"
"    LDMFD   SP!, {R4-R6,LR} \n"
"    MOV     R1, #0 \n"
"    B       _PostLogicalEventToUI \n"
);
}
