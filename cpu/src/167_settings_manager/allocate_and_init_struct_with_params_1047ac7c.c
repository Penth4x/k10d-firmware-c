/* @k10d allocate_and_init_struct_with_params_1047ac7c @ 0x1047ac7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, fills its fields with param_2, 2,
 *   and param_3, then calls reg_framework_send.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly
 *   allocated or retrieved structure. It writes param_2 to offset 8, the constant 2 to
 *   offset 4, and param_3 to the location pointed to by the pointer at offset 0xc. Finally,
 *   it invokes reg_framework_send with param_1 + 4 as the argument. The specific subsystem
 *   or data structure type is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047ac7c(int param_1,uint32_t param_2,uint32_t param_3)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)((int)iVar1 + 8) = param_2;
  *(uint32_t *)((int)iVar1 + 4) = 2;
  **(uint32_t **)((int)iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x2);
  return;
}
