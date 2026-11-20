/* @k10d run_two_phase_loop @ 0x000f190a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a 1000-iteration loop followed by a 512-iteration loop, calling a fixed
 *   sequence of helper functions in each pass.
 * summary:
 *   The function first calls set_bit_1_and_5_in_three_flags and captures three values from
 *   read_short_from_table_000f2178, read_short_from_table_000f2186, and
 *   read_short_from_table_000f2194. It then runs a loop 1000 times, calling FUN_000d5642,
 *   compute_position_deltas, step_toward_target_values (with different arguments on the
 *   first iteration), clamp_and_flag_range_limits, and call_two_unnamed_helpers. A second
 *   loop runs 512 times, calling FUN_000d5642, compute_position_deltas,
 *   swap_three_short_values, clamp_and_flag_range_limits, call_two_unnamed_helpers, and
 *   write_three_words_to_struct. The function concludes by calling dispatch_three_subcalls.
 *   The specific roles of the callees are unknown, so the overall purpose is limited to
 *   describing the mechanical loop structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_two_phase_loop(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  short sVar5;
  int iVar4;
  
  set_bit_1_and_5_in_three_flags();
  uVar1 = read_short_from_table_000f2178(0);
  uVar2 = read_short_from_table_000f2186(0);
  uVar3 = read_short_from_table_000f2194(0);
  sVar5 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    if (sVar5 == 0) {
      step_toward_target_values(0,0,0,0);
    }
    else {
      step_toward_target_values(1,uVar1,uVar2,uVar3);
    }
    clamp_and_flag_range_limits();
    call_two_unnamed_helpers();
    sVar5 = sVar5 + 1;
  } while (sVar5 < 1000);
  iVar4 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    swap_three_short_values(iVar4);
    clamp_and_flag_range_limits();
    call_two_unnamed_helpers();
    write_three_words_to_struct(iVar4);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x200);
  dispatch_three_subcalls(0,0,0);
  return;
}
