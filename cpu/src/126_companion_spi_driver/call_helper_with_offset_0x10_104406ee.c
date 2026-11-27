/* @k10d call_helper_with_offset_0x10_104406ee @ 0x104406ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x10 to a single helper function.
 * summary:
 *   The function dereferences the 4-byte field at offset 0x10 of the object pointed to by
 *   param_1 and passes it as the sole argument to set_bit_in_pointer_target. No other
 *   operations, side effects, or state modifications are visible in the pseudocode. The
 *   role of the callee and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x10_104406ee(int param_1, uint32_t param_2)
{
  set_bit_in_pointer_target(*(uint32_t *)(param_1 + 0x10), (uint32_t)param_2);
  return;
}
