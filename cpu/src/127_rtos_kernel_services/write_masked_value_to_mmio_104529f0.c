/* @k10d write_masked_value_to_mmio_104529f0 @ 0x104529f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 16-bit value to the MMIO address 0x40050008.
 * summary:
 *   The function takes a 16-bit parameter, masks it with 0x8800, and stores the result to
 *   the global address 0x40050008. It has no callees and performs a single memory write.
 *   The specific role of the register at 0x40050008 is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_104529f0(uint32_t param_1,ushort param_2)

{
  _DAT_40050008 = param_2 & 0x8800;
  return;
}
