/* @k10d rescon0_irq_enable @ 0x10452690
 * name: verified (structural evidence: d313: register read)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Read resolution converter 0 interrupt enables (0x40021ffc bit 0x8000 | 0x40020010 bit
 *   8).
 * summary:
 *   VERIFIED: d313: register read
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rescon0_irq_enable(uint32_t param_x0)

{
  return _DAT_40021ffc & 0x8000 | _DAT_40020010 & 8;
}
