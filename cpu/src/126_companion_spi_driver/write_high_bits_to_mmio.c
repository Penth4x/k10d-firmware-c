/* @k10d write_high_bits_to_mmio @ 0x10445722
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the upper two bits of a 16-bit value to a memory-mapped I/O location.
 * summary:
 *   The function masks param_2 with 0xc000 to extract bits 14 and 15, then stores the
 *   result to the global DAT_400403d0. No other operations or side effects are present. The
 *   role of DAT_400403d0 is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_high_bits_to_mmio(uint32_t param_1,ushort param_2)

{
  _DAT_400403d0 = param_2 & 0xc000;
  return;
}
