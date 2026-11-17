/* @k10d imgp_a_set_size1 @ 0x104591ac
 * name: verified (structural evidence: d313: register write; boot values 0x1e0/0xf0 (heights))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the 12-bit size field 0x40060092.
 * summary:
 *   VERIFIED: d313: register write; boot values 0x1e0/0xf0 (heights)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_size1(uint32_t param_1,ushort param_2)

{
  _DAT_40060092 = param_2 & 0xfff;
  return;
}
