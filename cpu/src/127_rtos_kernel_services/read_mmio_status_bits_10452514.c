/* @k10d read_mmio_status_bits_10452514 @ 0x10452514
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit MMIO register and returns the value masked to bits 2-7.
 * summary:
 *   The function loads the 16-bit value at address 0x40008006 and applies a 0xfc mask
 *   before returning. The address 0x40008006 is not listed in the verified memory regions
 *   of the project brief, so its specific hardware role is unknown. It is a simple one-
 *   instruction accessor with no side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_status_bits_10452514(uint32_t param_x0)

{
  return _DAT_40008006 & 0xfc;
}
