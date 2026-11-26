/* @k10d call_helper_if_flag_set_1043ee46 @ 0x1043ee46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function if a specific field in the passed structure is non-zero.
 * summary:
 *   Checks if the integer at offset 0x10 of the object pointed to by param_1 is non-zero.
 *   If it is, it calls set_bit_in_pointered_byte. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_1043ee46(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    set_bit_in_pointered_byte(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  return;
}
