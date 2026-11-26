/* @k10d allocate_and_init_struct_1047b0be @ 0x1047b0be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure, initializes its fields with parameters, and passes a
 *   related pointer to a helper.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly allocated or
 *   retrieved object. Writes param_2 to offset 8, the constant 0x1000 to offset 4, and
 *   param_4 to the address stored at offset 0xc. Finally, calls reg_framework_send with
 *   param_1 + 4 as the argument. The specific subsystem is not identifiable from the
 *   provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_1047b0be(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x1000;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x2);
  return;
}
