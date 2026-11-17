/* @k10d dispatch_state_transition_000cbdd8 @ 0x000cbdd8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a state machine based on flags and returns a status code.
 * summary:
 *   The function calls run_state_machine_loop and checks the result against zero. It then
 *   inspects bit flags in DAT_0003ce01 and DAT_0003cb80 to determine a path. Depending on
 *   these flags, it calls build_and_send_status_byte, extract_and_pass_nibble,
 *   check_buffer_overflow_and_update_flags, or FUN_000cdb3e, and returns an integer code
 *   (0, 6, 7, or 8) indicating the outcome or next state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_000cbdd8(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = run_state_machine_loop();
  if ((iVar1 == 0) && (uVar2 = 7, (DAT_0003ce01 & 1) != 0)) {
    if ((DAT_0003cb80 & 1) == 0) {
      build_and_send_status_byte();
      uVar2 = 6;
    }
    else {
      DAT_0003ce06 = DAT_0003ce06 & 0xf7 | 4;
      uVar2 = 8;
      iVar1 = extract_and_pass_nibble();
      if ((iVar1 == 0) && (((DAT_0003ce03 & 0x80) != 0 || (iVar1 = check_buffer_overflow_and_update_flags(), iVar1 != 0)))) {
        uVar2 = FUN_000cdb3e();
      }
    }
  }
  return uVar2;
}
