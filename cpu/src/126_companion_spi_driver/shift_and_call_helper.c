/* @k10d shift_and_call_helper @ 0x1043d62e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Computes a shifted value from param_2 using a 4-bit mask in param_1 and calls a helper
 *   with it.
 * summary:
 *   Reads a 4-bit field from offset 0x120 of the object pointed to by param_1. Shifts
 *   param_2 left by that amount and masks the result with the 16-bit value at offset 0x124.
 *   Passes the masked result and the 0x124 value to update_flag_bits_in_object. The
 *   callee's role is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void shift_and_call_helper(void *param_1,int param_2)

{
  update_flag_bits_in_object(param_1,(ushort)(param_2 << ((byte)*(uint32_t *)((int)param_1 + 0x120) & 0xf)) &
                       *(ushort *)((int)param_1 + 0x124),*(ushort *)((int)param_1 + 0x124));
  return;
}
