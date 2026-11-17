/* @k10d call_helper_with_192 @ 0x1043eeac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to update_flag_bits_in_word with a third constant argument
 *   of 0xc0.
 * summary:
 *   This function is a thin wrapper that calls update_flag_bits_in_word, passing param_1
 *   and param_2 unchanged and supplying the constant 0xc0 as the third parameter. No other
 *   operations, side effects, or state modifications are visible in the pseudocode. The
 *   role of update_flag_bits_in_word is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_192(void *param_1,ushort param_2)

{
  update_flag_bits_in_word(param_1,param_2,0xc0);
  return;
}
