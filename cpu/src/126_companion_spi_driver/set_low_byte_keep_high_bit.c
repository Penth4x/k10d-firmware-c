/* @k10d set_low_byte_keep_high_bit @ 0x1044e278
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the low 15 bits of the 16-bit register at 0x40100002 while
 *   preserving bit 15.
 * summary:
 *   The function performs a read-modify-write on the 16-bit memory-mapped location
 *   0x40100002. It masks out the lower 15 bits and ORs in the value of param_2, leaving bit
 *   15 (0x8000) unchanged. The first parameter is unused. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_low_byte_keep_high_bit(uint32_t param_1,ushort param_2)

{
  _DAT_40100002 = _DAT_40100002 & 0x8000 | param_2;
  return;
}
