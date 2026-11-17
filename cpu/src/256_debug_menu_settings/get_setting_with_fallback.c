/* @k10d get_setting_with_fallback @ 0x104f2326
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a setting value using a fallback ID determined by two calls to an unknown helper.
 * summary:
 *   Calls check_object_property_43 twice with param_1 to determine an index (0x52 or
 *   0x162). Uses the value at param_1+0xc as the first argument to setting_get along with
 *   the determined index. Returns the result of setting_get.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_with_fallback(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar3 = 0x52;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar3 = 0x162;
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
