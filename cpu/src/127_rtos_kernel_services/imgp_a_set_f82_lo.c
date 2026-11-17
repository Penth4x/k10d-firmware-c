/* @k10d imgp_a_set_f82_lo @ 0x104590ea
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 5-bit field at bits 0-4 of 0x40060082.
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_f82_lo(uint32_t param_1,ushort param_2)

{
  _DAT_40060082 = _DAT_40060082 & 0x1f00 | param_2 & 0x1f;
  return;
}
