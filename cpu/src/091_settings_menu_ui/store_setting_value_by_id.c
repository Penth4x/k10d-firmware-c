/* @k10d store_setting_value_by_id @ 0x104092ae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the object at offset 0x18 and, for two specific IDs, writes a RAM
 *   byte into setting 0x72 via setting_set.
 * summary:
 *   Writes param_2 to *(param_1+0x18). If param_2 is 0x1ba000e it calls setting_set with
 *   the object's field at offset 8, setting index 0x72, and the value of bRam105999e8; if
 *   param_2 is 0x1ba000d it does the same with bRam105999e9. The two RAM bytes are distinct
 *   globals, so the function maps two IDs to two different values stored in the same
 *   setting slot. No camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_setting_value_by_id(cls_105999ec *param_1,int param_2)

{
  param_1->field_0x18 = param_2;
  if (param_2 == 0x1ba000e) {
    setting_set(param_1->field_0x8,0x72,(uint)bRam105999e8);
  }
  else if (param_2 == 0x1ba000d) {
    setting_set(param_1->field_0x8,0x72,(uint)bRam105999e9);
  }
  return;
}
