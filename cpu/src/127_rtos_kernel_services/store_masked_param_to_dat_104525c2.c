/* @k10d store_masked_param_to_dat_104525c2 @ 0x104525c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the upper 5 bits of param_2 to global DAT_40030ff6.
 * summary:
 *   The function masks the second argument with 0xe000 and stores the result in the global
 *   variable DAT_40030ff6. It does not call any other functions and has no other side
 *   effects. The role of DAT_40030ff6 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_masked_param_to_dat_104525c2(uint32_t param_1,ushort param_2)

{
  _DAT_40030ff6 = param_2 & 0xe000;
  return;
}
