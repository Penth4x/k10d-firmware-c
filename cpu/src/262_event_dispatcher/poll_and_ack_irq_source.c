/* @k10d poll_and_ack_irq_source @ 0x104faef8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Checks an IRQ source status, acknowledges it if set, and triggers a follow-up handler.
 * summary:
 *   Reads a status flag via check_bit_15_of_dat_400e0016 from a pointer stored at offset
 *   0x108 of the input object. If the flag is non-zero, it calls set_dat_400e0016_to_8000
 *   to acknowledge/clear the source, then checks a second condition via
 *   test_bit15_of_dat_400e0014. If that second check passes, it invokes event_dispatcher
 *   with the object and constants -0x7fffffea (0x2) and 1. Returns 0 if no action was
 *   taken, or the result of event_dispatcher otherwise. The caller is a hardware IRQ source
 *   demultiplexer, suggesting this handles a specific interrupt source's status and
 *   dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_and_ack_irq_source(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_bit_15_of_dat_400e0016(*(uint32_t *)((int)param_1 + 0x108));
  uVar2 = 0;
  if (iVar1 != 0) {
    set_dat_400e0016_to_8000(*(uint32_t *)((int)param_1 + 0x108));
    iVar1 = test_bit15_of_dat_400e0014(*(uint32_t *)((int)param_1 + 0x108));
    if (iVar1 != 0) {
      uVar2 = event_dispatcher(param_1,-0x7fffffea,1);
    }
  }
  return uVar2;
}
