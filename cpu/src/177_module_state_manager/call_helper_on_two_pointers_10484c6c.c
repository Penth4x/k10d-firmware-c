/* @k10d call_helper_on_two_pointers_10484c6c @ 0x10484c6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two pointer values derived from a struct at param_1.
 * summary:
 *   The function takes a struct pointer in param_1 and calls
 *   copy_bytes_to_struct_offset_10428a0e twice with the same param_2, param_3, and param_4.
 *   The first call uses the value at offset 0x14 of the struct, and the second call uses
 *   the value at offset 0xc. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484c6c(int param_1,int param_2,void *param_3,int param_4)

{
  copy_bytes_to_struct_offset_10428a0e(param_1 + 0x14,param_2,(int)param_3,param_4);
  copy_bytes_to_struct_offset_10428a0e(*(int *)(param_1 + 0xc),param_2,(int)param_3,param_4);
  return;
}
