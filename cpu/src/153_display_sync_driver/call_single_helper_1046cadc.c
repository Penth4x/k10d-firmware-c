/* @k10d call_single_helper_1046cadc @ 0x1046cadc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function contains no logic of its own; it simply calls query_two_word_result and
 *   returns. The specific behavior is entirely determined by the callee, which is not yet
 *   named or described. It is called from compare_two_memory_blocks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1046cadc(uint32_t param_x0, uint32_t param_x1)

{
  query_two_word_result(__frv_reg_unset(4),(uint16_t *)__frv_reg_unset(5));
  return;
}
