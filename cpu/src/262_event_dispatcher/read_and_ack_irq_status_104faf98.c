/* @k10d read_and_ack_irq_status_104faf98 @ 0x104faf98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_and_ack_irq_status_104faf98(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = read_mmio_word_and_mask_bits_10452a12(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_mmio_10452a24(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_word_and_mask_bits_10452a00(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffe8,uVar1);
  }
  return uVar3;
}
