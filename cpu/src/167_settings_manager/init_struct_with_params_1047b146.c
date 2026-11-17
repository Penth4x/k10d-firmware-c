/* @k10d init_struct_with_params_1047b146 @ 0x1047b146
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header and initializes its fields with the
 *   provided parameters.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer, then writes param_2 to
 *   offset 8, 0x4000 to offset 4, and param_4 to the location pointed to by the pointer at
 *   offset 0xc. Finally calls reg_framework_send with param_1 + 4. The specific subsystem
 *   is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_params_1047b146(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x4000;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 4);
  return;
}
