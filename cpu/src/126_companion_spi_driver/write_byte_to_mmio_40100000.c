/* @k10d write_byte_to_mmio_40100000 @ 0x1044e20c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes 0x40 or 0x0 to the memory-mapped location 0x40100000 based on param_2.
 * summary:
 *   The function unconditionally writes 0x40 to the global DAT_40100000 (address
 *   0x40100000). If param_2 is zero, it overwrites that value with 0. No other side effects
 *   or callees are present. The specific hardware role of 0x40100000 is not defined in the
 *   project brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_byte_to_mmio_40100000(uint32_t param_1,int param_2)

{
  _DAT_40100000 = 0x40;
  if (param_2 == 0) {
    _DAT_40100000 = 0;
  }
  return;
}
