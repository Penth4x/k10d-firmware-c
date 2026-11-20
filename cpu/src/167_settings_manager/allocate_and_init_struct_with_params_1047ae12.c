/* @k10d allocate_and_init_struct_with_params_1047ae12 @ 0x1047ae12
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte struct, initializes its fields with the provided parameters, and
 *   passes a related pointer to a helper.
 * summary:
 *   Calls alloc_dynamic_array_header(0, 2) to obtain a pointer to a newly allocated or
 *   retrieved structure. Writes param_2 to offset 8, sets offset 4 to 0x80, and stores
 *   param_4 at the address pointed to by the pointer at offset 0xc. Additionally writes
 *   param_5 to offset 4 of that dereferenced pointer. Finally calls reg_framework_send with
 *   param_1 + 4. The specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047ae12(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(alloc_dynamic_array_header(0,2));
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x80;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 4) = param_5;
  reg_framework_send(param_1 + 4);
  return;
}
