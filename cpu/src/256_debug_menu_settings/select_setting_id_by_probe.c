/* @k10d select_setting_id_by_probe @ 0x104f22f4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls check_object_property_43 twice on param_1 to pick a setting ID (0x54 or 0x164)
 *   and reads it via setting_get.
 * summary:
 *   Invokes check_object_property_43(param_1); if the first call returns 0 it uses setting
 *   ID 0x54, otherwise it calls check_object_property_43 again and uses 0x164 if that
 *   second call is non-zero, else 0x54. It then reads the chosen setting from the object at
 *   *(param_1+0xc) using setting_get. The role of check_object_property_43 and the meaning
 *   of IDs 0x54/0x164 are not established, so no camera subsystem is assumed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_setting_id_by_probe(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar2 = 0x54;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar2 = 0x164;
    }
  }
  setting_get(*(int *)(param_1 + 0xc),iVar2);
  return;
}
