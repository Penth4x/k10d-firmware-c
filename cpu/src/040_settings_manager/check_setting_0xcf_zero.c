/* @k10d check_setting_0xcf_zero @ 0x1039d4fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if a validity check passes, then returns whether
 *   setting 0xcf is zero.
 * summary:
 *   The function takes a pointer to a settings object, calls an unknown validation function
 *   on the object. If that check succeeds, it refreshes the working copy of the settings
 *   block. It then reads setting ID 0xcf from the working copy and returns true if the
 *   value is 0. The specific camera subsystem associated with setting 0xcf is not
 *   identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0xcf_zero(int *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = setting_get(*param_1,0xcf);
  return iVar1 == 0;
}
