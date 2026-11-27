/* @k10d call_helper_with_offset_0x14_104400ca @ 0x104400ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x14 of param_1 to a single helper function.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that 32-bit value as the sole
 *   argument to set_bit_in_pointer_target. It performs no other operations and returns
 *   void. The role of the callee and the meaning of the offset are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x14_104400ca(int param_1, uint32_t param_2)
{
  set_bit_in_pointer_target(*(uint32_t *)(param_1 + 0x14), (uint32_t)param_2);
  return;
}
