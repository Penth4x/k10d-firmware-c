/* @k10d get_mode_dependent_setting_1039d5b4 @ 0x1039d5b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects and returns a setting value based on a mode index and a boolean state flag.
 * summary:
 *   The function takes a settings object pointer and a mode index (0, 1, or 2). It checks a
 *   condition via check_object_field_via_helper and refreshes the working copy if true. It
 *   then determines a setting ID (0x2b/0x153, 0x2e/0x156, or 0x31/0x159) based on the mode
 *   index and the result of check_object_property_43. Finally, it calls setting_get with
 *   the selected ID and returns the value from a lookup table at DAT_10563e90.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_dependent_setting_1039d5b4(int *param_1,int param_2)

{
  bool bVar3;
  int iVar1;
  uint uVar2;
  int iVar4;
  
  bVar3 = check_object_field_via_helper((void *)*param_1);
  if (bVar3) {
    settings_refresh_working_copy((void *)*param_1);
  }
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = check_object_property_43(*(int *)(iVar1 + 0x74));
  iVar1 = 0;
  if (param_2 == 0) {
    iVar1 = *param_1;
    if (uVar2 == 0) {
      iVar4 = 0x2b;
    }
    else {
      iVar4 = 0x153;
    }
  }
  else if (param_2 == 1) {
    iVar1 = *param_1;
    if (uVar2 == 0) {
      iVar4 = 0x2e;
    }
    else {
      iVar4 = 0x156;
    }
  }
  else {
    if (param_2 != 2) goto LAB_1039d630;
    iVar1 = *param_1;
    if (uVar2 == 0) {
      iVar4 = 0x31;
    }
    else {
      iVar4 = 0x159;
    }
  }
  iVar1 = setting_get(iVar1,iVar4);
LAB_1039d630:
  return *(uint32_t *)(&DAT_10563e90/*ROM*/ + iVar1 * 4);
}
