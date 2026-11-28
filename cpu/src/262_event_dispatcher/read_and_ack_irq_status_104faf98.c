/* @k10d read_and_ack_irq_status_104faf98 @ 0x104faf98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_and_ack_irq_status_104faf98(void *irq_ctx)

{
  uint irq_status_raw;
  uint irq_status_mask;
  uint32_t dispatch_result;

  irq_status_raw = read_mmio_word_and_mask_bits_10452a12(*(uint32_t *)((int)irq_ctx + 0x108));
  write_masked_value_to_mmio_10452a24(*(uint32_t *)((int)irq_ctx + 0x108), irq_status_raw);
  irq_status_mask = read_mmio_word_and_mask_bits_10452a00(*(uint32_t *)((int)irq_ctx + 0x108));
  irq_status_raw = irq_status_raw & irq_status_mask & 0xffff;
  if (irq_status_raw == 0) {
    dispatch_result = 0;
  }
  else {
    dispatch_result = event_dispatcher(irq_ctx, -0x7fffffe8, irq_status_raw);
  }
  return dispatch_result;
}
