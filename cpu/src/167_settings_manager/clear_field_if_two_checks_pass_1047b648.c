/* @k10d clear_field_if_two_checks_pass_1047b648 @ 0x1047b648
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value at offset 0x48, checks it is non-zero, then checks a value at offset 0x50
 *   via a helper, and clears the field at offset 0x34 if both pass.
 * summary:
 *   The function calls check_six_char_pattern with param_1+0x48. If the result is non-zero,
 *   it calls call_subroutine_with_offset_c_10477e8c with the value stored at param_1+0x50.
 *   If that second call also returns non-zero, it writes 0 to the 4-byte field at
 *   param_1+0x34. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_if_two_checks_pass_1047b648(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) && (iVar1 = call_subroutine_with_offset_c_10477e8c(*(int *)(param_1 + 0x50)), iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
