/* @k10d read_mmio_status_bits_10452162 @ 0x10452162
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit MMIO register and returns a masked subset of its bits.
 * summary:
 *   The function loads the value from global DAT_4000c410 and applies a bitmask of 0x9800
 *   (bits 11, 12, and 15). It returns the result as a 16-bit value. The specific role of
 *   DAT_4000c410 is not determinable from the provided context, and no camera-specific
 *   subsystem is clearly indicated by the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_status_bits_10452162(uint32_t param_x0)

{
  return _DAT_4000c410 & 0x9800;
}
