/* @k10d call_single_helper_with_two_args_10493df8 @ 0x10493df8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Forwards its first two arguments to a single callee and ignores the remaining three
 *   parameters.
 * summary:
 *   The function takes five parameters but only passes param_1 and param_2 to
 *   copy_four_words_and_call_helper, then returns. The callee's role is unknown, so the
 *   wrapper's behavior is purely mechanical forwarding. No side effects beyond the callee
 *   invocation are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_two_args_10493df8(int *param_1,void *param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5)

{
  copy_four_words_and_call_helper(param_1,param_2);
  return;
}
