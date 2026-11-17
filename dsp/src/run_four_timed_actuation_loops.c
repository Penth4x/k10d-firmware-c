/* @k10d run_four_timed_actuation_loops @ 0x000ddcba
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Executes four sequential timed loops that toggle a state flag and issue movement
 *   commands with alternating directions.
 * summary:
 *   The function reads two signed 16-bit values from DAT_0003c816 and DAT_0003c818 to
 *   determine a direction flag (uVar4). It then performs four sequential loops (65, 50, 50,
 *   and 50 iterations) that call FUN_000d5642, compute_position_deltas,
 *   step_3d_offset_by_table, and clamp_and_flag_range_limits. The second, third, and fourth
 *   loops also call accumulate_three_fixed_point_values and dispatch_three_subcalls with
 *   the direction flag, negating it in the third loop. The pattern of repeated actuation
 *   with direction changes is consistent with a mechanical movement routine, but the
 *   specific subsystem is not identifiable from the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_four_timed_actuation_loops(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint32_t uVar4;
  
  uVar4 = 0x219;
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  compute_position_deltas();
  sVar3 = _DAT_0003c816;
  if (_DAT_0003c816 < 0) {
    sVar3 = -_DAT_0003c816;
  }
  sVar2 = _DAT_0003c818;
  if (_DAT_0003c818 < 0) {
    sVar2 = -_DAT_0003c818;
  }
  if (sVar3 < sVar2) {
    if (_DAT_0003c818 < 0) {
      uVar4 = 0xfffffde7;
    }
  }
  else if (_DAT_0003c816 < 0) {
    uVar4 = 0xfffffde7;
  }
  set_bit_1_and_5_in_three_flags();
  FUN_000d5642(5);
  bVar1 = false;
  sVar3 = 0;
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
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x41);
  bVar1 = false;
  sVar3 = 0;
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
    accumulate_three_fixed_point_values();
    dispatch_three_subcalls((int)_DAT_0003c81a,uVar4,uVar4);
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x32);
  bVar1 = false;
  sVar3 = 0;
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
    accumulate_three_fixed_point_values();
    dispatch_three_subcalls((int)_DAT_0003c81a,(int)(short)-(short)uVar4,(int)(short)-(short)uVar4);
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x32);
  bVar1 = false;
  sVar3 = 0;
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
    accumulate_three_fixed_point_values();
    dispatch_three_subcalls((int)_DAT_0003c81a,uVar4,uVar4);
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x32);
  dispatch_three_subcalls(0,0,0);
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  return;
}
