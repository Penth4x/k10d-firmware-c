/* @k10d dispatch_on_status_flags @ 0x000e0e4c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads a status byte and branches to one of two handler routines based on flag
 *   conditions.
 * summary:
 *   The function calls compute_index_from_mode with 0x180, then stores the result of
 *   wait_for_flag_and_store_byte(0xff) into DAT_0003c100. It evaluates a compound condition
 *   involving DAT_0003c125, DAT_0003c124, and the newly read value. If the condition is
 *   true, it calls read_bytes_with_ready_wait; otherwise, it calls
 *   initialize_unknown_state_flags, call_subroutine_with_0x1e, and
 *   fill_buffer_with_repeated_byte. The specific meaning of the flags and handlers is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_status_flags(void)

{
  compute_index_from_mode(0x180);
  DAT_0003c100 = wait_for_flag_and_store_byte(0xff);
  if (((((DAT_0003c125 & 0x10) == 0) || ((DAT_0003c100 & 7) != 0)) &&
      (((DAT_0003c125 & 1) == 0 || (DAT_0003c100 != 0xff)))) &&
     (((DAT_0003c124 & 2) == 0 || (DAT_0003c100 != 0x30)))) {
    read_bytes_with_ready_wait((void *)&DAT_0003c101,0x12);
  }
  else {
    initialize_unknown_state_flags();
    call_subroutine_with_0x1e();
    fill_buffer_with_repeated_byte((void *)&DAT_0003c101,0x12);
  }
  return;
}
