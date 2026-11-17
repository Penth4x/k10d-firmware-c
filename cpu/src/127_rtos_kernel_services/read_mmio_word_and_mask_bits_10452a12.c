/* @k10d read_mmio_word_and_mask_bits_10452a12 @ 0x10452a12
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from MMIO address 0x4005000a and returns it masked with 0x8800.
 * summary:
 *   The function performs a single memory-mapped I/O read from 0x4005000a and applies a
 *   bitmask of 0x8800 to the result. It has no callees and no side effects other than the
 *   MMIO read. The specific role of the register at 0x4005000a is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_and_mask_bits_10452a12(uint32_t param_x0)

{
  return _DAT_4005000a & 0x8800;
}
