/* @k10d call_helper_with_constant_twelve @ 0x1043ef2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_flag_bits_in_word, appending the constant 0xc as a
 *   third parameter.
 * summary:
 *   A thin wrapper that takes a pointer and an unsigned short, then calls
 *   update_flag_bits_in_word with those values plus the literal 0xc. No other logic, state
 *   changes, or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_twelve(void *param_1,ushort param_2)

{
  update_flag_bits_in_word(param_1,param_2,0xc);
  return;
}
