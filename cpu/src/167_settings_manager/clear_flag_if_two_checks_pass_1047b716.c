/* @k10d clear_flag_if_two_checks_pass_1047b716 @ 0x1047b716
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a 32-bit field at offset 0x34 in a struct if two helper checks on fields at 0x48
 *   and 0x50 both return non-zero.
 * summary:
 *   The function calls check_six_char_pattern with the value at param_1+0x48. If that
 *   result is non-zero, it calls call_helper_with_offset_c_10477f30 with the value at
 *   param_1+0x50. If the second result is also non-zero, it writes 0 to the 32-bit field at
 *   param_1+0x34. The specific roles of the helper functions and the struct fields are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_two_checks_pass_1047b716(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) && (iVar1 = call_helper_with_offset_c_10477f30(*(int *)(param_1 + 0x50)), iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
