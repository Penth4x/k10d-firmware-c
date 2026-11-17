/* @k10d imgp_b_start @ 0x104581ec
 * name: verified (structural evidence: d313: register write; 0x104fe72c enables completion bit 0x04 before calling it)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Start (bit 14) / stop operation engine B of the image processor (control 0x40060100).
 * summary:
 *   VERIFIED: d313: register write; 0x104fe72c enables completion bit 0x04 before calling
 *   it
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_start(uint32_t param_1,int param_2)

{
  _DAT_40060100 = _DAT_40060100 & 0x1f;
  if (param_2 != 0) {
    _DAT_40060100 = _DAT_40060100 | 0x4000;
  }
  return;
}
