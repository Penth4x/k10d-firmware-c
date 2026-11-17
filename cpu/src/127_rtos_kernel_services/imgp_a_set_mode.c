/* @k10d imgp_a_set_mode @ 0x10459082
 * name: verified (structural evidence: d313: register write (0x40060080 & 0xc700 | value))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine A: set the operation/mode field (low byte) of control
 *   0x40060080.
 * summary:
 *   VERIFIED: d313: register write (0x40060080 & 0xc700 | value)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_mode(uint32_t param_1,ushort param_2)

{
  _DAT_40060080 = _DAT_40060080 & 0xc700 | param_2;
  return;
}
