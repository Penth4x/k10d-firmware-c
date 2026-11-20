/* @k10d register_and_select_menu_items_1038af1c @ 0x1038af1c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets three objects via virtual calls and conditionally activates one based on
 *   coordinate matching.
 * summary:
 *   The function retrieves three object pointers using menu_item_register and calls a
 *   virtual method (slot 2) on each with argument 0, likely resetting their state. It then
 *   queries select_two_parameter_values_by_index three times to obtain coordinate pairs. If
 *   param_4 indicates a selection is needed, it compares param_2 and param_3 against these
 *   coordinates (checking both orders) and calls the same virtual method with argument 1 on
 *   the matching object. The specific subsystem (e.g., AF, SR) is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_1038af1c(int param_1,uint param_2,uint param_3,uint param_4)

{
  struct {
    uint8_t uStack_15;
    ushort uStack_14;
    ushort uStack_12;
    ushort uStack_10;
    ushort uStack_e;
    ushort uStack_c;
    ushort uStack_a;
  } _cfg_15;
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  _cfg_15.uStack_14 = 0;
  _cfg_15.uStack_12 = 0;
  _cfg_15.uStack_10 = 0;
  _cfg_15.uStack_e = 0;
  _cfg_15.uStack_c = 0;
  _cfg_15.uStack_a = 0;
  select_two_parameter_values_by_index(&_cfg_15.uStack_15,0,&_cfg_15.uStack_14,&_cfg_15.uStack_12);
  select_two_parameter_values_by_index(&_cfg_15.uStack_15,1,&_cfg_15.uStack_10,&_cfg_15.uStack_e);
  select_two_parameter_values_by_index(&_cfg_15.uStack_15,2,&_cfg_15.uStack_c,&_cfg_15.uStack_a);
  if ((param_4 & 3) != 0) {
    if ((param_2 == _cfg_15.uStack_14) && (param_3 == _cfg_15.uStack_12)) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    }
    else if ((param_2 == _cfg_15.uStack_12) && (param_3 == _cfg_15.uStack_14)) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    }
    else if ((param_2 == _cfg_15.uStack_10) && (param_3 == _cfg_15.uStack_e)) {
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    }
    else if ((param_2 == _cfg_15.uStack_e) && (param_3 == _cfg_15.uStack_10)) {
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    }
    else if ((param_2 == _cfg_15.uStack_c) && (param_3 == _cfg_15.uStack_a)) {
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    }
    else if ((param_2 == _cfg_15.uStack_a) && (param_3 == _cfg_15.uStack_c)) {
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    }
  }
  return;
}
