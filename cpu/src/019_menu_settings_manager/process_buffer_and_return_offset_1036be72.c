/* @k10d process_buffer_and_return_offset_1036be72 @ 0x1036be72
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x2000-byte buffer at 0x80018088, processes it with param_1/param_2, and
 *   returns the value at param_1+8.
 * summary:
 *   The function calls eventflag_clr_flg twice with the fixed address 0x80018088 and size
 *   0x2000, likely for initialization or clearing. It invokes
 *   init_object_with_flag_and_byte_104c4910 with a global pointer, param_1, and param_2,
 *   followed by eventflag_wai_flg which appears to perform a transformation or copy
 *   involving the buffer and a constant. The return value is the 4-byte value located at
 *   offset 8 of the param_1 structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_buffer_and_return_offset_1036be72(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x2000);
  init_object_with_flag_and_byte_104c4910(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x2000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x2000);
  return *(uint32_t *)((int)param_1 + 8);
}
