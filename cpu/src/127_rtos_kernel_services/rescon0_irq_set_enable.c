/* @k10d rescon0_irq_set_enable @ 0x1045265a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sets the resolution converter 0 interrupt enable bits in two MMIO registers based on
 *   param_2.
 * summary:
 *   Writes bit 0x8000 of param_2 to _DAT_40021ffc and bit 8 of param_2 to _DAT_40020010.
 *   This is the write counterpart to the verified rescon0_irq_enable function, which reads
 *   these same two registers. The function takes a mask parameter and selectively enables
 *   or disables the corresponding interrupt bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rescon0_irq_set_enable(uint32_t param_1,uint param_2)

{
  if ((param_2 & 0x8000) == 0) {
    _DAT_40021ffc = 0;
  }
  else {
    _DAT_40021ffc = 0x8000;
  }
  if ((param_2 & 8) == 0) {
    _DAT_40020010 = 0;
  }
  else {
    _DAT_40020010 = 8;
  }
  return;
}
