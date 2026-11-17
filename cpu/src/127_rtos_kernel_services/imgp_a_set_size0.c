/* @k10d imgp_a_set_size0 @ 0x1045918a
 * name: verified (structural evidence: d313: register write; boot values 0x280/0x140 (widths))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 13-bit size field 0x40060090.
 * summary:
 *   VERIFIED: d313: register write; boot values 0x280/0x140 (widths)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_size0(uint32_t param_1,ushort param_2)

{
  _DAT_40060090 = param_2 & 0x1fff;
  return;
}
