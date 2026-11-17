/* @k10d imgp_irq_clear @ 0x10452100
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Clear image-processor interrupt status bits (write them back to 0x40060032).
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_irq_clear(uint32_t param_1,ushort param_2)

{
  _DAT_40060032/*KEYPAD*/ = param_2 & 0x2c;
  return;
}
