/* @k10d dispatch_on_state_flags_000e223e @ 0x000e223e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks multiple global flag bits and conditionally calls a sequence of subroutines
 *   based on their values.
 * summary:
 *   The function evaluates a nested set of conditions on global variables DAT_0003c126,
 *   DAT_0003c143, DAT_0003c02f, DAT_00000008, and DAT_0003c00f. Depending on these flags,
 *   it calls clear_bit7_and_call_helper, call_subroutine_with_arg_9,
 *   update_state_flags_and_dispatch, wait_for_flag_clear, or clear_flag_bit1_in_global. It
 *   also modifies the bit 1 of DAT_0003c1ec. The function returns bit 1 of DAT_00000008.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_state_flags_000e223e(void)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    if ((DAT_0003c02f & 1) == 0) {
      if ((DAT_00000008 & 2) == 0) {
        clear_bit7_and_call_helper();
        if ((DAT_0003c00f & 0x40) == 0) {
          call_subroutine_with_arg_9();
          DAT_0003c1ec = DAT_0003c1ec | 2;
          update_state_flags_and_dispatch();
          DAT_0003c1ec = DAT_0003c1ec & 0xfd;
        }
        if ((DAT_0003c02f & 1) == 0) {
          wait_for_flag_clear();
        }
      }
    }
    else {
      clear_flag_bit1_in_global();
    }
  }
  return (DAT_00000008 & 3) >> 1;
}
