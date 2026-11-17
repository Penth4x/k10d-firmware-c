/* @k10d accumulate_until_pointer_matches @ 0x10477fb8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops calling two helpers on a pointer from param_1+0xc, accumulating results until a
 *   helper returns the initial value.
 * summary:
 *   Reads a pointer from param_1+0xc and calls call_function_at_offset_8_104767d4 to get an
 *   initial value. In a do-while loop it calls call_helper_or_fallback with the pointer and
 *   current value, adds the result to an accumulator, then calls
 *   call_helper_on_field_at_offset_8_1047681c to get the next value, repeating until that
 *   value equals the initial one. Returns the accumulated sum. The specific subsystem role
 *   of the three callees is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int accumulate_until_pointer_matches(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = call_function_at_offset_8_104767d4(*(int *)(param_1 + 0xc));
  iVar2 = iVar1;
  do {
    iVar2 = call_helper_or_fallback(*(uint32_t *)(param_1 + 0xc),iVar2);
    iVar3 = iVar2 + iVar3;
    iVar2 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 0xc));
  } while (iVar2 != iVar1);
  return iVar3;
}
