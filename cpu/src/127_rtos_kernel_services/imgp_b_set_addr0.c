/* @k10d imgp_b_set_addr0 @ 0x10458266
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set address 0x40060104 (16-byte aligned).
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_addr0(uint32_t param_1,uint param_2)

{
  _DAT_40060104 = param_2 & 0x3ffffff0;
  return;
}
