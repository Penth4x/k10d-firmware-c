/* @k10d write_masked_value_to_dat_4000c510 @ 0x10452174
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Stores the lower 16 bits of param_2 masked with 0x9800 into global DAT_4000c510.
 * summary:
 *   The function performs a single store operation, writing (param_2 & 0x9800) to the
 *   global variable DAT_4000c510. It has no callees and no other side effects. The role of
 *   DAT_4000c510 is not determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_4000c510(uint32_t param_1,ushort param_2)

{
  _DAT_4000c510 = param_2 & 0x9800;
  return;
}
