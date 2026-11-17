/* @k10d FUN_000f19be @ 0x000f19be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f19be(void)

{
  short sVar3;
  uint32_t uVar1;
  uint32_t uVar2;
  short sVar5;
  int iVar4;
  ushort uVar6;
  
  set_bit_1_and_5_in_three_flags();
  sVar3 = read_short_from_table_000f22ce(0);
  uVar1 = read_short_from_table_000f22dc(0);
  uVar2 = read_short_from_table_000f22dc(0);
  sVar5 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    if (sVar5 == 0) {
      step_toward_target_values(0,0,0,0);
    }
    else {
      step_toward_target_values(1,(int)sVar3,uVar1,uVar2);
    }
    clamp_and_flag_range_limits();
    call_two_unnamed_helpers();
    sVar5 = sVar5 + 1;
  } while (sVar5 < 1000);
  uVar6 = 0;
  if (_DAT_0003c8c4 != 0) {
    do {
      iVar4 = 0;
      if (_DAT_0003c8c2 != 0) {
        do {
          FUN_000d5642(1);
          compute_position_deltas();
          copy_two_shorts_to_globals_000f21a2(iVar4);
          clamp_and_flag_range_limits();
          call_two_unnamed_helpers();
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (iVar4 < (int)(uint)_DAT_0003c8c2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < _DAT_0003c8c4);
  }
  dispatch_three_subcalls(0,0,0);
  return;
}
