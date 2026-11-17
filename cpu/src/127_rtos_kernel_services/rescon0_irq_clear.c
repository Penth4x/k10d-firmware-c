/* @k10d rescon0_irq_clear @ 0x10452780
 * name: verified (structural evidence: d313: register write)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Clear resolution converter 0 interrupt status bits (0x40021ffe / 0x4002000e).
 * summary:
 *   VERIFIED: d313: register write
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rescon0_irq_clear(uint32_t param_1,ushort param_2)

{
  _DAT_40021ffe = param_2 & 0x8000;
  _DAT_4002000e = param_2 & 8;
  return;
}
