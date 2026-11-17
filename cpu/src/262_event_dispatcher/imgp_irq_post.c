/* @k10d imgp_irq_post @ 0x104fa928
 * name: verified (structural evidence: d313: decompile; dispatcher 0x104f94a0 case 0x13; with the qemu model each engine completion arrives here; old name clock_tick_post_b was wrong)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Interrupt source 0x13 (vector 35) body: read and clear 0x40060032 masked by 0x40060030
 *   and dispatch hardware event 0x80000002 with the bits.
 * summary:
 *   VERIFIED: d313: decompile; dispatcher 0x104f94a0 case 0x13; with the qemu model each
 *   engine completion arrives here; old name clock_tick_post_b was wrong
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t imgp_irq_post(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = imgp_irq_status(*(uint32_t *)((int)param_1 + 0x108));
  imgp_irq_clear(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = imgp_irq_enable(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7ffffffe,uVar1);
  }
  return uVar3;
}
