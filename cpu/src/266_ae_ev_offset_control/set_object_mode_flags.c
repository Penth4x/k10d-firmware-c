/* @k10d set_object_mode_flags @ 0x10505fa4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Sets three flags on an object based on a mode parameter, using different offsets for
 *   each mode.
 * summary:
 *   The function branches on param_2. If zero, it calls set_irq_enable_bit with a specific
 *   constant, sets a flag at offset 0xc via set_flag_bit_in_object_field_10457502, and sets
 *   a flag at offset 0x10 via set_flag_bit_in_word. If non-zero, it calls
 *   set_irq_enable_bit with a different constant, sets a flag at offset 0x14 via
 *   set_flag_bit_in_object_field_10457502, and sets a flag at offset 0x18 via
 *   set_flag_bit_in_word. The callees appear to be generic flag or state setters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_mode_flags(int param_1, int param_2, uint32_t param_x2)

{
  int iVar1;
  
  if (param_2 == 0) {
    set_irq_enable_bit(*(int *)(param_1 + 0x1c),-0x7fffffef,0x8000);
    set_flag_bit_in_object_field_10457502(*(uint32_t *)(param_1 + 0xc),1);
    iVar1 = 0x10;
  }
  else {
    set_irq_enable_bit(*(int *)(param_1 + 0x1c),-0x7fffffee,0x8000);
    set_flag_bit_in_object_field_10457502(*(uint32_t *)(param_1 + 0x14),1);
    iVar1 = 0x18;
  }
  set_flag_bit_in_word(*(uint32_t *)(iVar1 + param_1),1);
  return;
}
