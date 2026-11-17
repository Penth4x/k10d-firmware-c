/* @k10d check_status_bit_0x800 @ 0x10440548
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 0x800 is set in the status word at offset 0x20 of the provided
 *   object.
 * summary:
 *   The function dereferences the pointer at offset 0x20 of param_1 to access a 16-bit
 *   status word. It performs a bitwise AND with 0x800 to test a specific flag. The result
 *   is returned as a boolean. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_bit_0x800(int param_1)

{
  return (**(ushort **)(param_1 + 0x20) & 0x800) != 0;
}
