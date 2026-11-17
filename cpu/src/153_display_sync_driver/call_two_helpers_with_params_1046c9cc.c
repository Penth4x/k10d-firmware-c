/* @k10d call_two_helpers_with_params_1046c9cc @ 0x1046c9cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially, passing param_1 and param_2 along with a
 *   zero-initialized local.
 * summary:
 *   The function initializes a local variable to 0 and passes its address as the second
 *   argument to convert_time_to_ticks. It then calls call_helper_with_two_word_struct with
 *   the original param_1 and param_2. No other operations or side effects are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_params_1046c9cc(uint32_t param_1,ushort *param_2)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  convert_time_to_ticks(param_1,&uStack_c,param_2);
  call_helper_with_two_word_struct(param_1,param_2);
  return;
}
