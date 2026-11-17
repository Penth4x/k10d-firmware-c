/* @k10d clear_flag_if_two_checks_pass_1047b49a @ 0x1047b49a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks two values derived from param_1 and clears a 4-byte field at offset 0x34 if both
 *   are non-zero.
 * summary:
 *   Calls check_six_char_pattern with param_1+0x48 and increment_counters_on_nonzero_check
 *   with the value at param_1+0x50. If both return non-zero, writes 0 to the 4-byte field
 *   at param_1+0x34. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_two_checks_pass_1047b49a(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) && (iVar1 = increment_counters_on_nonzero_check(*(int *)(param_1 + 0x50)), iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
