/* @k10d write_masked_value_to_mmio_104525d2 @ 0x104525d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked subset of param_2 into the MMIO byte at 0x40030402.
 * summary:
 *   The function takes the second argument, masks it with 0xbc (bits 2, 3, and 6), shifts
 *   the result left by 8, and stores it into the global DAT_40030402. It does not call any
 *   other functions. The target address 0x40030402 is not listed in the verified memory
 *   regions of the project brief, so its specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_104525d2(uint32_t param_1,ushort param_2)

{
  _DAT_40030402 = (param_2 & 0xbc) << 8;
  return;
}
