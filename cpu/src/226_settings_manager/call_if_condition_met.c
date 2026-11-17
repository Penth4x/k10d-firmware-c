/* @k10d call_if_condition_met @ 0x104bf69c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a handler with two arguments only if a status check function returns non-zero.
 * summary:
 *   Invokes invoke_virtual_method_on_object_104bf634 to test a condition. If the result is
 *   non-zero, it calls invoke_virtual_method_and_check_flag passing the original two
 *   parameters. The function acts as a guarded wrapper or conditional dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_if_condition_met(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = invoke_virtual_method_on_object_104bf634(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 != 0) {
    invoke_virtual_method_and_check_flag(param_1,param_2);
  }
  return;
}
