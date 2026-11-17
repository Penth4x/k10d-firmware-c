/* @k10d init_struct_and_notify_1047cd1c @ 0x1047cd1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure, initializes its fields with parameters, and calls a notification
 *   function.
 * summary:
 *   Calls alloc_dynamic_array_header to obtain a pointer, then writes param_2 to offset 8,
 *   the constant 2 to offset 4, and param_4 to the location pointed to by the pointer at
 *   offset 0xc. Finally, calls reg_framework_send with param_1 + 8 as the argument. The
 *   specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_notify_1047cd1c(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 2;
  **(uint32_t **)(iVar1 + 0xc) = param_4;
  reg_framework_send(param_1 + 8);
  return;
}
