/* @k10d forward_params_to_helper_1036c258 @ 0x1036c258
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards input parameters to a helper function and returns a field from the first
 *   argument.
 * summary:
 *   The function calls eventflag_clr_flg with fixed arguments (0x80018088, 0x100000), then
 *   passes param_1 through param_6 to init_struct_with_fields_and_flags along with
 *   _DAT_8000439c. It subsequently calls eventflag_wai_flg and eventflag_clr_flg again
 *   before returning the value at offset 8 of param_1. The specific roles of the callees
 *   and the data structures are not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t
forward_params_to_helper_1036c258(void *param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5,
            uint8_t param_6)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t local_28 [12];
  
  puVar1 = (uint32_t *)local_28;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x100000);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(uint8_t *)((int)puVar1 + 0xb) = param_6;
  init_struct_with_fields_and_flags(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,*puVar1,puVar1[1],
               *(uint8_t *)((int)puVar1 + 0xb));
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x100000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x100000);
  return *(uint32_t *)((int)param_1 + 8);
}
