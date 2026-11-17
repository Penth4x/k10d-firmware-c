/* @k10d get_mode_dependent_setting_104f0252 @ 0x104f0252
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting ID based on a state flag and index, then reads that setting from the
 *   working copy.
 * summary:
 *   Calls check_object_property_43 twice to determine a state (0 or non-zero). Based on
 *   this state and param_2 (0, 1, or 2), it selects one of six specific setting IDs (5,
 *   0xb, 8, 0x12d, 0x133, 0x130). It then calls setting_get with the object ID at
 *   param_1+0xc and the selected ID, returning the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_dependent_setting_104f0252(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    if (param_2 == 0) {
      iVar3 = 5;
    }
    else if (param_2 == 1) {
      iVar3 = 0xb;
    }
    else if (param_2 == 2) {
      iVar3 = 8;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_2 == 0) {
        iVar3 = 0x12d;
      }
      else if (param_2 == 1) {
        iVar3 = 0x133;
      }
      else if (param_2 == 2) {
        iVar3 = 0x130;
      }
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
