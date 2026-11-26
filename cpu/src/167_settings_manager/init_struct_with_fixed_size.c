/* @k10d init_struct_with_fixed_size @ 0x1047b1c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure, sets its size field to 0x100000, and stores three parameters
 *   into its fields.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a new object. Writes
 *   0x100000 to offset 4, param_2 to offset 8, and param_4 to the address pointed to by
 *   offset 0xc. Finally calls reg_framework_send with param_1 + 4. The specific subsystem
 *   is not identifiable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_fixed_size(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x100000;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x1);
  return;
}
