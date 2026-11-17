/* @k10d refresh_settings_if_dirty_10434368 @ 0x10434368
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Checks a settings object for changes and refreshes the working copy if needed, then
 *   notifies a dependent handler.
 * summary:
 *   The function takes an object pointer and calls check_object_field_via_helper on the
 *   settings block at offset 0xc to determine if it has been modified. If the check returns
 *   true, it calls settings_refresh_working_copy to update the local working copy. Finally,
 *   it calls apply_setting_dependent_actions with a value from offset 0x28 and the settings
 *   pointer, likely to propagate the update or trigger a dependent action.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void refresh_settings_if_dirty_10434368(int param_1)

{
  bool bVar1;
  
  bVar1 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar1) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  apply_setting_dependent_actions(*(int *)(param_1 + 0x28),*(void **)(param_1 + 0xc));
  return;
}
