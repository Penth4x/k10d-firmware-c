/* @k10d get_setting_0x7b_with_refresh @ 0x1039d272
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if a validity check passes, then returns setting ID
 *   0x7b.
 * summary:
 *   The function takes a pointer to a settings object. It calls an unknown function
 *   (check_object_field_via_helper) on the object; if that returns true, it calls
 *   settings_refresh_working_copy to update the local copy of the settings. Finally, it
 *   retrieves and returns the value of setting ID 0x7b using setting_get. The specific
 *   meaning of setting 0x7b is not defined in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0x7b_with_refresh(int *param_1)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  uVar1 = setting_get(*param_1,0x7b);
  return uVar1;
}
