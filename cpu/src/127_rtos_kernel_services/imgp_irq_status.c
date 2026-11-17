/* @k10d imgp_irq_status @ 0x104520f0
 * name: verified (structural evidence: d313: register read; status is write-1-to-clear (0x10452100))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Read the image processor's interrupt status 0x40060032 (bits 0x04/0x08/0x20 = engine
 *   B/C/A done).
 * summary:
 *   VERIFIED: d313: register read; status is write-1-to-clear (0x10452100)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort imgp_irq_status(uint32_t param_x0)

{
  return _DAT_40060032/*KEYPAD*/ & 0x2c;
}
