/* @k10d allocate_and_fill_struct_1047adc0 @ 0x1047adc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure, initializes its fields with parameters, and calls a
 *   helper on param_1.
 * summary:
 *   Calls alloc_dynamic_array_header(0,3) to obtain a pointer to a newly allocated or
 *   retrieved structure. Writes param_2 to offset 8, sets offset 4 to 0x40, and stores
 *   param_4 at the address pointed to by offset 0xc. Then writes param_5 and param_6 to
 *   offsets 4 and 8 of that dereferenced pointer. Finally calls reg_framework_send with
 *   param_1 + 4 as the argument. The specific subsystem is not identifiable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_fill_struct_1047adc0(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(alloc_dynamic_array_header(0,3));
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x40;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 4) = param_5;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 8) = param_6;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x2);
  return;
}
