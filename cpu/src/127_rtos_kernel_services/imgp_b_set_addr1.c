/* @k10d imgp_b_set_addr1 @ 0x1045828a
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set address 0x40060108 (16-byte aligned).
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_addr1(uint32_t param_1,uint param_2)

{
  _DAT_40060108 = param_2 & 0x3ffffff0;
  return;
}
