/* @k10d call_handler_with_fetched_arg_104b462c @ 0x104b462c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a value from call_two_helpers_and_return_104b3df8 and passes it with param_3 to
 *   a function at 0x104b0416.
 * summary:
 *   The function calls call_two_helpers_and_return_104b3df8 to obtain a value, then invokes
 *   the code pointer at 0x104b0416 with param_3 and the fetched value as arguments. It is
 *   called as virtual method slot 2 of class cls_105b8204. The specific roles of the callee
 *   functions and the target function are not determinable from the provided pseudocode and
 *   brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_with_fetched_arg_104b462c(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = call_two_helpers_and_return_104b3df8();
  (*(code *)0x104b0416/*ROM*/)(param_3,uVar1);
  return;
}
