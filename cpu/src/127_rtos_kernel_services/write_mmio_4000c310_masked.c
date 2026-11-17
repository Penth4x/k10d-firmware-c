/* @k10d write_mmio_4000c310_masked @ 0x10452130
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 16 bits of param_2 masked with 0x9800 to the MMIO address 0x4000c310.
 * summary:
 *   The function takes a 16-bit parameter, applies a bitmask (0x9800), and stores the
 *   result to the global DAT_4000c310. The address 0x4000c310 is not listed in the Tier 1
 *   memory map, so its specific hardware role is unknown. It is located in the
 *   rtos_wrappers_and_heap module, but the operation is a direct MMIO write rather than a
 *   kernel call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_mmio_4000c310_masked(uint32_t param_1,ushort param_2)

{
  _DAT_4000c310 = param_2 & 0x9800;
  return;
}
