/* @k10d call_helper_with_0xc00 @ 0x1043ee9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_flag_bits_in_word, appending a third constant
 *   0xc00.
 * summary:
 *   A thin wrapper that invokes update_flag_bits_in_word with param_1, param_2, and the
 *   fixed value 0xc00 (3072). No other logic, state, or side effects are visible in this
 *   function itself. The caller is apply_range_swap_if_inverted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xc00(void *param_1,ushort param_2)

{
  update_flag_bits_in_word(param_1,param_2,0xc00);
  return;
}
