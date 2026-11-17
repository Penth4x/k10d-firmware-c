/* @k10d write_masked_value_to_mmio_10452152 @ 0x10452152
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 16 bits of param_2 masked with 0x9800 to the MMIO address 0x4000c410.
 * summary:
 *   The function performs a single 16-bit store to the memory-mapped I/O location
 *   0x4000c410. It masks the input parameter param_2 with 0x9800 before writing,
 *   effectively preserving only bits 11, 12, and 15. No other side effects or kernel calls
 *   are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10452152(uint32_t param_1,ushort param_2)

{
  _DAT_4000c410 = param_2 & 0x9800;
  return;
}
