/* @k10d call_handler_with_two_args @ 0x1036c100
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a handler with five arguments and returns a field from the first parameter.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address and size, then calls
 *   init_object_with_four_params passing the first three parameters plus two values stored
 *   on the stack. It subsequently calls eventflag_wai_flg and eventflag_clr_flg again
 *   before returning the value at offset 8 of the first parameter. The specific roles of
 *   the callees and the data structures are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_handler_with_two_args(void *param_1,int param_2,uint32_t param_3,int param_4,int param_5)

{
  uintptr_t sp;
  int *piVar1;
  uint8_t local_24 [8];
  
  piVar1 = (int *)local_24;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x20000);
  *piVar1 = param_4;
  piVar1[1] = param_5;
  init_object_with_four_params(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,*piVar1,piVar1[1]);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x20000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x20000);
  return *(uint32_t *)((int)param_1 + 8);
}
