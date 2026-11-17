/* @k10d imgp_a_start @ 0x10459008
 * name: verified (structural evidence: d313: register write; with the qemu model, completion -> status 0x40060032 bit 0x20 -> vector 35 -> event 0x400001)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Start (bit 14) / stop operation engine A of the image processor (control 0x40060080).
 * summary:
 *   VERIFIED: d313: register write; with the qemu model, completion -> status 0x40060032
 *   bit 0x20 -> vector 35 -> event 0x400001
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_start(uint32_t param_1,int param_2)

{
  _DAT_40060080 = _DAT_40060080 & 0x7ff;
  if (param_2 != 0) {
    _DAT_40060080 = _DAT_40060080 | 0x4000;
  }
  return;
}
