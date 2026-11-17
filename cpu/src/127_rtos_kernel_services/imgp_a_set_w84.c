/* @k10d imgp_a_set_w84 @ 0x1045911e
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 32-bit parameter at 0x40060084.
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_w84(uint32_t param_1,uint32_t param_2)

{
  _DAT_40060084 = param_2;
  return;
}
