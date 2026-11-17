/* @k10d check_and_acknowledge_irq_source_104fac34 @ 0x104fac34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Checks an interrupt status flag, acknowledges it if set, and triggers a follow-up
 *   handler.
 * summary:
 *   Reads a pointer from offset 0x108 of the input object and passes it to
 *   test_bit15_of_dat_400a0032 to check a status condition. If the condition is true, it
 *   calls write_constant_to_mmio to acknowledge the interrupt and
 *   test_bit15_of_dat_400a0030 to re-check or verify the state. If the second check passes,
 *   it calls event_dispatcher with the object and specific constants (-0x7ffffff3, 1) to
 *   process the event. Returns 0 if no action was taken, or the result of the handler
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_acknowledge_irq_source_104fac34(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = test_bit15_of_dat_400a0032(*(uint32_t *)((int)param_1 + 0x108));
  uVar2 = 0;
  if (iVar1 != 0) {
    write_constant_to_mmio(*(uint32_t *)((int)param_1 + 0x108));
    iVar1 = test_bit15_of_dat_400a0030(*(uint32_t *)((int)param_1 + 0x108));
    if (iVar1 != 0) {
      uVar2 = event_dispatcher(param_1,-0x7ffffff3,1);
    }
  }
  return uVar2;
}
