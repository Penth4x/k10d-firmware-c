/* @k10d call_helper_with_field_0x18 @ 0x1044140c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x18 of the object pointed to by param_1 to a single
 *   callee.
 * summary:
 *   The function dereferences param_1, reads the word at offset 0x18, and forwards it as
 *   the sole argument to set_bit_in_pointer_target. No other operations, side effects, or
 *   state changes are visible in the pseudocode. The role of the callee and the object
 *   layout are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_field_0x18(int param_1, uint32_t param_2)
{
  set_bit_in_pointer_target(*(uint32_t *)(param_1 + 0x18), (uint32_t)param_2);
  return;
}
