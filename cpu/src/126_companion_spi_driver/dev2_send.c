/* @k10d dev2_send @ 0x1043fcd4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_byte_at_offset_0x34)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the memory location at offset 0x34 of the object pointed
 *   to by the first argument.
 * summary:
 *   The function performs a single 8-bit store to param_1 + 0x34 using param_2. No other
 *   memory accesses, calculations, or function calls are present. The role of the object
 *   and the specific meaning of the byte at offset 0x34 cannot be determined from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dev2_send(int param_1,uint8_t param_2)

{
  **(uint8_t **)(param_1 + 0x34) = param_2;
  return;
}
