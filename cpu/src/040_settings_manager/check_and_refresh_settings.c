/* @k10d check_and_refresh_settings @ 0x1039d47e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_refresh_settings(int *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = setting_get(*param_1,0x3c);
  return iVar1 == 0;
}
