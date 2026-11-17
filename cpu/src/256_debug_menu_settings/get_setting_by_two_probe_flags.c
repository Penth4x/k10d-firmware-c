/* @k10d get_setting_by_two_probe_flags @ 0x104f25c0
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting ID (0x5b or 0x16b) based on two calls to check_object_property_43,
 *   then reads that setting via setting_get.
 * summary:
 *   Calls check_object_property_43(param_1) twice; if the first call returns 0 it uses
 *   setting ID 0x5b, otherwise if the second call is non-zero it uses 0x16b, else 0. It
 *   then calls setting_get with the object field at param_1+0xc and the chosen ID,
 *   returning the result. The role of check_object_property_43 is unknown, so the camera
 *   subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_two_probe_flags(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar3 = 0x5b;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar3 = 0x16b;
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
