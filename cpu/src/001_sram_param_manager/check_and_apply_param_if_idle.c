/* @k10d check_and_apply_param_if_idle @ 0x100f0c8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks two status functions and calls a third with param_3 if both return zero,
 *   returning 0 on success or -1 on failure.
 * summary:
 *   The function first calls set_bit_2_in_dat_800482d4_100f1d40(1), likely to disable
 *   interrupts or enter a critical section. It then checks the return value of
 *   wait_for_event_and_acknowledge(param_1). If that is zero, it checks
 *   poll_status_until_bit_set(). If both are zero, it calls
 *   fill_buffer_with_repeated_word(param_3) and sets the return value to 0. Finally, it
 *   calls set_bit_2_in_dat_800482d4_100f1d40(0) to restore the previous state and returns
 *   the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_apply_param_if_idle(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  set_bit_2_in_dat_800482d4_100f1d40(1);
  iVar1 = wait_for_event_and_acknowledge(param_1);
  uVar2 = 0xffffffff;
  if ((iVar1 == 0) && (iVar1 = poll_status_until_bit_set(), iVar1 == 0)) {
    fill_buffer_with_repeated_word(param_3);
    uVar2 = 0;
  }
  set_bit_2_in_dat_800482d4_100f1d40(0);
  return uVar2;
}
