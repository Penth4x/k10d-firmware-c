/* @k10d FUN_000f3e40 @ 0x000f3e40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f3e40(void)

{
  uint32_t uVar1;
  uint uVar2;
  
  if ((((DAT_0003c440 != 1) && (DAT_0003c440 != 2)) && ((DAT_0003c440 < 9 || (0x10 < DAT_0003c440)))
      ) && (((DAT_0003c4de & 1) == 0 && ((DAT_0003c4df & 8) == 0)))) {
    if (((DAT_0003c4de & 2) == 0) && ((DAT_0003c440 != 3 && (DAT_0003c440 != 5)))) {
      if ((DAT_0003c440 == 0) || (DAT_0003c440 == 4)) {
        DAT_0003c440 = 5;
        DAT_0003c47e = DAT_0003c47f;
      }
    }
    else {
      DAT_0003c47e = DAT_0003c47f;
    }
    if (DAT_0003c440 == 5) {
      _DAT_0003c562 = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
      DAT_0003c564 = DAT_0003c47e;
      uVar1 = FUN_000c66b0((uint)DAT_0003c47e);
      DAT_0003c565 = (byte)uVar1;
      check_counter_delta_and_set_flag(1);
      if (((DAT_0003c58a & 4) != 0) || ((DAT_0003c58a & 8) != 0)) {
        uVar2 = call_callee_with_fixed_args((uint)DAT_0003c565);
        DAT_0003c564 = (byte)uVar2;
        uVar2 = dispatch_on_flag_zero_000f3f7a(uVar2 & 0xff);
        DAT_0003c47e = (byte)uVar2;
        DAT_0003c47e = clamp_value_to_range_000d9ac0(uVar2 & 0xff,0x1c,DAT_0003c578);
      }
    }
    else if ((DAT_0003c440 == 8) && ((DAT_0003c4d3 & 4) != 0)) {
      DAT_0003c47e = clamp_value_to_range_000d9ac0(DAT_0003c47e,0x1c,DAT_0003c578);
      DAT_0003c4df = DAT_0003c4df | 2;
      process_camera_state_flags_000c4a56();
      DAT_0003c4df = DAT_0003c4df & 0xfd;
    }
    else if ((DAT_0003c440 == 7) && ((DAT_0003c4d3 & 4) != 0)) {
      DAT_0003c47e = clamp_value_to_range_000d9ac0(DAT_0003c47e,0x1c,DAT_0003c578);
      DAT_0003c4df = DAT_0003c4df | 2;
      process_camera_state_flags_000c4a56();
      DAT_0003c4df = DAT_0003c4df & 0xfd;
    }
    else {
      uVar1 = dispatch_on_flag_zero_000f3f7a((uint)DAT_0003c47e);
      DAT_0003c47e = (byte)uVar1;
    }
    DAT_0003c47e = clamp_value_to_range_000d9ac0(DAT_0003c47e,0x1c,DAT_0003c578);
  }
  return;
}
