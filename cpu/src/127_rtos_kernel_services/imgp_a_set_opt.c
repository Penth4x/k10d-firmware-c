/* @k10d imgp_a_set_opt @ 0x10459216
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set or clear bit 15 of 0x4006009c.
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_opt(uint32_t param_1,int param_2)

{
  _DAT_4006009c = _DAT_4006009c & 0xff;
  if (param_2 != 0) {
    _DAT_4006009c = _DAT_4006009c | 0x8000;
  }
  return;
}
