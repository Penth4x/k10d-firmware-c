/* @k10d cpucom_poll_on_irq15 @ 0x10467210
 * name: verified (structural evidence: d313: vtable 0x105a7ea0 IRQ interface; raised between transfers it is ignored (branch at 0x10467228 taken 4/4))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Interrupt source 0xf (vector 31) handler of the CPUCOM poll object: posts the poll flag
 *   only while a transfer is active.
 * summary:
 *   VERIFIED: d313: vtable 0x105a7ea0 IRQ interface; raised between transfers it is ignored
 *   (branch at 0x10467228 taken 4/4)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_poll_on_irq15(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0xf) && (iVar1 = cpucom_request_line_asserted(*(int *)(param_1 + 0x34)), iVar1 != 0)) {
    set_flag_at_offset_0x28_10467264(param_1,0);
  }
  return 0;
}
