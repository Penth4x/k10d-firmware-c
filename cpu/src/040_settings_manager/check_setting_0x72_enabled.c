/* @k10d check_setting_0x72_enabled @ 0x1039d028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0x72_enabled(int *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper((void *)*param_1);
  if (bVar2) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = setting_get(*param_1,0x72);
  return iVar1 == 1;
}
