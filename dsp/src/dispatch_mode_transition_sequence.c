/* @k10d dispatch_mode_transition_sequence @ 0x000d9eb4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Executes a state-dependent sequence of calls gated by flag bits and a mode switch.
 * summary:
 *   The function checks flag DAT_0003c193 and then branches on DAT_0003c589. It calls
 *   busy_wait_on_mode_flag with various constants (0x1b2, 0x15e, 1000) and FUN_000dab84
 *   based on the value of DAT_0003c492 (cases 6, 0xd, 0x16 vs 7, 0xe, 0x13, 0x14). It also
 *   conditionally calls set_two_byte_state_pair_000ecd6c and initialize_state_block when
 *   specific bits in DAT_0003c396, DAT_0003f3e1, and DAT_0003c1ed are set. The function
 *   concludes by calling set_flag_bits_and_clear_counters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_sequence(void)

{
  FUN_000da752();
  if ((DAT_0003c193 & 1) != 0) {
    busy_wait_on_mode_flag(0x1b2);
    configure_state_and_dispatch();
    if ((DAT_0003c589 & 1) != 0) {
      busy_wait_on_mode_flag(0x15e);
      if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
         ((DAT_0003c1ed & 0x80) != 0)) {
        _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
        _DAT_0003c27c = _DAT_000000d4 << 2;
        set_two_byte_state_pair_000ecd6c();
        initialize_state_block(_DAT_0003c27c);
      }
      switch(DAT_0003c492) {
      case 6:
      case 0xd:
      case 0x16:
        FUN_000dab84();
        if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
           ((DAT_0003c1ed & 0x80) != 0)) {
          _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
          _DAT_0003c27c = _DAT_000000d4 << 2;
          set_two_byte_state_pair_000ecd6c();
          initialize_state_block(_DAT_0003c27c);
        }
        break;
      case 7:
      case 0xe:
      case 0x13:
      case 0x14:
        FUN_000dab84();
        if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
           ((DAT_0003c1ed & 0x80) != 0)) {
          _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
          _DAT_0003c27c = _DAT_000000d4 << 2;
          set_two_byte_state_pair_000ecd6c();
          initialize_state_block(_DAT_0003c27c);
        }
        busy_wait_on_mode_flag(1000);
        if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
           ((DAT_0003c1ed & 0x80) != 0)) {
          _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
          _DAT_0003c27c = _DAT_000000d4 << 2;
          set_two_byte_state_pair_000ecd6c();
          initialize_state_block(_DAT_0003c27c);
        }
        FUN_000dab0e();
      }
      busy_wait_on_mode_flag(0x15e);
      FUN_000dac6a();
    }
  }
  set_flag_bits_and_clear_counters();
  return;
}
