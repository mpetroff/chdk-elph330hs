#include "stubs_asm.h"
DEF(file_counter_var,0x12345678) // found by searching RAM :<
DEF(palette_control,0x12345678) // guessed based on similarity to g12 (first byte of palette related struct)
DEF(bitmap_buffer,0x12345678) // from browsing ram
DEF(active_bitmap_buffer,0x12345678) // similar to g12, checking ram
DEF(active_viewport_buffer,0x12345678) // sub_FF073A04
DEF(viewport_buffers,0x12345678) // sub_FF073A04, guessed
// from sub_FF358054, value stored in sig finder video_compression_rate is stored here
// both are adjusted continuously by canon firmware
//DEF(video_compression_rate2,0xD2E4+0x1c) 
