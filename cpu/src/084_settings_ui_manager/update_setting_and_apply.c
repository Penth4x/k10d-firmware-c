/* @k10d update_setting_and_apply @ 0x103ea144
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a new value into a struct field and conditionally syncs a related setting via
 *   setting_set.
 * summary:
 *   Writes param_3 to offset 0x14 of the object pointed to by param_1. If param_2 matches
 *   0x187001c and param_3 is 0x11, 0xe, 7, 0, 1, or 3, it calls setting_set to update
 *   setting 0x7f using the byte at offset 0x20. For the latter group of values, it also
 *   sets the byte at offset 0x22 to 0x8c and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105977ac * update_setting_and_apply(cls_105977ac *param_1,int param_2,int param_3)

{
  param_1->field_0x14 = param_3;
  if (param_2 == 0x187001c) {
    if ((param_3 == 0x11) || (param_3 == 0xe)) {
      setting_set(param_1->field_0x8,0x7f,(uint)(byte)param_1->field_0x20);
    }
    else if ((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) {
      setting_set(param_1->field_0x8,0x7f,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      param_1 = (cls_105977ac *)0x0;
    }
  }
  return param_1;
}
