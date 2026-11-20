/* @k10d register_menu_item_pair_103c5fd4 @ 0x103c5fd4
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores an event code in the object and toggles two virtual sub-objects on or off based
 *   on the code.
 * summary:
 *   Writes param_2 into offset 0x18 of the object. For event codes 0x10b0017/1c/21/26 it
 *   calls virtual slot 1 on two objects returned by menu_item_register with arguments 0
 *   then 1. For codes 0x10b002b/30 it calls the same slot with arguments 1 then 0. The role
 *   of menu_item_register and the specific camera subsystem are not determinable from the
 *   given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_pair_103c5fd4(cls_10595334 *param_1,int param_2)

{
  int iVar1;
  
  param_1->field_0x18 = param_2;
  if ((((param_2 == 0x10b0017) || (param_2 == 0x10b001c)) || (param_2 == 0x10b0021)) ||
     (param_2 == 0x10b0026)) {
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if ((param_2 == 0x10b002b) || (param_2 == 0x10b0030)) {
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
