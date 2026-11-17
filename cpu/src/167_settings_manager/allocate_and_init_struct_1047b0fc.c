/* @k10d allocate_and_init_struct_1047b0fc @ 0x1047b0fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block and initializes its fields with provided parameters and a
 *   constant.
 * summary:
 *   Calls alloc_dynamic_array_header with arguments 0 and 2 to obtain a pointer. Writes
 *   param_2 to offset 8, 0x2000 to offset 4, and param_4 to the address stored at offset
 *   0xc. Writes param_5 to offset 4 of the address stored at offset 0xc. Finally calls
 *   reg_framework_send with param_1 + 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_1047b0fc(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  int iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,2);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x2000;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 4) = param_5;
  reg_framework_send(param_1 + 4);
  return;
}
