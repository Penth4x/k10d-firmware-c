/* @k10d module_rd_byte0_nib @ 0x1044beb6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_low_nibble)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the lower 4 bits of the byte pointed to by the input pointer.
 * summary:
 *   The function dereferences the input pointer and masks the result with 0xf to extract
 *   the low nibble. It has no callees and performs no side effects. The specific meaning of
 *   the byte is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte module_rd_byte0_nib(byte *param_1)

{
  return *param_1 & 0xf;
}
