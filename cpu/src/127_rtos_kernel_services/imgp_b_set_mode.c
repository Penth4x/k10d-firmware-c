/* @k10d imgp_b_set_mode @ 0x10458234
 * name: verified (structural evidence: d313: register write (0x40060100 & 0xc000 | value))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set the operation/mode field of control 0x40060100.
 * summary:
 *   VERIFIED: d313: register write (0x40060100 & 0xc000 | value)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_mode(uint32_t param_1,ushort param_2)

{
  _DAT_40060100 = _DAT_40060100 & 0xc000 | param_2;
  return;
}
