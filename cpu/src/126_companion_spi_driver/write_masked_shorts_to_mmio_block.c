/* @k10d write_masked_shorts_to_mmio_block @ 0x1044edf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes 16 masked 16-bit values from two input arrays into a contiguous MMIO region at
 *   0x40100d02.
 * summary:
 *   The function takes two arrays of 8 unsigned shorts (param_2 and param_3) and writes
 *   each element, masked with 0x1fe, to consecutive 16-bit offsets starting at 0x40100d02.
 *   The target address 0x40100d02 is not listed in the project brief's verified memory
 *   regions, so the specific hardware block is unknown. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_shorts_to_mmio_block(uint32_t param_1,ushort *param_2,ushort *param_3)

{
  _DAT_40100d02 = *param_2 & 0x1fe;
  _DAT_40100d04 = param_2[1] & 0x1fe;
  _DAT_40100d06 = param_2[2] & 0x1fe;
  _DAT_40100d08 = param_2[3] & 0x1fe;
  _DAT_40100d0a = param_2[4] & 0x1fe;
  _DAT_40100d0c = param_2[5] & 0x1fe;
  _DAT_40100d0e = param_2[6] & 0x1fe;
  _DAT_40100d10 = param_2[7] & 0x1fe;
  _DAT_40100d12 = *param_3 & 0x1fe;
  _DAT_40100d14 = param_3[1] & 0x1fe;
  _DAT_40100d16 = param_3[2] & 0x1fe;
  _DAT_40100d18 = param_3[3] & 0x1fe;
  _DAT_40100d1a = param_3[4] & 0x1fe;
  _DAT_40100d1c = param_3[5] & 0x1fe;
  _DAT_40100d1e = param_3[6] & 0x1fe;
  _DAT_40100d20 = param_3[7] & 0x1fe;
  return;
}
