/* @k10d call_helper_if_flag_set_1043ee88 @ 0x1043ee88
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls set_bit_in_pointered_byte if the integer at offset 0x14 of the object is non-
 *   zero.
 * summary:
 *   Checks the 4-byte field at param_1 + 0x14. If it is non-zero, invokes the single callee
 *   set_bit_in_pointered_byte with no arguments. No other side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_1043ee88(int param_1, uint32_t param_x1)
{
  if (*(int *)(param_1 + 0x14) != 0) {
    set_bit_in_pointered_byte((uint32_t)param_1, (uint32_t)param_x1);
  }
  return;
}
