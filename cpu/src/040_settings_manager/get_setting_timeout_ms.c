/* @k10d get_setting_timeout_ms @ 0x1039d062
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_timeout_ms(int *param_1)

{
  bool bVar3;
  int iVar1;
  uint32_t uVar2;
  
  bVar3 = check_object_field_via_helper((void *)*param_1);
  if (bVar3) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = setting_get(*param_1,0x7f);
  if (iVar1 == 0) {
    uVar2 = 3000;
  }
  else if (iVar1 == 1) {
    uVar2 = 5000;
  }
  else if (iVar1 == 2) {
    uVar2 = 10000;
  }
  else if (iVar1 == 3) {
    uVar2 = 30000;
  }
  else {
    uVar2 = 3000;
  }
  return uVar2;
}
