/* @k10d read_setting_by_mode_flag @ 0x104f214e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting index (0x50 or 0x160) based on repeated calls to
 *   check_object_property_43 and reads it via setting_get.
 * summary:
 *   The function calls check_object_property_43(param_1) up to twice to determine a setting
 *   ID: if the first call returns 0 it uses 0x50, otherwise if a second call returns non-
 *   zero it uses 0x160, else it keeps 0. It then reads the setting at that index using
 *   setting_get with a value from *(param_1 + 0xc). The role of check_object_property_43 is
 *   unknown, so the camera subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_by_mode_flag(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    iVar2 = 0x50;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar2 = 0x160;
    }
  }
  setting_get(*(int *)(param_1 + 0xc),iVar2);
  return;
}
