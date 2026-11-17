/* @k10d imgp_a_set_w88 @ 0x10459132
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 32-bit parameter at 0x40060088.
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_w88(uint32_t param_1,uint32_t param_2)

{
  _DAT_40060088 = param_2;
  return;
}
