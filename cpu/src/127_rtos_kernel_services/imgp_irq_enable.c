/* @k10d imgp_irq_enable @ 0x104520e0
 * name: verified (structural evidence: d313: register read)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Read the image processor's interrupt enable mask 0x40060030.
 * summary:
 *   VERIFIED: d313: register read
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort imgp_irq_enable(uint32_t param_x0)

{
  return _DAT_40060030/*KEYPAD*/ & 0x2c;
}
