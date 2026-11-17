/* @k10d initialize_512_entry_table @ 0x000f200c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Initializes a 512-entry structure by calling setup functions and a per-entry
 *   initialization routine in a loop.
 * summary:
 *   The function calls several initialization routines (set_bit_1_and_5_in_three_flags,
 *   clear_state_block, etc.) and FUN_000d5642(10). It then iterates 512 times (0x200),
 *   calling FUN_000d5642(1), compute_position_deltas, and a toggling function
 *   step_3d_offset_by_table (alternating between 0 and 1 for the first argument). It also
 *   calls clamp_and_flag_range_limits, call_two_unnamed_helpers, and per-entry initializers
 *   write_three_words_to_buffer_000f2100 and write_three_words_to_struct with the loop
 *   index. Finally, it calls dispatch_three_subcalls(0,0,0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_512_entry_table(void)

{
  bool bVar1;
  ushort uVar2;
  
  bVar1 = false;
  set_bit_1_and_5_in_three_flags();
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  FUN_000d5642(10);
  uVar2 = 0;
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
    write_three_words_to_buffer_000f2100((int)(short)uVar2);
    write_three_words_to_struct((int)(short)uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  dispatch_three_subcalls(0,0,0);
  return;
}
