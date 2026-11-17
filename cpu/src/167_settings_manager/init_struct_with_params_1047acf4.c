/* @k10d init_struct_with_params_1047acf4 @ 0x1047acf4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure via alloc_dynamic_array_header and populates its fields with the
 *   provided parameters.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer, then writes param_2 to
 *   offset 8, the constant 8 to offset 4, and param_3 to the location pointed to by the
 *   pointer at offset 0xc. Finally, calls reg_framework_send with param_1 + 4. The specific
 *   subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_params_1047acf4(int param_1,uint32_t param_2,uint32_t param_3)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 8;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 4);
  return;
}
