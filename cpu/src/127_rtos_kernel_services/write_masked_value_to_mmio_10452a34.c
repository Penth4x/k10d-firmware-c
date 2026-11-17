/* @k10d write_masked_value_to_mmio_10452a34 @ 0x10452a34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 16-bit value to the MMIO location at 0x400403f4.
 * summary:
 *   The function takes param_2, applies a bitmask of 0xb802, and stores the result to the
 *   global address 0x400403f4. It does not call any other functions. The address 0x400403f4
 *   is not listed in the Tier 1 memory regions, so its specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10452a34(uint32_t param_1,ushort param_2)

{
  _DAT_400403f4 = param_2 & 0xb802;
  return;
}
