/* @k10d call_helper_if_check_passes_10519ffa @ 0x10519ffa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls an init helper, then conditionally calls a second helper based on a check
 *   function's result.
 * summary:
 *   The function first calls clear_five_word_fields unconditionally. It then calls
 *   call_helper_and_branch_on_result with the input parameter; if that returns non-zero, it
 *   calls populate_struct_from_object with the same parameter and returns its result. If
 *   the check returns zero, it returns zero. The specific subsystem is not identifiable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_if_check_passes_10519ffa(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_five_word_fields(__frv_reg_unset(4));
  iVar1 = call_helper_and_branch_on_result(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = populate_struct_from_object(param_1);
  }
  return uVar2;
}
