/* @k10d refresh_settings_if_changed_104343a0 @ 0x104343a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Checks a settings object for changes and refreshes the working copy if modified, then
 *   notifies a dependent component.
 * summary:
 *   The function takes an object pointer and calls check_object_field_via_helper on the
 *   sub-object at offset 0xc to determine if settings have changed. If true, it calls
 *   settings_refresh_working_copy to update the local working copy. Finally, it calls
 *   write_exposure_settings_from_object with the value at offset 0x28 and the settings sub-
 *   object, likely to propagate the update or trigger a UI refresh.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void refresh_settings_if_changed_104343a0(int param_1)

{
  bool bVar1;
  
  bVar1 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar1) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  write_exposure_settings_from_object(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc));
  return;
}
