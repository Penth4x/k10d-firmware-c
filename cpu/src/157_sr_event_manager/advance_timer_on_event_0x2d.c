/* @k10d advance_timer_on_event_0x2d @ 0x1046d60c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Handles event ID 0x2d by adjusting a timer object based on a counter's parity and
 *   magnitude, then increments the counter.
 * summary:
 *   The function returns 0 immediately if param_2 is not 0x2d. It reads a counter from
 *   param_1+0x50 and checks its least significant bit. Depending on the bit and the
 *   counter's value (clamped to ranges like 10-20, 20-50, 50-100), it calls
 *   clear_flag_with_notify or set_flag_with_notify on the object at param_1+0x54, then
 *   calls write_offset_to_object_field with a calculated timeout value and
 *   set_bit0_in_word_at_offset_0x18 on the object at param_1+0x4c. Finally, it increments
 *   the counter at param_1+0x50.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t advance_timer_on_event_0x2d(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (param_2 != 0x2d) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 == (uVar1 - ((int)uVar1 >> 0x1f) & 0xfffffffe)) {
    set_flag_with_notify(*(void **)(param_1 + 0x54));
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 < 0x14) {
      uVar3 = 0x14;
    }
    else if (iVar2 < 0x32) {
      uVar3 = 0x28;
    }
    else {
      if (99 < iVar2) {
LAB_1046d69e:
        set_flag_with_notify(*(void **)(param_1 + 0x54));
        set_flg_obj((uint32_t *)(param_1 + 0x44));
        goto LAB_1046d6ba;
      }
      uVar3 = 100;
    }
  }
  else {
    clear_flag_with_notify(*(void **)(param_1 + 0x54));
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 < 0x14) {
      uVar3 = 10;
    }
    else if (iVar2 < 0x32) {
      uVar3 = 0x14;
    }
    else {
      if (99 < iVar2) goto LAB_1046d69e;
      uVar3 = 0x28;
    }
  }
  write_offset_to_object_field(*(uint32_t *)(param_1 + 0x4c),uVar3);
  set_bit0_in_word_at_offset_0x18(*(uint32_t *)(param_1 + 0x4c));
LAB_1046d6ba:
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return 0;
}
