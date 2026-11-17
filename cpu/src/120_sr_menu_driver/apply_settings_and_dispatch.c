/* @k10d apply_settings_and_dispatch @ 0x1043431c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy and dispatches a state change based on param_2.
 * summary:
 *   If param_3 is non-zero, calls process_mode_setting_updates with a flag of 1. It then
 *   calls settings_refresh_working_copy to copy the master settings block from the object
 *   at param_1+0xc. Finally, it calls guarded_call_with_lock_104ba4c0 with a boolean
 *   derived from param_2 == 0x12 and returns the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t apply_settings_and_dispatch(int param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_3 != 0) {
    process_mode_setting_updates(param_1,1);
  }
  settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  call_helper_with_two_offsets_104b9984(*(int *)(param_1 + 0x28),*(void **)(param_1 + 0xc));
  uVar1 = guarded_call_with_lock_104ba4c0(*(uint32_t *)(param_1 + 0x28),param_2 == 0x12,1);
  return uVar1;
}
