/* @k10d imgp_a_set_f82_hi @ 0x104590b0
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 5-bit field at bits 8-12 of 0x40060082.
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_f82_hi(uint32_t param_1,ushort param_2)

{
  _DAT_40060082 = _DAT_40060082 & 0x1f | (param_2 & 0x1f) << 8;
  return;
}
