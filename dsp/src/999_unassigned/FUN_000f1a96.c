/* @k10d FUN_000f1a96 @ 0x000f1a96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1a96(void)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  set_bit_1_and_5_in_three_flags();
  uVar2 = read_halfword_from_table(0);
  uVar4 = 0;
  if (_DAT_0003c8c4 != 0) {
    do {
      clear_state_block();
      clear_six_word_globals_000dbb52();
      clear_tenth_global_words();
      bVar1 = false;
      uVar3 = 0;
      if (_DAT_0003c8c0 != 0) {
        do {
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
          uVar3 = uVar3 + 1;
        } while (uVar3 < _DAT_0003c8c0);
      }
      uVar3 = 0;
      if (_DAT_0003c8c2 != 0) {
        do {
          FUN_000d5642(1);
          compute_position_deltas();
          set_three_word_pattern((int)(short)uVar3,uVar2);
          clamp_and_flag_range_limits();
          call_two_unnamed_helpers();
          uVar3 = uVar3 + 1;
        } while (uVar3 < _DAT_0003c8c2);
      }
      dispatch_three_subcalls(0,0,0);
      FUN_000d5642(_DAT_0003c8c6);
      if (uVar2 == 7) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + 1 & 0xffff;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < _DAT_0003c8c4);
  }
  write_halfword_to_array_000f2298(0,uVar2);
  dispatch_three_subcalls(0,0,0);
  return;
}
