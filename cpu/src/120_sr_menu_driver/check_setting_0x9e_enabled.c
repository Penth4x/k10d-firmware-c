/* @k10d check_setting_0x9e_enabled @ 0x10433ea2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0x9e_enabled(int param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x9e);
  return iVar1 == 1;
}
