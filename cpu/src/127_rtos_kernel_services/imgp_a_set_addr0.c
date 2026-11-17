/* @k10d imgp_a_set_addr0 @ 0x104591ce
 * name: verified (structural evidence: d313: register write; 0x104fe398 passes base + y*stride + x)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set rectangle address 0 (0x40060094, 30-bit).
 * summary:
 *   VERIFIED: d313: register write; 0x104fe398 passes base + y*stride + x
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_addr0(uint32_t param_1,uint param_2)

{
  _DAT_40060094 = param_2 & 0x3fffffff;
  return;
}
