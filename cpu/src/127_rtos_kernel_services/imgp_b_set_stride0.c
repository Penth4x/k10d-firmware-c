/* @k10d imgp_b_set_stride0 @ 0x104582ae
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set stride 0x4006010c (16-byte aligned).
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_stride0(uint32_t param_1,ushort param_2)

{
  _DAT_4006010c = param_2 & 0x1ff0;
  return;
}
