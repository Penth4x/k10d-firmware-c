/* @k10d check_setting_0xa8_enabled @ 0x1046cb90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed and returns whether setting 0xa8 is non-
 *   zero.
 * summary:
 *   The function takes an object pointer, calls an unknown helper on the sub-object at
 *   offset 8. If that helper returns true, it calls settings_refresh_working_copy to update
 *   the local settings copy. It then reads setting ID 0xa8 from the working copy via
 *   setting_get and returns whether the value is non-zero. The specific meaning of setting
 *   0xa8 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0xa8_enabled(int param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 8));
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 8));
  }
  iVar1 = setting_get(*(int *)(param_1 + 8),0xa8);
  return iVar1 != 0;
}
