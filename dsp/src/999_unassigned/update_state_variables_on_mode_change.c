/* @k10d update_state_variables_on_mode_change @ 0x000f3414
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Updates a cluster of state variables and flag bits when a mode indicator differs from a
 *   derived status value.
 * summary:
 *   The function selects a parameter (0x40 or 0x48) based on bit 7 of DAT_0003f324. It
 *   compares DAT_0003c3ac against a value derived from DAT_0003c4d5; if they differ, it
 *   resets DAT_0003c49a, masks DAT_0003c4d7, and calls add_signed_offset_by_mode or
 *   add_byte_offset_by_mode (depending on whether DAT_0003c3ac is zero) to update several
 *   DAT_0003c4xx variables, followed by calls to clamp_value_to_range_000d9ac0. Finally, it
 *   sets or clears bit 5 of DAT_0003c4d5 based on bit 0 of DAT_0003c3ac.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_variables_on_mode_change(void)

{
  uint16_t uStack_1a;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uStack_1a = 0x40;
  }
  else {
    uStack_1a = 0x48;
  }
  if ((uint)DAT_0003c3ac != -((int)((uint)DAT_0003c4d5 << 0x1a) >> 0x1f)) {
    DAT_0003c49a = 0;
    DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
    if (DAT_0003c3ac == 0) {
      DAT_0003c47e = add_signed_offset_by_mode(DAT_0003c47e,0);
      DAT_0003c481 = add_signed_offset_by_mode(DAT_0003c481,0);
      DAT_0003c48b = add_signed_offset_by_mode(DAT_0003c48b,1);
      DAT_0003c48b = clamp_value_to_range_000d9ac0(DAT_0003c48b,0x28,0x58);
      DAT_0003c488 = add_signed_offset_by_mode(DAT_0003c488,3);
    }
    else {
      DAT_0003c47e = add_byte_offset_by_mode(DAT_0003c47e,0);
      DAT_0003c481 = add_byte_offset_by_mode(DAT_0003c481,0);
      DAT_0003c48b = add_byte_offset_by_mode(DAT_0003c48b,1);
      DAT_0003c48b = clamp_value_to_range_000d9ac0(DAT_0003c48b,0x30,0x50);
      DAT_0003c488 = add_byte_offset_by_mode(DAT_0003c488,3);
    }
    DAT_0003c47e = clamp_value_to_range_000d9ac0(DAT_0003c47e,0x1c,0xa4);
    DAT_0003c481 = clamp_value_to_range_000d9ac0(DAT_0003c481,DAT_0003c576,DAT_0003c577);
    DAT_0003c488 = clamp_value_to_range_000d9ac0(DAT_0003c488,0x20,uStack_1a);
  }
  if ((DAT_0003c3ac & 1) == 0) {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xdf;
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 | 0x20;
  }
  return;
}
