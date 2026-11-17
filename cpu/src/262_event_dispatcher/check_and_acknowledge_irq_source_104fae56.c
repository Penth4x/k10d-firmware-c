/* @k10d check_and_acknowledge_irq_source_104fae56 @ 0x104fae56
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Checks a status flag at offset 0x108, clears it if set, and triggers a follow-up
 *   handler.
 * summary:
 *   The function reads a value from param_1+0x108 via check_bit15_of_dat_400d0006. If non-
 *   zero, it calls write_value_to_dat_400d0006 (likely an acknowledge/clear operation) and
 *   then check_bit15_of_dat_400d0004. If the second check is also non-zero, it calls
 *   event_dispatcher with arguments (param_1, 0x80000004, 1). The caller is an IRQ
 *   demultiplexer, suggesting this handles a specific interrupt source's status and
 *   dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_acknowledge_irq_source_104fae56(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_bit15_of_dat_400d0006(*(uint32_t *)((int)param_1 + 0x108));
  uVar2 = 0;
  if (iVar1 != 0) {
    write_value_to_dat_400d0006(*(uint32_t *)((int)param_1 + 0x108));
    iVar1 = check_bit15_of_dat_400d0004(*(uint32_t *)((int)param_1 + 0x108));
    if (iVar1 != 0) {
      uVar2 = event_dispatcher(param_1,-0x7fffffec,1);
    }
  }
  return uVar2;
}
