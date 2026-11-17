/* @k10d dispatch_param_after_init @ 0x1051d004
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an initialization routine, then conditionally invokes a second routine based on
 *   the result of a check on param_1.
 * summary:
 *   The function first calls clear_two_word_fields_1051d02a unconditionally. It then calls
 *   call_helper_and_branch_on_result with param_1; if the return value is non-zero, it
 *   calls read_two_status_words with param_1 and returns its result, otherwise it returns
 *   0. The specific roles of the callees are unknown, so the behavior is described
 *   mechanically as a conditional dispatch following an initialization step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_after_init(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_two_word_fields_1051d02a(__frv_reg_unset(4));
  iVar1 = call_helper_and_branch_on_result(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = read_two_status_words(param_1);
  }
  return uVar2;
}
