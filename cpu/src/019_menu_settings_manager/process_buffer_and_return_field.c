/* @k10d process_buffer_and_return_field @ 0x1036bdda
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 4KB buffer, processes input parameters into it, finalizes the buffer, and
 *   returns a field from the input structure.
 * summary:
 *   The function calls eventflag_clr_flg to initialize a buffer at 0x80018088 with size
 *   0x1000. It then calls init_object_with_three_params_104c48a6 with a global pointer,
 *   param_1, and param_2, likely performing the core processing. eventflag_wai_flg is
 *   called to finalize or transform the buffer contents. Finally, it re-initializes the
 *   buffer and returns the value at offset 8 of param_1. The specific camera subsystem is
 *   not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_buffer_and_return_field(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x1000));
  init_object_with_three_params_104c48a6(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x1000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x1000));
  return *(uint32_t *)((int)param_1 + 8);
}
