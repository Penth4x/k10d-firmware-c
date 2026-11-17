/* @k10d allocate_and_init_struct_with_params_1047aed6 @ 0x1047aed6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, fills its fields with param_2,
 *   0x400, and param_4, then calls reg_framework_send.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer, then writes param_2 to
 *   offset 8, 0x400 to offset 4, and param_4 to the location pointed to by offset 0xc.
 *   Finally calls reg_framework_send with param_1+4. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_with_params_1047aed6(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x400;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 4);
  return;
}
