/* @k10d display_on_locked @ 0x1052b904
 * name: verified (structural evidence: decomp: lock; if !FUN_1048f948 -> FUN_1048f826; unlock)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Under the display lock, turns the display output on (display_output_enable) unless
 *   already on (obj+0x37).
 * summary:
 *   VERIFIED: decomp: lock; if !read_display_on_flag -> display_output_enable; unlock
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void display_on_locked(uint32_t *param_1)

{
  int iVar1;
  
  call_kernel_with_short_id(param_1 + 1);
  iVar1 = read_display_on_flag(*param_1);
  if (iVar1 == 0) {
    display_output_enable(*param_1);
  }
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
