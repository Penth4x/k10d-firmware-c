/* @k10d init_struct_and_call_handler_1036c1fe @ 0x1036c1fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct field and calls a handler with a stack-constructed argument block.
 * summary:
 *   The function writes the constant 0x80000 to offset 0xc of the object pointed to by
 *   param_1. It calls eventflag_clr_flg with a fixed SDRAM address and the same constant.
 *   It then constructs a 16-byte structure on the stack using params 4-7 and passes it,
 *   along with params 1-3, to init_object_with_seven_params.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_and_call_handler_1036c1fe(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint8_t param_7)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_28 [16];
  
  puVar1 = (uint32_t *)auStack_28;
  *(uint32_t *)(param_1 + 0xc) = 0x80000;
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x80000));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  *(uint8_t *)((int)puVar1 + 0xf) = param_7;
  init_object_with_seven_params(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,*puVar1,puVar1[1],puVar1[2], *(uint8_t *)((int)puVar1 + 0xf));
  return;
}
