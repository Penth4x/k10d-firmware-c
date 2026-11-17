/* @k10d FUN_000c6002 @ 0x000c6002
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c6002(void)

{
  uint32_t uVar1;
  int iVar2;
  
  DAT_0003c565 = DAT_0003c480;
  uVar1 = call_callee_with_fixed_args((uint)DAT_0003c480);
  DAT_0003c564 = (uint8_t)uVar1;
  update_status_flag_bits_000c6958();
  check_counter_delta_and_set_flag(2);
  if (DAT_0003c3c1 == '\x01') {
    if (((DAT_0003c410 & 0x40) == 0) || ((DAT_0003c581 & 0x10) != 0)) {
      iVar2 = compute_and_flag_delta(2);
      if (iVar2 != 0) {
        DAT_0003c58a = DAT_0003c58a & 0x3f;
        DAT_0003c565 = DAT_0003c565 + (char)iVar2;
        DAT_0003c565 = clamp_value_to_range_000d9ac0(DAT_0003c565,DAT_0003c576,DAT_0003c577);
        uVar1 = call_callee_with_fixed_args((uint)DAT_0003c565);
        DAT_0003c564 = (uint8_t)uVar1;
        update_status_flag_bits_000c6958();
        check_counter_delta_and_set_flag(2);
      }
    }
    else if (((DAT_0003c58a & 0x80) != 0) && (iVar2 = compute_and_flag_delta(1), iVar2 != 0)) {
      DAT_0003c58a = DAT_0003c58a & 0x3f;
      DAT_0003c565 = DAT_0003c565 + (char)iVar2;
      DAT_0003c565 = clamp_value_to_range_000d9ac0(DAT_0003c565,DAT_0003c576,DAT_0003c577);
      uVar1 = call_callee_with_fixed_args((uint)DAT_0003c565);
      DAT_0003c564 = (uint8_t)uVar1;
      update_status_flag_bits_000c6958();
      check_counter_delta_and_set_flag(2);
    }
  }
  return;
}
