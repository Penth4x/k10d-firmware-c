/* @k10d run_sequenced_delayed_initialization @ 0x000f23c6
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * purpose:
 *   Executes a fixed sequence of initialization calls interleaved with repeated timed delay
 *   loops and flag updates.
 * summary:
 *   The function saves two global bytes, calls a small set of setup routines, then performs
 *   multiple loops that call FUN_000d5642(1) followed by one of several delay-like
 *   functions (update_global_state_flags, update_state_flags_and_status_byte,
 *   initialize_state_block, update_status_flags_and_counters_000de274) for fixed iteration
 *   counts. It also toggles bits in DAT_0003c214, DAT_00000002, and DAT_0003c804, sets
 *   DAT_0003c8c8 to 0/2, and runs a second loop calling a group of functions
 *   (compute_position_deltas, FUN_000dbc14, clamp_accumulated_values,
 *   update_two_offset_values, call_two_unnamed_helpers) plus
 *   write_two_halfwords_to_array/write_three_words_to_buffer_000f2100 with an incrementing
 *   index. Finally it restores the saved bytes and clears some flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_sequenced_delayed_initialization(void)

{
  uint8_t uVar1;
  uint8_t uVar2;
  short sVar4;
  int iVar3;
  
  uVar2 = DAT_0003f3b1;
  uVar1 = DAT_0003f3b0;
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  set_bit7_and_notify();
  DAT_0003c214 = DAT_0003c214 | 1;
  DAT_00000002 = DAT_00000002 | 3;
  run_timed_polling_loop();
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_global_state_flags(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 200);
  DAT_0003c8c8 = 0;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 500);
  DAT_0003c8c8 = 2;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 2000);
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    initialize_state_block(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 100);
  DAT_0003f3b0 = 0;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_status_flags_and_counters_000de274(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 0x78);
  DAT_0003c804 = DAT_0003c804 | 4;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    update_two_offset_values();
    call_two_unnamed_helpers();
    sVar4 = sVar4 + 1;
  } while (sVar4 < 1000);
  DAT_00000002 = DAT_00000002 & 0xfe;
  iVar3 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    update_two_offset_values();
    call_two_unnamed_helpers();
    write_two_halfwords_to_array(iVar3);
    write_three_words_to_buffer_000f2100(iVar3);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x7d);
  DAT_0003c804 = DAT_0003c804 & 0xfb;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_global_state_flags(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 200);
  wait_for_status_flag();
  DAT_0003c214 = DAT_0003c214 & 0xfe;
  DAT_0003c8c8 = 0;
  sVar4 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar4 = sVar4 + 1;
  } while (sVar4 < 500);
  DAT_0003f3b0 = uVar1;
  DAT_0003f3b1 = uVar2;
  return;
}
