/* @k10d dispatch_state_update @ 0x000c7b88
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally invokes state handlers and updates derived values based on flag bits and
 *   a mode byte.
 * summary:
 *   The function checks flag bits in DAT_0003c58a and the input parameter to determine if
 *   processing should proceed. It calls either adjust_scroll_offset or
 *   adjust_clamped_offset_value_000c7cfa depending on the state of DAT_0003c3ac. If
 *   DAT_0003c440 equals 5, it performs arithmetic on DAT_0003c564 and DAT_0003c565, calls
 *   FUN_000c66b0 and check_counter_delta_and_set_flag, and potentially updates several
 *   globals via call_callee_with_fixed_args, dispatch_on_flag_zero_000f3f7a, and
 *   clamp_value_to_range_000d9ac0 if specific flag bits are set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_update(int param_1)

{
  uint32_t uVar1;
  uint uVar2;
  
  if ((((DAT_0003c58a & 0x20) == 0) || (param_1 < 1)) &&
     (((DAT_0003c58a & 0x10) == 0 || (-1 < param_1)))) {
    if (DAT_0003c3ac == '\0') {
      adjust_scroll_offset(__frv_reg_unset(4));
    }
    else {
      adjust_clamped_offset_value_000c7cfa(__frv_reg_unset(4));
    }
    if (DAT_0003c440 == '\x05') {
      _DAT_0003c562 = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
      DAT_0003c564 = DAT_0003c47e;
      uVar1 = FUN_000c66b0((uint)DAT_0003c47e);
      DAT_0003c565 = (byte)uVar1;
      check_counter_delta_and_set_flag(1);
      if (((DAT_0003c58a & 4) != 0) || ((DAT_0003c58a & 8) != 0)) {
        uVar2 = call_callee_with_fixed_args((uint)DAT_0003c565);
        DAT_0003c564 = (char)uVar2;
        uVar2 = dispatch_on_flag_zero_000f3f7a(uVar2 & 0xff);
        DAT_0003c47e = (char)uVar2;
        DAT_0003c47d = clamp_value_to_range_000d9ac0(uVar2 & 0xff,0x1c,0xa4);
        DAT_0003c47e = DAT_0003c47d;
        DAT_0003c564 = DAT_0003c47d;
      }
    }
  }
  return;
}
