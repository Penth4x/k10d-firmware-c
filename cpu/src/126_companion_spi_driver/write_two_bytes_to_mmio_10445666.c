/* @k10d write_two_bytes_to_mmio_10445666 @ 0x10445666
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to the memory-mapped address 0x400403aa.
 * summary:
 *   Stores the 16-bit parameter param_2 into the global variable _DAT_400403aa, which
 *   corresponds to the MMIO address 0x400403aa. The function takes no other actions and
 *   returns immediately. The specific role of this register is not determinable from the
 *   provided pseudocode and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_10445666(uint32_t param_1,uint16_t param_2)

{
  _DAT_400403aa = param_2;
  return;
}
