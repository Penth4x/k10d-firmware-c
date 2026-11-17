/* @k10d get_setting_0x82_with_refresh @ 0x1039d382
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed and returns the value of setting ID 0x82.
 * summary:
 *   The function takes a pointer to a settings object. It calls an unknown function
 *   (check_object_field_via_helper) which likely checks if the settings are dirty or need
 *   updating. If that check returns true, it calls settings_refresh_working_copy to
 *   synchronize the working copy from the master block. Finally, it retrieves and returns
 *   the specific setting with ID 0x82 using setting_get.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0x82_with_refresh(uint32_t *param_1)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  uVar1 = setting_get(*param_1,0x82);
  return uVar1;
}
