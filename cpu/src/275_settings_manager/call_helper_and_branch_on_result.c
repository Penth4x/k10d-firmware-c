/* @k10d call_helper_and_branch_on_result @ 0x1051c4d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an initialization helper, then invokes a second helper on the same argument only
 *   if a third helper returns non-zero.
 * summary:
 *   The function first calls clear_four_word_fields with no arguments. It then calls the
 *   function pointer at 0x104a29d0 with param_1 and checks the return value. If the result
 *   is zero, it returns zero; otherwise it calls initialize_buffer_offsets with param_1 and
 *   returns that result. The specific roles of the callees are unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_and_branch_on_result(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_four_word_fields(__frv_reg_unset(4));
  iVar1 = (*(code *)0x104a29d0/*ROM*/)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = initialize_buffer_offsets(param_1);
  }
  return uVar2;
}
