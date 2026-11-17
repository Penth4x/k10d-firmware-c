/* @k10d call_init_then_dispatch_two_params @ 0x10475a1c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an init helper, then invokes a function pointer with a field from param_1 and a
 *   result passed to a second helper.
 * summary:
 *   The function first calls format_int_as_three_digit_string with no arguments. It then
 *   dereferences a function pointer at 0x10459360, passing the value at offset 4 of
 *   param_1, and stores the result in a local variable. Finally, it calls
 *   copy_null_terminated_string with the value at offset 3 of param_2 and the result from
 *   the previous call. The specific roles of the callees and the data structures are not
 *   clear from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_then_dispatch_two_params(int param_1,int param_2)

{
  void *pvVar1;
  
  format_int_as_three_digit_string(__frv_reg_unset(4),(char *)__frv_reg_unset(5),__frv_reg_unset(6));
  pvVar1 = (void *)(*(code *)0x10459360/*ROM*/)(*(uint32_t *)(param_1 + 4));
  copy_null_terminated_string((void *)(param_2 + 3),pvVar1);
  return;
}
