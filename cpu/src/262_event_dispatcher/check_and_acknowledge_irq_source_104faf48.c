/* @k10d check_and_acknowledge_irq_source_104faf48 @ 0x104faf48
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Checks an IRQ status flag, acknowledges it if set, and conditionally triggers a follow-
 *   up handler.
 * summary:
 *   Reads a status word from an object field at offset 0x108 via check_bit7_of_0x4007000c.
 *   If non-zero, it calls set_bit7_of_dat_4007000c to clear/acknowledge the status, then
 *   re-checks via check_bit15_of_0x4007000c. If still active, it invokes event_dispatcher
 *   with a large negative constant (-0x7fffffe9, likely a timeout or ID) and a flag of 1.
 *   Returns 0 or the result of the follow-up call. The caller is a hardware IRQ
 *   demultiplexer, suggesting this handles a specific interrupt source's status and
 *   acknowledgment.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_acknowledge_irq_source_104faf48(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_bit7_of_0x4007000c(*(uint32_t *)((int)param_1 + 0x108));
  uVar2 = 0;
  if (iVar1 != 0) {
    set_bit7_of_dat_4007000c(*(uint32_t *)((int)param_1 + 0x108));
    iVar1 = check_bit15_of_0x4007000c(*(uint32_t *)((int)param_1 + 0x108));
    if (iVar1 != 0) {
      uVar2 = event_dispatcher(param_1,-0x7fffffe9,1);
    }
  }
  return uVar2;
}
