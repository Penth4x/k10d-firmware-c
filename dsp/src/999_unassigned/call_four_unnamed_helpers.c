/* @k10d call_four_unnamed_helpers @ 0x000e092c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes four other functions in sequence with no local logic.
 * summary:
 *   The function acts as a simple wrapper that calls clear_bit2_and_bit7_flags,
 *   clear_flag_bit1_in_global, FUN_000e0944, and reset_state_block_by_mode (with argument
 *   2). It contains no data manipulation, memory access, or conditional branching. The
 *   specific roles of the callees are unknown, so the overall purpose cannot be determined
 *   beyond this sequence of calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_unnamed_helpers(void)

{
  clear_bit2_and_bit7_flags();
  clear_flag_bit1_in_global();
  FUN_000e0944();
  reset_state_block_by_mode(2);
  return;
}
