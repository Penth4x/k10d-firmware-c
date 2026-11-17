/* @k10d allocate_and_fill_struct_1047ad78 @ 0x1047ad78
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure and populates its fields with the provided parameters.
 * summary:
 *   Calls alloc_dynamic_array_header with arguments 0 and 2 to obtain a pointer to a newly
 *   allocated or retrieved object. Writes param_2 to offset 8, the constant 0x20 to offset
 *   4, and sets up a pointer at offset 0xc to param_4, then writes param_5 to offset 4 of
 *   that pointed-to structure. Finally, calls reg_framework_send with param_1 + 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_fill_struct_1047ad78(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,2);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x20;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 4) = param_5;
  reg_framework_send(param_1 + 4);
  return;
}
