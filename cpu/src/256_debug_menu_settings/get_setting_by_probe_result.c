/* @k10d get_setting_by_probe_result @ 0x104f269a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting ID based on two calls to check_object_property_43 and reads that
 *   setting via setting_get.
 * summary:
 *   Calls check_object_property_43(param_1) twice; if the first call is zero it uses
 *   setting ID 0x32, otherwise if the second call is non-zero it uses 0x15a, else 0. It
 *   then reads the setting at that ID from the object pointed to by *(param_1+0xc) using
 *   setting_get and returns the value. The meaning of check_object_property_43 and the
 *   specific settings 0x32/0x15a are not established, so no camera subsystem is inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_probe_result(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar3 = 0x32;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar3 = 0x15a;
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
