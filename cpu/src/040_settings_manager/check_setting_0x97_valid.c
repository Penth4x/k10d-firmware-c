/* @k10d check_setting_0x97_valid @ 0x1039d536
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a settings object and returns the value of setting 0x97 from its working
 *   copy.
 * summary:
 *   Calls an unknown validation function on the object pointed to by param_1. If valid,
 *   refreshes the working copy of settings. Finally, reads setting ID 0x97 from the working
 *   copy and returns whether it is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0x97_valid(int *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = setting_get(*param_1,0x97);
  return iVar1 != 0;
}
