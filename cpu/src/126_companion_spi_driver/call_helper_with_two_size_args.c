/* @k10d call_helper_with_two_size_args @ 0x1043ed6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the input pointer and two 0x1000 constants.
 * summary:
 *   The function takes one pointer argument and forwards it to update_flag_bits_in_word
 *   along with two identical 0x1000 (4096) constants. No other operations, loops, or side
 *   effects are visible in this function itself. The role of the callee is unknown, so the
 *   camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_size_args(void *param_1)

{
  update_flag_bits_in_word(param_1,0x1000,0x1000);
  return;
}
