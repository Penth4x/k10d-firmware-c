/* @k10d FUN_000f1dfc @ 0x000f1dfc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f1dfc(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  set_bit_1_and_5_in_three_flags();
  bVar4 = DAT_00000501;
  bVar3 = DAT_00000421;
  bVar2 = DAT_00000401;
  DAT_00000421 = DAT_00000421 & 0xfe;
  DAT_00000401 = DAT_00000401 & 0xfe;
  DAT_00000501 = DAT_00000501 | 1;
  FUN_000d5642(10);
  bVar1 = false;
  while ((DAT_00000001 & 1) != 0) {
    FUN_000d5642(1);
    compute_position_deltas();
    if (bVar1) {
      step_3d_offset_by_table(1,0,0,0);
    }
    else {
      step_3d_offset_by_table(0,0,0,0);
      bVar1 = true;
    }
    clamp_and_flag_range_limits();
    call_two_unnamed_helpers();
  }
  dispatch_three_subcalls(0,0,0);
  DAT_00000421 = bVar3;
  DAT_00000501 = bVar4;
  DAT_00000401 = bVar2;
  return;
}
