/* @k10d write_low_nibble_to_mmio @ 0x10445442
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower 4 bits of param_2 to the MMIO address 0x40040318.
 * summary:
 *   The function masks the input parameter param_2 with 0xff0 and stores the result in the
 *   global variable _DAT_40040318. The address 0x40040318 is not listed in the Tier 1
 *   memory regions of the project brief, so its specific hardware role is unknown. No
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_nibble_to_mmio(uint32_t param_1,ushort param_2)

{
  _DAT_40040318 = param_2 & 0xff0;
  return;
}
