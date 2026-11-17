/* @k10d read_setting_by_id @ 0x104f2358
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls check_object_property_43 twice to select a setting ID (0x53 or 0x163) and reads
 *   it via setting_get.
 * summary:
 *   The function invokes check_object_property_43(param_1) to obtain a value. If the first
 *   call returns 0, it uses setting ID 0x53; otherwise it calls check_object_property_43
 *   again, and if that also returns non-zero, it uses setting ID 0x163. It then reads the
 *   selected setting from the object at param_1+0xc using setting_get. The specific camera
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_by_id(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar2 = 0x53;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar2 = 0x163;
    }
  }
  setting_get(*(int *)(param_1 + 0xc),iVar2);
  return;
}
