/* @k10d accumulate_loop_values @ 0x10474410
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a sequence of values from a linked structure, accumulating their sum via
 *   a helper.
 * summary:
 *   Reads an initial value from param_1+8 via call_function_at_offset_8_104767d4. In a do-
 *   while loop, it calls compute_difference_of_two_values to process the current value,
 *   adds the result to a running total, and calls call_helper_on_field_at_offset_8_1047681c
 *   to get the next value. The loop terminates when the next value equals the initial
 *   value, returning the accumulated sum.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int accumulate_loop_values(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = call_function_at_offset_8_104767d4(*(int *)(param_1 + 8));
  iVar2 = iVar1;
  do {
    iVar2 = compute_difference_of_two_values(param_1,iVar2);
    iVar3 = iVar2 + iVar3;
    iVar2 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 8));
  } while (iVar2 != iVar1);
  return iVar3;
}
