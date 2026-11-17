/* @k10d check_and_dispatch_state_flags @ 0x000e21dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple global flag bits and conditionally calls helper functions to update
 *   state.
 * summary:
 *   The function checks a combination of bits in DAT_0003c127, DAT_0003c128, DAT_0003c02f,
 *   and DAT_0000000b. Depending on these conditions, it calls clear_bit7_and_call_helper,
 *   call_subroutine_with_arg_9, update_state_flags_and_dispatch,
 *   wait_for_flag_with_timeout_000e22da, or clear_bit2_and_bit7_flags, and modifies bits in
 *   DAT_0003c1ec and DAT_0003c123. It returns bit 2 of DAT_0000000b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_and_dispatch_state_flags(void)

{
  if (((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) {
    if ((DAT_0003c02f & 1) == 0) {
      if ((DAT_0000000b & 4) == 0) {
        clear_bit7_and_call_helper();
        if ((DAT_0003c00f & 0x40) == 0) {
          call_subroutine_with_arg_9();
          DAT_0003c1ec = DAT_0003c1ec | 2;
          update_state_flags_and_dispatch();
          DAT_0003c1ec = DAT_0003c1ec & 0xfd;
        }
        if ((DAT_0003c02f & 1) == 0) {
          DAT_0003c123 = DAT_0003c123 | 0x80;
          wait_for_flag_with_timeout_000e22da();
        }
      }
    }
    else {
      clear_bit2_and_bit7_flags();
    }
  }
  return (DAT_0000000b & 7) >> 2;
}
