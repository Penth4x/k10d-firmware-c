/* @k10d get_mode_dependent_setting_104efe82 @ 0x104efe82
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects and returns a setting ID based on a mode flag and parameter index.
 * summary:
 *   Refreshes the settings working copy, then calls check_object_property_43 to determine a
 *   mode state. Based on that state and param_2 (0, 1, or 2), it selects a specific setting
 *   ID (e.g., 4, 10, 7 or 300, 306, 303). Finally, it retrieves and returns the value of
 *   that setting from the working copy via setting_get.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_dependent_setting_104efe82(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  uVar1 = check_object_property_43(param_1);
  iVar3 = 0;
  if (uVar1 == 0) {
    if (param_2 == 0) {
      iVar3 = 4;
    }
    else if (param_2 == 1) {
      iVar3 = 10;
    }
    else if (param_2 == 2) {
      iVar3 = 7;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_2 == 0) {
        iVar3 = 300;
      }
      else if (param_2 == 1) {
        iVar3 = 0x132;
      }
      else if (param_2 == 2) {
        iVar3 = 0x12f;
      }
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
