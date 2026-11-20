/* @k10d init_struct_and_call_handler_1036bfc0 @ 0x1036bfc0
 * name: model (proposed by the local model from the decompile, confidence 0.30)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a field in a struct and calls a handler with the struct and additional
 *   parameters.
 * summary:
 *   The function sets the field at offset 0xc of the struct pointed to by param_1 to
 *   0x8000. It then calls eventflag_clr_flg with constants 0x80018088 and 0x8000. Finally,
 *   it calls init_object_with_params_104c4a00 with a global pointer, the struct, and the
 *   remaining parameters. The specific roles of the callees and the struct are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_and_call_handler_1036bfc0(int param_1,uint16_t param_2,uint8_t param_3,uint8_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_18 [4];
  
  puVar1 = auStack_18;
  *(uint32_t *)(param_1 + 0xc) = 0x8000;
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x8000));
  puVar1[3] = param_4;
  init_object_with_params_104c4a00(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,puVar1[3]);
  return;
}
