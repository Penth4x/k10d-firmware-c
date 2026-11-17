/* @k10d display_off_locked @ 0x1052b940
 * name: verified (structural evidence: decomp: lock; if FUN_1048f948 -> FUN_1048f8ac; unlock; emulator: runs when a screen closes into display-off)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Under the display lock, turns the display output off if it is on.
 * summary:
 *   VERIFIED: decomp: lock; if get_display_on_flag -> deactivate_display_mode; unlock;
 *   emulator: runs when a screen closes into display-off
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void display_off_locked(uint32_t *param_1)

{
  int iVar1;
  
  call_kernel_with_short_id(param_1 + 1);
  iVar1 = get_display_on_flag(*param_1);
  if (iVar1 != 0) {
    deactivate_display_mode(*param_1);
  }
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
