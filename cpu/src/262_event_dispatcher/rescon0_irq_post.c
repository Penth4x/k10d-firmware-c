/* @k10d rescon0_irq_post @ 0x104fad62
 * name: verified (structural evidence: d313: decompile; dispatcher 0x104f94a0 case 0x17; old name read_and_dispatch_timer_event was wrong)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Interrupt source 0x17 (vector 39) body: read and clear resolution converter 0 status,
 *   dispatch hardware event 0x80000011.
 * summary:
 *   VERIFIED: d313: decompile; dispatcher 0x104f94a0 case 0x17; old name
 *   read_and_dispatch_timer_event was wrong
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t rescon0_irq_post(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = rescon0_irq_status(*(uint32_t *)((int)param_1 + 0x108));
  rescon0_irq_clear(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = rescon0_irq_enable(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffef,uVar1);
  }
  return uVar3;
}
