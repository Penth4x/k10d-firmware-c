/* @k10d write_low_sixteen_bits_to_ram_10445760 @ 0x10445760
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores the lower 16 bits of param_2 into the global variable uRam400403d6.
 * summary:
 *   The function masks the 16-bit parameter param_2 with 0x3f3f and writes the result to
 *   the global variable uRam400403d6. It has no callees and performs no other operations.
 *   The role of uRam400403d6 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_low_sixteen_bits_to_ram_10445760(uint32_t param_1,ushort param_2)

{
  uRam400403d6 = param_2 & 0x3f3f;
  return;
}
