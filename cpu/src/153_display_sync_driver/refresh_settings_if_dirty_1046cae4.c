/* @k10d refresh_settings_if_dirty_1046cae4 @ 0x1046cae4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Checks a settings object for a dirty flag and refreshes the working copy if set, then
 *   reads setting 0xa5.
 * summary:
 *   The function takes a pointer to a settings object (param_1) and accesses the sub-object
 *   at offset 8. It calls check_object_field_via_helper to check a condition (likely a
 *   dirty/modified flag). If true, it calls settings_refresh_working_copy to update the
 *   local working copy from the master block. Finally, it calls setting_get to read setting
 *   ID 0xa5 from the working copy, though the return value is discarded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void refresh_settings_if_dirty_1046cae4(int param_1)

{
  bool bVar1;
  
  bVar1 = check_object_field_via_helper(*(void **)(param_1 + 8));
  if (bVar1) {
    settings_refresh_working_copy(*(void **)(param_1 + 8));
  }
  setting_get(*(int *)(param_1 + 8),0xa5);
  return;
}
