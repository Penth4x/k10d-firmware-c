/* @k10d allocate_and_init_struct_with_params_1047ae5a @ 0x1047ae5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, fills its fields with the given
 *   parameters, and calls reg_framework_send.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly
 *   allocated or retrieved structure. It then writes param_2 to offset 8, the constant
 *   0x100 to offset 4, and param_4 to the location pointed to by the pointer at offset 0xc.
 *   Finally, it calls reg_framework_send with param_1 + 4 as the argument. The specific
 *   roles of the structure and the callees are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047ae5a(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)((int)iVar1 + 8) = param_2;
  *(uint32_t *)((int)iVar1 + 4) = 0x100;
  **(uint32_t **)((int)iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x2);
  return;
}
