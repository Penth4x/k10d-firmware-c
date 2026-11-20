/* @k10d dispatch_state_transition_000cb94e @ 0x000cb94e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a state machine based on flags in DAT_0003ce02-08 and calls handlers to
 *   advance the state.
 * summary:
 *   The function first checks two prerequisite functions (run_state_machine_loop,
 *   scan_key_matrix_for_active_key). If they pass, it branches on bit 0 of DAT_0003cb80. In
 *   the main branch, it inspects bits in DAT_0003ce02, DAT_0003ce05, and DAT_0003ce07 to
 *   select one of several handler functions (check_buffer_overflow_and_update_flags,
 *   process_flag_gated_state_update, dispatch_state_change_request, etc.). It modifies
 *   flags in DAT_0003ce02, DAT_0003ce06, and DAT_0003ce08 and returns the result of the
 *   last handler called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_state_transition_000cb94e(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = run_state_machine_loop();
  if ((iVar1 == 0) && (iVar2 = scan_key_matrix_for_active_key(), iVar2 == 0)) {
    if ((DAT_0003cb80 & 1) == 0) {
      iVar2 = FUN_000cba8c();
    }
    else {
      iVar1 = check_buffer_overflow_and_update_flags();
      if (iVar1 == 0) {
        DAT_0003ce02 = DAT_0003ce02 & 0x7f;
        iVar2 = 3;
      }
      else if ((DAT_0003ce07 & 8) == 0) {
        process_flag_gated_state_update();
        if ((DAT_0003ce05 & 1) == 0) {
          iVar2 = process_state_machine_event();
          if (iVar2 == 0) {
            clamp_product_to_16bit_000d1ef8();
            _DAT_0003ce2c = 0;
            iVar2 = compute_state_offset_value();
          }
        }
        else {
          FUN_000cd58c();
        }
      }
      else {
        iVar2 = dispatch_state_change_request(1);
      }
      if ((DAT_0003ce05 & 1) != 0) {
        DAT_0003ce08 = DAT_0003ce08 | 0x10;
        DAT_0003ce06 = DAT_0003ce06 & 0x7f;
        iVar2 = process_state_transition_000d1212();
      }
    }
  }
  return iVar2;
}
