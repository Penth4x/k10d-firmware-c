/* @k10d accumulate_values_in_range @ 0x10474c46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a range of values from a pointer in param_1, accumulating results from a
 *   helper function.
 * summary:
 *   The function reads a pointer from offset 8 of param_1. It gets a start value from
 *   call_function_at_offset_8_104767d4 and an end value from
 *   call_helper_on_field_at_offset_8_1047681c. It loops, calling
 *   call_helper_with_stack_out_param with the current value and adding the result to a
 *   running sum, until the value equals the end value. The total sum is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int accumulate_values_in_range(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = call_function_at_offset_8_104767d4(*(int *)(param_1 + 8));
  iVar2 = iVar1;
  do {
    iVar2 = call_helper_with_stack_out_param(param_1,iVar2);
    iVar3 = iVar2 + iVar3;
    iVar2 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 8));
  } while (iVar2 != iVar1);
  return iVar3;
}
