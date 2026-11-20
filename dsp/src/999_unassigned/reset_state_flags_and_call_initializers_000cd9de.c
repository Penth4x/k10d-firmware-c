/* @k10d reset_state_flags_and_call_initializers_000cd9de @ 0x000cd9de
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears multiple state flags and calls a series of initialization functions based on
 *   current flag conditions.
 * summary:
 *   The function checks DAT_0003c022 and if clear, calls four functions and resets
 *   _DAT_0003ce7a. It then zeros several DAT_0003ce6x/7x variables, clears bit 3 of
 *   DAT_0003ce09, and conditionally calls set_dat_0003cd5c_to_0x7f based on DAT_0003ce01.
 *   It calls three more functions, clears bits in DAT_0003c180 and DAT_0003ce01, shifts
 *   DAT_0003f4a4 into DAT_0003ce15, masks DAT_0003ce00 and DAT_0003ce02, calls
 *   FUN_000cdaa4, and conditionally calls set_dat_0003cd5c_to_0x7f again. Finally it clears
 *   _DAT_0003ce76 if DAT_0003c4dd bit 1 is clear, zeros DAT_0003cfc7 and DAT_0003cef3, and
 *   returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t reset_state_flags_and_call_initializers_000cd9de(void)

{
  if ((DAT_0003c022 & 1) == 0) {
    clear_four_word_block();
    clear_four_word_globals();
    poll_four_word_sequence();
    clear_flag_and_call_handler_000ce7bc();
    _DAT_0003ce7a = 0;
  }
  _DAT_0003ce6a = 0;
  _DAT_0003ce6e = 0;
  _DAT_0003ce74 = 0;
  DAT_0003ce09 = DAT_0003ce09 & 0xf7;
  if ((DAT_0003ce01 & 1) != 0) {
    set_dat_0003cd5c_to_0x7f();
  }
  compute_and_dispatch_adjusted_value();
  FUN_000cc6d6();
  clear_bit_and_dispatch_state();
  DAT_0003c180 = DAT_0003c180 & 0xf7;
  DAT_0003ce01 = DAT_0003ce01 & 0x7f;
  DAT_0003ce15 = (DAT_0003f4a4 & 0xf) << 2;
  DAT_0003ce00 = DAT_0003ce00 & 7;
  DAT_0003ce02 = DAT_0003ce02 & 0xfc;
  FUN_000cdaa4();
  if ((DAT_0003ce00 & 1) == 0) {
    set_dat_0003cd5c_to_0x7f();
  }
  if ((DAT_0003c4dd & 2) == 0) {
    _DAT_0003ce76 = 0;
  }
  DAT_0003cfc7 = 0;
  DAT_0003cef3 = 0;
  return 1;
}
