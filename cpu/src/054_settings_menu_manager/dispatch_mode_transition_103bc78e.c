/* @k10d dispatch_mode_transition_103bc78e @ 0x103bc78e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode code in the object and triggers a sequence of virtual calls on a related
 *   object based on the code value.
 * summary:
 *   The function writes param_2 to offset 0x20 of the object. It then branches on specific
 *   values (0x1010033, 0x101003f, 0x101004c, 0x101005a). For each branch, it repeatedly
 *   calls menu_item_register with the first field of the object as an argument, and then
 *   invokes virtual slot 1 of the resulting object with arguments 1 or 0. The specific
 *   sequence of 1s and 0s varies by the input code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_transition_103bc78e(cls_10594e70 *param_1,int param_2)

{
  int iVar1;
  
  param_1->field_0x20 = param_2;
  if (param_2 == 0x1010033) {
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else if ((param_2 == 0x101003f) || (param_2 == 0x101004c)) {
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    if (param_1->field_0x38 == '\0') {
      iVar1 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      iVar1 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else if (param_2 == 0x101005a) {
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
