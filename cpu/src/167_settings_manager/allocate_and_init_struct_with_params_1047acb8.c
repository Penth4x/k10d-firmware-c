/* @k10d allocate_and_init_struct_with_params_1047acb8 @ 0x1047acb8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, initializes its fields with the
 *   given parameters, and calls reg_framework_send.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly
 *   allocated or retrieved structure. It then writes param_2 to offset 8, the constant 4 to
 *   offset 4, and the address of param_3 to offset 12 of this structure. Finally, it calls
 *   reg_framework_send with param_1 + 4 as the argument. The specific roles of the callees
 *   and the structure are not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047acb8(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(alloc_dynamic_array_header(0,1));
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 4;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 4);
  return;
}
