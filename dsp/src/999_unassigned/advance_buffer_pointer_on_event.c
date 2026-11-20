/* @k10d advance_buffer_pointer_on_event @ 0x000c5ea2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a pointer and its derived value by adding a signed offset if a specific event
 *   condition is met.
 * summary:
 *   The function checks a state flag (DAT_0003c3c1) and several bitmasks in DAT_0003c410,
 *   DAT_0003c581, and DAT_0003c58a. If conditions are met, it calls
 *   compute_and_flag_delta(1) to retrieve a signed offset. It then adds this offset to
 *   DAT_0003c564, clamps the result using clamp_value_to_range_000d9ac0, and updates
 *   DAT_0003c565 via FUN_000c66b0. It also clears bits 2 and 3 of DAT_0003c58a and calls
 *   check_counter_delta_and_set_flag(1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_buffer_pointer_on_event(void)

{
  uint32_t uVar1;
  int iVar2;
  
  DAT_0003c564 = DAT_0003c47d;
  uVar1 = FUN_000c66b0((uint)DAT_0003c47d);
  DAT_0003c565 = (uint8_t)uVar1;
  check_counter_delta_and_set_flag(1);
  if (DAT_0003c3c1 == '\x01') {
    if (((DAT_0003c410 & 0x40) == 0) || ((DAT_0003c581 & 0x10) != 0)) {
      iVar2 = compute_and_flag_delta(1);
      if (iVar2 != 0) {
        DAT_0003c58a = DAT_0003c58a & 0xf3;
        DAT_0003c564 = DAT_0003c564 + (char)iVar2;
        DAT_0003c564 = clamp_value_to_range_000d9ac0(DAT_0003c564,0x1c,0xa4);
        uVar1 = FUN_000c66b0((uint)DAT_0003c564);
        DAT_0003c565 = (uint8_t)uVar1;
        check_counter_delta_and_set_flag(1);
      }
    }
    else if (((DAT_0003c58a & 8) != 0) && (iVar2 = compute_and_flag_delta(1), iVar2 != 0)) {
      DAT_0003c58a = DAT_0003c58a & 0xf3;
      DAT_0003c564 = DAT_0003c564 + (char)iVar2;
      DAT_0003c564 = clamp_value_to_range_000d9ac0(DAT_0003c564,0x1c,0xa4);
      uVar1 = FUN_000c66b0((uint)DAT_0003c564);
      DAT_0003c565 = (uint8_t)uVar1;
      check_counter_delta_and_set_flag(1);
    }
  }
  return;
}
