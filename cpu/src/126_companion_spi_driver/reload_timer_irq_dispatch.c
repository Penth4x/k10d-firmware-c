/* @k10d reload_timer_irq_dispatch @ 0x1043ce50
 * name: verified (structural evidence: decomp + timer driver model validated in the emulator)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Timer interrupt handler: for interrupt 0x25, checks each of the four reload timers at
 *   0x5c002000/10/20/30 for INTE|UF (ctrl&0xc) and posts event 0x2c+channel. These
 *   registers are timers, not display status.
 * summary:
 *   VERIFIED: decomp + timer driver model validated in the emulator
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reload_timer_irq_dispatch(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x25) {
    if ((uRam5c002000 & 0xc) == 0xc) {
      uVar1 = osdc_event_dispatch(param_1,0x2c,0);
    }
    if ((uRam5c002010 & 0xc) == 0xc) {
      uVar1 = osdc_event_dispatch(param_1,0x2d,0);
    }
    if ((uRam5c002020 & 0xc) == 0xc) {
      uVar1 = osdc_event_dispatch(param_1,0x2e,0);
    }
    if ((uRam5c002030 & 0xc) == 0xc) {
      uVar1 = osdc_event_dispatch(param_1,0x2f,0);
    }
  }
  return uVar1;
}
