/* @k10d refresh_settings_if_dirty_1039d40a @ 0x1039d40a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag on the settings object and refreshes the working copy if set, then reads
 *   setting 0x84.
 * summary:
 *   The function calls check_object_field_via_helper with the object pointer to test a
 *   condition. If true, it invokes settings_refresh_working_copy to copy the master
 *   settings block to the working copy. Finally, it calls setting_get to read setting ID
 *   0x84 from the working copy, though the return value is discarded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void refresh_settings_if_dirty_1039d40a(int *param_1)

{
  bool bVar1;
  
  bVar1 = check_object_field_via_helper((void *)*param_1);
  if (bVar1) {
    settings_refresh_working_copy((void *)*param_1);
  }
  setting_get(*param_1,0x84);
  return;
}
