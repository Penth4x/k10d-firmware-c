/* @k10d write_low_byte_to_40100e00 @ 0x1044ef22
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower byte of param_2 to memory location 0x40100e00 while preserving the
 *   upper byte.
 * summary:
 *   The function performs a read-modify-write operation on the global variable
 *   _DAT_40100e00. It masks the existing value with 0x8000 to keep the upper byte intact
 *   and ORs in the 16-bit value of param_2. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_40100e00(uint32_t param_1,ushort param_2)

{
  _DAT_40100e00 = _DAT_40100e00 & 0x8000 | param_2;
  return;
}
