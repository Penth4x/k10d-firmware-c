/* @k10d configure_timer_channels @ 0x104207e6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Configures multiple timer or interrupt channels by writing specific control values to a
 *   shared object.
 * summary:
 *   The function takes a pointer to a control structure and calls two helper functions
 *   (set_irq_enable_bit and set_irq_mask_by_channel) with a value from offset 0x24 of the
 *   structure. It passes various negative constants (likely timer periods or interrupt IDs)
 *   and mode flags (0x405, 0x9800, 0x10) to these helpers. It then invokes two other
 *   functions (0x104547c2 and 0x104548be) on pointers stored at offsets 0xec and 0xf0,
 *   likely to reset and enable specific hardware channels. Finally, it calls
 *   reset_object_subsystem_handles with a value from offset 0x28 and the constant 5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_timer_channels(void *param_1)

{
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff8,0x405);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff7,0x405);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffffd,0x9800);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffffc,0x9800);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffffb,0x9800);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffffa,0x9800);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffff5,0x10);
  set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffff4,0x10);
  (*(code *)0x104547c2/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),0);
  (*(code *)0x104547c2/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),0);
  (*(code *)0x104548be/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),1);
  (*(code *)0x104548be/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),1);
  reset_object_subsystem_handles(*(uint32_t *)((int)param_1 + 0x28),5);
  return;
}
