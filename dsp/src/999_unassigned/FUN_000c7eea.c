/* @k10d FUN_000c7eea @ 0x000c7eea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c7eea(int param_1)

{
  uint32_t uVar1;
  uint uVar2;
  
  if ((((DAT_0003c58a & 2) == 0) || (param_1 < 1)) && (((DAT_0003c58a & 1) == 0 || (-1 < param_1))))
  {
    if (DAT_0003c3ac == '\0') {
      compute_clamped_index_000c7f98(__frv_reg_unset(4));
    }
    else {
      adjust_scroll_position(__frv_reg_unset(4));
    }
    if (DAT_0003c440 == '\x04') {
      _DAT_0003c562 = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
      DAT_0003c565 = DAT_0003c481;
      uVar1 = call_callee_with_fixed_args((uint)DAT_0003c481);
      DAT_0003c564 = (byte)uVar1;
      update_status_flag_bits_000c6958();
      check_counter_delta_and_set_flag(2);
      if (((DAT_0003c58a & 0x40) != 0) || ((DAT_0003c58a & 0x80) != 0)) {
        uVar2 = FUN_000c66b0((uint)DAT_0003c564);
        DAT_0003c565 = (char)uVar2;
        uVar2 = dispatch_based_on_flag(uVar2 & 0xff);
        DAT_0003c481 = (char)uVar2;
        DAT_0003c480 = clamp_value_to_range_000d9ac0(uVar2 & 0xff,DAT_0003c576,DAT_0003c577);
        DAT_0003c481 = DAT_0003c480;
        DAT_0003c565 = DAT_0003c480;
      }
    }
  }
  return;
}
