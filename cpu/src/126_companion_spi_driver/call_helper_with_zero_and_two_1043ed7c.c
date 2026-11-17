/* @k10d call_helper_with_zero_and_two_1043ed7c @ 0x1043ed7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls update_flag_bits_in_word with param_1, 0, and 2 as arguments.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   update_flag_bits_in_word along with the constants 0 and 2. It has no other logic or
 *   side effects. The specific role of update_flag_bits_in_word is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_two_1043ed7c(void *param_1)

{
  update_flag_bits_in_word(param_1,0,2);
  return;
}
