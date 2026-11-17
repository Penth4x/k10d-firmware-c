/* @k10d rescon1_irq_enable_set @ 0x104526ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sets or clears resolution converter 1 interrupt enable bits based on param_2 flags.
 * summary:
 *   Writes 0x8000 or 0 to DAT_400f1ffc depending on bit 15 of param_2, and writes 8 or 0 to
 *   DAT_400f0010 depending on bit 3 of param_2. These addresses match the registers read by
 *   the verified rescon1_irq_enable function, indicating this function configures the
 *   interrupt enable state for resolution converter 1. No callees are invoked; the function
 *   performs direct MMIO writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rescon1_irq_enable_set(uint32_t param_1,uint param_2)

{
  if ((param_2 & 0x8000) == 0) {
    _DAT_400f1ffc = 0;
  }
  else {
    _DAT_400f1ffc = 0x8000;
  }
  if ((param_2 & 8) == 0) {
    _DAT_400f0010 = 0;
  }
  else {
    _DAT_400f0010 = 8;
  }
  return;
}
