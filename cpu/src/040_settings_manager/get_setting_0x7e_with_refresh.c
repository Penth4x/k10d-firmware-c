/* @k10d get_setting_0x7e_with_refresh @ 0x1039d33e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a condition on the settings object, refreshes the working copy if true, and
 *   returns setting 0x7e.
 * summary:
 *   The function takes a pointer to a settings object. It calls
 *   check_object_field_via_helper to check a condition; if true, it calls
 *   settings_refresh_working_copy to update the local copy from the master block. Finally,
 *   it retrieves and returns the value of setting ID 0x7e using setting_get.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0x7e_with_refresh(int *param_1)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  uVar1 = setting_get(*param_1,0x7e);
  return uVar1;
}
