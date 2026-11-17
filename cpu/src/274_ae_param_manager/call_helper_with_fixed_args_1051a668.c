/* @k10d call_helper_with_fixed_args_1051a668 @ 0x1051a668
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Forwards param_2 to a helper with two fixed arguments 0 and 0x15.
 * summary:
 *   Single-statement wrapper that calls write_word_to_dynamic_array with (param_2, 0,
 *   0x15). No local state, no side effects beyond the callee. The role of
 *   write_word_to_dynamic_array is unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1051a668(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,0x15);
  return;
}
