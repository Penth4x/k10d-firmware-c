/* @k10d update_object_field_and_dispatch @ 0x103e3000
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes param_3 to offset 0x14 of param_1 and conditionally calls helper functions based
 *   on param_2 and param_3 values.
 * summary:
 *   The function stores param_3 at offset 0x14 of the object pointed to by param_1. If
 *   param_2 matches one of three specific constants (0x181002c, 0x181002a, 0x181002b), it
 *   branches on param_3: for values 0x11 or 0xe it calls apply_setting_from_table; for 7,
 *   0, 1, or 3 it calls apply_setting_from_table and sets bytes at offsets 0x26 and 0x27;
 *   for 0xc it calls get_setting_by_index and stores the result at offset 0x24. The callees
 *   are unnamed, so the specific subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10596dc4 * update_object_field_and_dispatch(cls_10596dc4 *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  param_1->field_0x14 = param_3;
  if (((param_2 == 0x181002c) || (param_2 == 0x181002a)) || (param_2 == 0x181002b)) {
    if ((param_3 == 0x11) || (param_3 == 0xe)) {
      apply_setting_from_table(param_1,0x10,(uint)(byte)param_1->field_0x24);
    }
    else if (((param_3 == 7) || (param_3 == 0)) || ((param_3 == 1 || (param_3 == 3)))) {
      apply_setting_from_table(param_1,0x10,(uint)(byte)param_1->field_0x24);
      param_1->field_0x26 = 0;
      param_1->field_0x27 = 0x8c;
      param_1 = (cls_10596dc4 *)0x0;
    }
    else if (param_3 == 0xc) {
      uVar1 = get_setting_by_index((int)param_1,0x10);
      param_1->field_0x24 = (char)uVar1;
    }
  }
  return param_1;
}
