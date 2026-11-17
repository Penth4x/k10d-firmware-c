/* @k10d init_struct_with_timeout @ 0x1047af4a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure, sets a timeout field to 0x40000, stores a parameter, and
 *   triggers a callback.
 * summary:
 *   Calls alloc_dynamic_array_header(0,0) to obtain a pointer, likely allocating a new
 *   object. Writes 0x40000 to offset 4 and param_2 to offset 8 of this object. Finally,
 *   calls reg_framework_send with param_1 + 4 as an argument. The specific subsystem is not
 *   identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_timeout(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,0);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x40000;
  reg_framework_send(param_1 + 4);
  return;
}
