/* @k10d FUN_000f3fa0 @ 0x000f3fa0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f3fa0(void)

{
  uint32_t uVar1;
  uint uVar2;
  
  if (((DAT_0003c440 != '\x01') && (DAT_0003c440 != '\x03')) && (DAT_0003c440 != '\x11')) {
    if (((DAT_0003c440 == '\b') || (DAT_0003c440 == '\x02')) ||
       ((DAT_0003c440 == '\x04' || (DAT_0003c440 == '\a')))) {
      DAT_0003c481 = DAT_0003c482;
      if ((DAT_0003c490 & 1) != 0) {
        DAT_0003c481 = DAT_0003c576;
      }
    }
    else if ((DAT_0003c440 == '\0') || (DAT_0003c440 == '\x05')) {
      DAT_0003c440 = '\x04';
      DAT_0003c481 = DAT_0003c482;
      if ((DAT_0003c490 & 1) != 0) {
        DAT_0003c481 = DAT_0003c576;
      }
    }
    if (DAT_0003c576 < DAT_0003c481) {
      uVar1 = dispatch_based_on_flag((uint)DAT_0003c481);
      DAT_0003c481 = (byte)uVar1;
    }
    DAT_0003c481 = clamp_value_to_range_000d9ac0(DAT_0003c481,DAT_0003c576,DAT_0003c577);
    uVar2 = dispatch_based_on_flag((uint)DAT_0003c481);
    DAT_0003c481 = (byte)uVar2;
    if ((DAT_0003c440 == '\0') || (DAT_0003c440 == '\x05')) {
      DAT_0003c440 = '\x04';
      DAT_0003c481 = DAT_0003c482;
      if ((DAT_0003c490 & 1) != 0) {
        DAT_0003c481 = DAT_0003c576;
      }
    }
    else if (DAT_0003c440 == '\x04') {
      _DAT_0003c562 = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
      DAT_0003c565 = DAT_0003c481;
      uVar1 = call_callee_with_fixed_args(uVar2 & 0xff);
      DAT_0003c564 = (byte)uVar1;
      update_status_flag_bits_000c6958();
      check_counter_delta_and_set_flag(2);
      if (((DAT_0003c58a & 0x40) != 0) || ((DAT_0003c58a & 0x80) != 0)) {
        uVar2 = FUN_000c66b0((uint)DAT_0003c564);
        DAT_0003c565 = (byte)uVar2;
        uVar2 = dispatch_based_on_flag(uVar2 & 0xff);
        DAT_0003c481 = (byte)uVar2;
        DAT_0003c481 = clamp_value_to_range_000d9ac0(uVar2 & 0xff,DAT_0003c576,DAT_0003c577);
      }
    }
    else if ((DAT_0003c440 == '\b') && ((DAT_0003c4d3 & 4) != 0)) {
      DAT_0003c481 = clamp_value_to_range_000d9ac0(uVar2 & 0xff,DAT_0003c576,DAT_0003c577);
      DAT_0003c4df = DAT_0003c4df | 4;
      process_camera_state_flags_000c4a56();
      DAT_0003c4df = DAT_0003c4df & 0xfb;
    }
    else if ((DAT_0003c440 == '\a') && ((DAT_0003c4d3 & 4) != 0)) {
      DAT_0003c481 = clamp_value_to_range_000d9ac0(uVar2 & 0xff,DAT_0003c576,DAT_0003c577);
      DAT_0003c4df = DAT_0003c4df | 4;
      process_camera_state_flags_000c4a56();
      DAT_0003c4df = DAT_0003c4df & 0xfb;
    }
    else {
      DAT_0003c481 = clamp_value_to_range_000d9ac0(uVar2 & 0xff,DAT_0003c576,DAT_0003c577);
    }
  }
  return;
}
