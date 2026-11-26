/* @k10d allocate_and_init_struct_with_params_1047cce0 @ 0x1047cce0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, initializes its fields with param_2
 *   and param_3, and calls reg_framework_send on param_1+8.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer, then writes
 *   param_2 to offset 8, the constant 1 to offset 4, and param_3 to the location pointed to
 *   by the pointer at offset 0xc. Finally, it calls reg_framework_send with param_1+8 as
 *   the argument. The specific subsystem is not identifiable from the provided pseudocode
 *   and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047cce0(cls_105aaa50 *param_1,uint32_t param_2,uint32_t param_3)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)((int)iVar1 + 8) = param_2;
  *(uint32_t *)((int)iVar1 + 4) = 1;
  **(uint32_t **)((int)iVar1 + 0xc) = param_3;
  reg_framework_send((int)&param_1->field_0x8, (void *)iVar1, 0x2);
  return;
}
