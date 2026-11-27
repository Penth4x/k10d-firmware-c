/* @k10d call_two_helpers_with_params_10485e22 @ 0x10485e22
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the last three arguments to the second one.
 * summary:
 *   The function first calls store_two_word_pair with no arguments. It then calls
 *   iterate_string_calling_helper, forwarding param_3, param_4, and param_5 (cast to a void
 *   pointer). The function returns void and performs no other operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_params_10485e22(uint32_t param_1,uint32_t param_2,char *param_3,uint32_t param_4,
                 ushort param_5)
{
  store_two_word_pair((uint32_t)param_1, (uint32_t)param_2);
  iterate_string_calling_helper(param_3,param_4,(void *)(uint)param_5);
  return;
}
