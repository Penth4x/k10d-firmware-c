/* @k10d init_struct_with_offset_and_flag @ 0x1047af80
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure, sets fields at offsets 4 and 8, and calls a helper with a
 *   derived pointer.
 * summary:
 *   Calls alloc_dynamic_array_header(0,0) to obtain a pointer (likely an allocation or
 *   object creation). Writes 0x80000 to offset 4 and param_2 to offset 8 of the returned
 *   structure. Calls reg_framework_send with param_1 + 4 as the argument. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_offset_and_flag(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,0);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x80000;
  reg_framework_send(param_1 + 4);
  return;
}
