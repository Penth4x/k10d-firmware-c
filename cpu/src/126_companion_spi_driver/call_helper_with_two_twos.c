/* @k10d call_helper_with_two_twos @ 0x1043ed88
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its single argument to update_flag_bits_in_word with two constant arguments of
 *   2.
 * summary:
 *   A one-line wrapper that calls update_flag_bits_in_word(param_1, 2, 2) and returns. No
 *   local state, no side effects beyond the callee. The role of update_flag_bits_in_word is
 *   unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_twos(void *param_1)

{
  update_flag_bits_in_word(param_1,2,2);
  return;
}
