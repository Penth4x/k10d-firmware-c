/* @k10d write_two_bytes_to_mmio_10445620 @ 0x10445620
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to the memory-mapped address 0x4004039c.
 * summary:
 *   Stores the 16-bit parameter param_2 into the global variable _DAT_4004039c, which
 *   corresponds to the MMIO address 0x4004039c. The function takes no other actions and
 *   returns immediately. The specific hardware register or subsystem controlled by this
 *   address is not identified in the provided brief or pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_10445620(uint32_t param_1,uint16_t param_2)

{
  _DAT_4004039c = param_2;
  return;
}
