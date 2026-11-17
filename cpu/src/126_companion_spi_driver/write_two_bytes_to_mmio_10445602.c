/* @k10d write_two_bytes_to_mmio_10445602 @ 0x10445602
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to the memory-mapped address 0x40040396.
 * summary:
 *   Stores the 16-bit parameter param_2 into the global variable _DAT_40040396, which
 *   corresponds to the MMIO address 0x40040396. The function takes an unused 32-bit
 *   parameter param_1. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_10445602(uint32_t param_1,uint16_t param_2)

{
  _DAT_40040396 = param_2;
  return;
}
