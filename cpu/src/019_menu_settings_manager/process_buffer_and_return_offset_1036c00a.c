/* @k10d process_buffer_and_return_offset_1036c00a @ 0x1036c00a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 64KB buffer, processes it with a helper, and returns a value from the
 *   input structure.
 * summary:
 *   The function calls eventflag_clr_flg to initialize a buffer at 0x80018088 (size
 *   0x10000). It then calls init_object_with_three_fields_104c4a48 with the input
 *   parameters and a global pointer. eventflag_wai_flg is called to process the buffer,
 *   followed by another call to eventflag_clr_flg. Finally, it returns the value at offset
 *   8 of the first parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_buffer_and_return_offset_1036c00a(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x10000);
  init_object_with_three_fields_104c4a48(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x10000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x10000);
  return *(uint32_t *)((int)param_1 + 8);
}
