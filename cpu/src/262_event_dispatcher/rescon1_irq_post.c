/* @k10d rescon1_irq_post @ 0x104fadb4
 * name: verified (structural evidence: d313: decompile; dispatcher case 0x18; with the qemu model each rescon1 completion arrives here)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Interrupt source 0x18 (vector 40) body: read and clear resolution converter 1 status,
 *   dispatch hardware event 0x80000012.
 * summary:
 *   VERIFIED: d313: decompile; dispatcher case 0x18; with the qemu model each rescon1
 *   completion arrives here
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t rescon1_irq_post(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = rescon1_irq_status(*(uint32_t *)((int)param_1 + 0x108));
  rescon1_irq_clear(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = rescon1_irq_enable(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffee,uVar1);
  }
  return uVar3;
}
