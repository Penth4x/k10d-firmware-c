/* @k10d run_timed_flag_toggle_sequence @ 0x000f1eac
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Saves and modifies global flags, runs a 60-iteration loop toggling a local flag, then
 *   waits on a global bit before restoring state.
 * summary:
 *   The function saves and modifies several global flags (clearing bit 0 of
 *   DAT_00000421/0401, setting bit 0 of DAT_00000501) and sets _DAT_0003f370/72 to 0x200.
 *   It runs a do-while loop 60 times (0x3c), calling FUN_000d5642(1),
 *   compute_position_deltas, and alternating step_3d_offset_by_table calls based on a local
 *   flag. It then waits in a while loop on DAT_00000001 bit 0, calling a sequence of
 *   functions including store_shifted_params_to_globals with parameters from
 *   _DAT_0003c810/12. Finally, it restores the saved global values and calls
 *   dispatch_three_subcalls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_timed_flag_toggle_sequence(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  ushort uVar7;
  
  bVar1 = false;
  set_bit_1_and_5_in_three_flags();
  uVar6 = _DAT_0003f372;
  uVar5 = _DAT_0003f370;
  bVar4 = DAT_00000501;
  bVar3 = DAT_00000421;
  bVar2 = DAT_00000401;
  DAT_00000421 = DAT_00000421 & 0xfe;
  DAT_00000401 = DAT_00000401 & 0xfe;
  DAT_00000501 = DAT_00000501 | 1;
  _DAT_0003f370 = 0x200;
  _DAT_0003f372 = 0x200;
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  FUN_000d5642(10);
  uVar7 = 0;
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
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x3c);
  while ((DAT_00000001 & 1) != 0) {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    update_two_offset_values();
    store_shifted_params_to_globals((int)_DAT_0003c810,(int)_DAT_0003c812,(int)_DAT_0003c812);
    clamp_and_flag_range_limits();
    call_two_unnamed_helpers();
  }
  dispatch_three_subcalls(0,0,0);
  _DAT_0003f370 = uVar5;
  _DAT_0003f372 = uVar6;
  DAT_00000421 = bVar3;
  DAT_00000501 = bVar4;
  DAT_00000401 = bVar2;
  return;
}
