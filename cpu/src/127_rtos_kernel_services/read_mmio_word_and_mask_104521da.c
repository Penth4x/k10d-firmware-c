/* @k10d read_mmio_word_and_mask_104521da @ 0x104521da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from MMIO address 0x4000c412 and returns it masked with 0x9800.
 * summary:
 *   The function performs a single memory-mapped I/O read from 0x4000c412 and applies a
 *   bitmask of 0x9800 to the result. It has no callees and no side effects other than the
 *   MMIO read. The specific hardware register at 0x4000c412 is not identified in the
 *   project brief, so its role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_and_mask_104521da(uint32_t param_x0)

{
  return _DAT_4000c412 & 0x9800;
}
