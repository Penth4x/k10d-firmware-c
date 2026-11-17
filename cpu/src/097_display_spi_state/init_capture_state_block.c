/* @k10d init_capture_state_block @ 0x1042067e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Zeros a 10-byte region in a state struct and configures associated timer/flag fields
 *   based on a mode flag.
 * summary:
 *   The function clears bytes at offsets 0xa2-0xab of the object pointed to by param_1. It
 *   then calls set_irq_enable_bit and set_irq_mask_by_channel with specific negative
 *   constants and values (0x9800, 0x10, 0x405) using a pointer from offset 0x24, likely
 *   setting up timers or flags. It invokes two unknown functions at 0x104547c2 and
 *   0x104548be with pointers from offsets 0xec/0xf0 and flags from param_2/param_3.
 *   Finally, it calls reset_object_subsystem_handles with a value of 0x29 or 0x21 depending
 *   on the flag at param_2+0x5e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_capture_state_block(void *param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  *(uint8_t *)((int)param_1 + 0xa2) = 0;
  *(uint8_t *)((int)param_1 + 0xa3) = 0;
  *(uint8_t *)((int)param_1 + 0xa4) = 0;
  *(uint8_t *)((int)param_1 + 0xa5) = 0;
  *(uint8_t *)((int)param_1 + 0xa6) = 0;
  *(uint8_t *)((int)param_1 + 0xa7) = 0;
  *(uint8_t *)((int)param_1 + 0xa8) = 0;
  *(uint8_t *)((int)param_1 + 0xa9) = 0;
  *(uint8_t *)((int)param_1 + 0xaa) = 0;
  *(uint8_t *)((int)param_1 + 0xab) = 0;
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffffd,0x9800);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffffc,0x9800);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffffb,0x9800);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffffa,0x9800);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff5,0x10);
  set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff4,0x10);
  if (*(char *)(param_2 + 0x5e) == '\0') {
    set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffff8,0x405);
    set_irq_mask_by_channel(*(int *)((int)param_1 + 0x24),-0x7ffffff7,0x405);
  }
  else {
    set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff8,0x405);
    set_irq_enable_bit(*(int *)((int)param_1 + 0x24),-0x7ffffff7,0x405);
  }
  (*(code *)0x104547c2/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),*(uint8_t *)(param_2 + 0x5e));
  (*(code *)0x104547c2/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),*(uint8_t *)(param_2 + 0x5e));
  (*(code *)0x104548be/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),*(uint8_t *)((int)param_3 + 3));
  (*(code *)0x104548be/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),*(uint8_t *)((int)param_3 + 3));
  uVar1 = 0x29;
  if (*(char *)(param_2 + 0x5e) == '\0') {
    uVar1 = 0x21;
  }
  reset_object_subsystem_handles(*(uint32_t *)((int)param_1 + 0x28),uVar1);
  return;
}
