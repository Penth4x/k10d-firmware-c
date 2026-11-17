/* @k10d call_single_helper_with_two_args_1039c652 @ 0x1039c652
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to a single callee and returns.
 * summary:
 *   The function takes an undefined4 and a pointer, passes both to
 *   call_helper_and_set_flag_10494b88, and returns void. No local state is modified and no
 *   other operations are performed. The role of call_helper_and_set_flag_10494b88 is
 *   unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_two_args_1039c652(uint32_t param_1,uint32_t *param_2)

{
  call_helper_and_set_flag_10494b88(param_2);
  return;
}
