/* @k10d read_mmio_word_and_mask_bits_10452a00 @ 0x10452a00
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from MMIO address 0x40050008 and returns it masked with 0x8800.
 * summary:
 *   The function performs a single 16-bit read from the memory-mapped I/O address
 *   0x40050008 and applies a bitwise AND with the mask 0x8800. It has no callees and no
 *   side effects other than the MMIO read. The role of the specific bits selected by the
 *   mask is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_and_mask_bits_10452a00(uint32_t unused)

{
  return _DAT_40050008 & 0x8800;
}
