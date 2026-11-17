/* @k10d store_masked_param_to_dat_1045258e @ 0x1045258e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the upper 5 bits of param_2 to global DAT_40030ff4.
 * summary:
 *   The function masks the second argument with 0xe000 and stores the result in the global
 *   variable DAT_40030ff4. It ignores the first argument. The role of DAT_40030ff4 is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_masked_param_to_dat_1045258e(uint32_t param_1,ushort param_2)

{
  _DAT_40030ff4 = param_2 & 0xe000;
  return;
}
