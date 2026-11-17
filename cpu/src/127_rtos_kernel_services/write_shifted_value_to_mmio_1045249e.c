/* @k10d write_shifted_value_to_mmio_1045249e @ 0x1045249e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked and left-shifted portion of param_2 to the MMIO address 0x40008006.
 * summary:
 *   The function takes the upper 12 bits of the 16-bit parameter param_2 (mask 0xfc),
 *   shifts them left by 8 bits, and stores the result in the global variable _DAT_40008006.
 *   This address falls within the 0x40000000-0x4000ffff range, which is not explicitly
 *   listed in the Tier 1 memory map but is likely an MMIO register. The function has no
 *   callees and performs a single store operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_shifted_value_to_mmio_1045249e(uint32_t param_1,ushort param_2)

{
  _DAT_40008006 = (param_2 & 0xfc) << 8;
  return;
}
