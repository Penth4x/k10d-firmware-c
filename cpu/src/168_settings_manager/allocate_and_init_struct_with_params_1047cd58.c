/* @k10d allocate_and_init_struct_with_params_1047cd58 @ 0x1047cd58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, fills its fields with the given
 *   parameters, and passes a pointer to reg_framework_send.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly
 *   allocated or retrieved structure. It then writes param_2 to offset 8, the constant 3 to
 *   offset 4, and param_4 to the location pointed to by the pointer at offset 0xc. Finally,
 *   it calls reg_framework_send with param_1 + 8 as the argument. The specific roles of the
 *   parameters and the subsystem are not determinable from the provided pseudocode and
 *   unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047cd58(cls_105aaa50 *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(alloc_dynamic_array_header(0,1));
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 3;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send((int)&param_1->field_0x8, (void *)iVar1, 0x2);
  return;
}
