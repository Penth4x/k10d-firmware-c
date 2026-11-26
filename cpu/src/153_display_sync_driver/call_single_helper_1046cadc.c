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
  /* B-3c FIX (d329): thin forwarder — the original (0x1046cadc) just `call`s query_two_word_result
   * WITHOUT setting r4/r5, so query_two_word_result's args (r4=param_1, r5=param_2) FLOW THROUGH from
   * this function's own incoming args. The decompiler dropped them to __frv_reg_unset(4/5) (=0), which
   * passed a NULL param_2 — query_two_word_result then writes *param_2 to address 0. Forward the real
   * incoming args (param_x0=r4, param_x1=r5). */
  query_two_word_result(param_x0, (uint16_t *)param_x1);
  return;
}
