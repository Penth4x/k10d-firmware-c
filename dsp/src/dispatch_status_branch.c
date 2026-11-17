/* @k10d dispatch_status_branch @ 0x000e00e6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Routes execution to one of several handler functions based on bit flags in DAT_0003c126
 *   and DAT_0003c127.
 * summary:
 *   The function checks specific bits in two global byte variables (DAT_0003c126 and
 *   DAT_0003c127) to determine which of four code paths to execute. It calls different
 *   combinations of subroutines (update_state_machine_flags, check_flag_and_dispatch,
 *   check_and_run_gated_sequence, read_bytes_if_enabled, check_and_update_status_flags,
 *   check_bit_and_set_flag) depending on the flag states. The specific meaning of the flags
 *   and the roles of the callees are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_status_branch(void)

{
  if ((DAT_0003c127 & 0x80) == 0) {
    if (((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
      if ((DAT_0003c127 & 0x20) == 0) {
        update_state_machine_flags();
      }
      else {
        check_flag_and_dispatch();
        check_and_run_gated_sequence();
        read_bytes_if_enabled(100,(void *)&DAT_0003c119,2);
        read_bytes_if_enabled(0x39,(void *)&DAT_0003c115,4);
        check_and_run_gated_sequence();
        read_bytes_if_enabled(0x3a,(void *)0x3c11b,4);
        read_bytes_if_enabled(0x3b,(void *)&DAT_0003c11f,1);
      }
    }
    else {
      check_and_update_status_flags();
    }
  }
  else {
    check_bit_and_set_flag();
  }
  return;
}
