/* @k10d dispatch_seven_param_call @ 0x1036c318
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Builds a 16-byte local struct from four parameters and forwards all seven arguments to
 *   a callee.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   (0x400000), then copies param_4 through param_7 into a local 16-byte buffer. It invokes
 *   init_object_with_six_params passing param_1, param_2, param_3, and the four buffered
 *   values. It then calls eventflag_wai_flg with the same SDRAM address/size and a code
 *   pointer, calls eventflag_clr_flg again, and returns the value at offset 8 of param_1.
 *   The specific subsystem role is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t
dispatch_seven_param_call(void *param_1,uint32_t param_2,uint32_t param_3,void *param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t local_2c [16];
  
  puVar1 = (uint32_t *)local_2c;
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x400000));
  *puVar1 = (uint32_t)(param_4);
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  init_object_with_six_params(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x400000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x400000));
  return *(uint32_t *)((int)param_1 + 8);
}
