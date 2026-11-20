/* @k10d dispatch_three_params_and_return_offset @ 0x1036ba60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with three parameters and returns the value at param_1+8.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   8, then calls init_object_with_two_ids_104c4668 passing param_1, param_2, and param_3.
 *   It subsequently calls eventflag_wai_flg with the same SDRAM address, size 8, a null
 *   pointer, and a ROM constant, followed by another call to eventflag_clr_flg. Finally, it
 *   returns the 32-bit value located at offset 8 of the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_three_params_and_return_offset(void *param_1,uint32_t param_2,uint32_t param_3)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(8));
  init_object_with_two_ids_104c4668(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(8));
  return *(uint32_t *)((int)param_1 + 8);
}
