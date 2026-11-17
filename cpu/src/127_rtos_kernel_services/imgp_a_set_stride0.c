/* @k10d imgp_a_set_stride0 @ 0x10459146
 * name: verified (structural evidence: d313: register write; multiplied by y in the address computation of 0x104fe398)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set stride 0 (0x4006008c, 16-byte aligned).
 * summary:
 *   VERIFIED: d313: register write; multiplied by y in the address computation of
 *   0x104fe398
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_stride0(uint32_t param_1,ushort param_2)

{
  _DAT_4006008c = param_2 & 0x1ff0;
  return;
}
