/* @k10d call_helper_with_0xc000_args @ 0x1043ed26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1 and the constant 0xc000 twice.
 * summary:
 *   The function is a thin wrapper that forwards its first argument to
 *   update_flag_bits_in_word along with two identical 0xc000 constants. No other
 *   operations, globals, or side effects are visible in the pseudocode. The role of the
 *   callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xc000_args(void *param_1)

{
  update_flag_bits_in_word(param_1,0xc000,0xc000);
  return;
}
