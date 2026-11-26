/* @k10d init_struct_with_flag_and_param @ 0x1047af14
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure, sets a flag at offset 4 and stores param_2 at offset 8, then
 *   calls a helper with param_1+4.
 * summary:
 *   Calls alloc_dynamic_array_header(0,0) to obtain a pointer (likely an allocation or
 *   object creation). Writes 0x20000 to offset 4 and param_2 to offset 8 of the returned
 *   structure. Finally calls reg_framework_send with param_1+4 as the argument. The
 *   specific subsystem is not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_flag_and_param(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,0);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0x20000;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x1);
  return;
}
