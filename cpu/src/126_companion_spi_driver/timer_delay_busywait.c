/* @k10d timer_delay_busywait @ 0x1043c7b8
 * name: verified (structural evidence: decomp; 0x5c002000-0x5c00203f is a bank of four reload timers (timer class vtable 0x105a05a0))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Blocking delay on a reload timer: writes ctrl|0x1002 and the count, starts the timer,
 *   spins until the underflow bit (ctrl bit 2) sets, then stops it.
 * summary:
 *   VERIFIED: decomp; 0x5c002000-0x5c00203f is a bank of four reload timers (timer class
 *   vtable 0x105a05a0)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void timer_delay_busywait(void *param_1,uint32_t param_2,ushort param_3)

{
  ushort uVar1;
  
  **(ushort **)((int)param_1 + 0x18) = param_3 | 0x1002;
  **(uint32_t **)((int)param_1 + 0x1c) = param_2;
  update_status_word_bits_1043c816(param_1,0,0x1000);
  update_status_word_bits_1043c816(param_1,1,1);
  uVar1 = **(ushort **)((int)param_1 + 0x18);
  while ((uVar1 & 4) == 0) {
    uVar1 = **(ushort **)((int)param_1 + 0x18);
  }
  update_status_word_bits_1043c816(param_1,0,1);
  return;
}
