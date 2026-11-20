/* @k10d call_five_unnamed_functions @ 0x000e6c4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes a sequence of five functions, conditionally calling a sixth based on a return
 *   value.
 * summary:
 *   The function executes clear_flag_4_and_call_helper, FUN_000e0842, and
 *   check_two_flags_and_return_shifted_value unconditionally. It then calls
 *   clear_bit7_and_call_helper and, if the result is non-zero, calls call_d5642_with_100.
 *   No memory writes or register manipulations are visible in the pseudocode itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_five_unnamed_functions(void)

{
  int iVar1;
  
  clear_flag_4_and_call_helper();
  FUN_000e0842();
  check_two_flags_and_return_shifted_value();
  iVar1 = clear_bit7_and_call_helper();
  if (iVar1 != 0) {
    call_d5642_with_100();
  }
  return;
}
