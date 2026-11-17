/* @k10d process_state_transition_flags @ 0x000cd59e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a state machine based on DAT_0003ce00 and calls handlers to update
 *   DAT_0003ce07.
 * summary:
 *   The function checks the return value of check_two_flag_bits_000ce7a6 and calls
 *   clear_flag_bit_and_counter if it is 1. It then branches based on the lower 3 bits of
 *   DAT_0003ce00, calling either dispatch_state_machine_step or FUN_000cd86e with a shifted
 *   value from DAT_0003ce00. If the result is non-zero, it sets bit 7 of DAT_0003ce07. The
 *   specific roles of the DAT globals and callees are not verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_state_transition_flags(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_two_flag_bits_000ce7a6();
  if (iVar1 == 1) {
    clear_flag_bit_and_counter();
  }
  uVar2 = (uint)(DAT_0003ce00 >> 5);
  iVar1 = evaluate_state_flag_condition();
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 == 0) {
    if ((DAT_0003ce00 & 7) == 1) {
      if ((DAT_0003c021 & 1) != 0) {
        uVar2 = dispatch_state_machine_step(uVar2);
        goto LAB_000cd5f2;
      }
    }
    else if ((DAT_0003ce00 & 7) != 2) {
      DAT_0003ce01 = DAT_0003ce01 & 0xf7;
      goto LAB_000cd5f2;
    }
    uVar2 = FUN_000cd86e(uVar2);
  }
LAB_000cd5f2:
  if (uVar2 != 0) {
    DAT_0003ce07 = DAT_0003ce07 | 0x80;
  }
  return;
}
