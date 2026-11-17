/* @k10d imgp_c_start @ 0x10451c3a
 * name: verified (structural evidence: d313: register write; 0x104fe976 enables completion bit 0x08 before calling it)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Start (bit 14) / stop operation engine C of the image processor (control 0x400600c0).
 * summary:
 *   VERIFIED: d313: register write; 0x104fe976 enables completion bit 0x08 before calling
 *   it
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_c_start(uint32_t param_1,int param_2)

{
  _DAT_400600c0 = _DAT_400600c0 & 199;
  if (param_2 != 0) {
    _DAT_400600c0 = _DAT_400600c0 | 0x4000;
  }
  return;
}
