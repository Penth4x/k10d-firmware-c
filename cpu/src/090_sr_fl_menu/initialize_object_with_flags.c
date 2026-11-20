/* @k10d initialize_object_with_flags @ 0x10406f96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Initializes a C++ object by setting flags, calling virtual constructors, and
 *   configuring internal state.
 * summary:
 *   The function clears specific bytes in the object, stores a pointer to a global context,
 *   and sets boolean flags based on param_2. It invokes a virtual method if a specific byte
 *   is zero, then calls several helper functions to initialize sub-objects and compute
 *   values stored in the object's fields. It performs conditional logic involving virtual
 *   calls and data copying before finalizing the initialization with additional helper
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_flags(cls_105992d4 *param_1,uint param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char extraout_r4;
  byte *pbVar4;
  void *pvVar5;
  uint8_t *puVar6;
  
  param_1->field_0xbd = '\0';
  param_1->field_0xbe = 0;
  iVar1 = get_or_create_singleton_object_1050b118();
  *(uint8_t **)(iVar1 + 0x58) = &param_1->field_0x40;
  param_1->field_0xba = (param_2 & 1) != 0;
  param_1->field_0xbb = (param_2 & 0x10) != 0;
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  compute_and_send_two_offsets_1040848e(param_1);
  puVar6 = &param_1->field_0x8;
  call_helper_on_fetched_object(puVar6,0x10);
  call_helper_on_fetched_object(puVar6,0xf);
  call_helper_on_fetched_object(puVar6,0xd);
  call_helper_on_fetched_object(puVar6,0xe);
  uVar2 = get_setting_by_mode_flag_104f07f4(param_1->field_0x28);
  param_1->field_0x54 = (char)uVar2;
  uVar3 = check_object_property_43(param_1->field_0x28);
  param_1->field_0xbc = (char)uVar3;
  read_setting_by_index(param_1->field_0x28,(uint)(byte)param_1->field_0x54);
  param_1->field_0x57 = extraout_r4;
  uVar2 = get_setting_by_index_and_mode(param_1->field_0x28,(uint)(byte)param_1->field_0x54);
  param_1->field_0x58 = (char)uVar2;
  param_1->field_0x55 = param_1->field_0x57;
  param_1->field_0x56 = (char)uVar2;
  set_mode_index_and_dispatch_10407a52(param_1,(uint)(byte)param_1->field_0x57);
  set_mode_index_and_dispatch_10407c62(param_1,(uint)(byte)param_1->field_0x58);
  iVar1 = menu_item_register((int)puVar6);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = check_mode_byte_is_special(param_1);
  if (iVar1 != 0) {
    iVar1 = menu_item_register((int)puVar6);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    uVar2 = get_setting_by_mode_flag_104f0946(param_1->field_0x28);
    param_1->field_0x5a = (char)uVar2;
    uVar2 = get_setting_0xc3(param_1->field_0x28);
    param_1->field_0x59 = (char)uVar2;
    uVar2 = get_setting_by_mode_index_104f0e20(param_1->field_0x28,(uint)(byte)param_1->field_0x5a);
    param_1->field_0x5b = (byte)uVar2;
    *(byte *)&param_1->field_0x5c = (byte)uVar2;
    pbVar4 = (byte *)select_and_copy_rodata_entry(param_1->field_0x28,uVar2);
    if (param_1->field_0x5b == 0x58) {
      iVar1 = menu_item_register((int)puVar6);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      iVar1 = menu_item_register((int)puVar6);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else {
      iVar1 = menu_item_register((int)puVar6);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      pvVar5 = (void *)menu_item_register((int)puVar6);
      glyph_draw(pvVar5,pbVar4);
      iVar1 = menu_item_register((int)puVar6);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
  }
  configure_menu_items_by_mode(param_1);
  update_viewfinder_overlay(param_1);
  if (((param_2 & 2) == 0) || ((param_2 & 8) == 0)) {
    iVar1 = menu_item_register((int)puVar6);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    iVar1 = menu_item_register((int)puVar6);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = *(int *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120075,0);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar6,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar6);
  request_ui_sync_with_flag_10491f5c(puVar6,1);
  iVar1 = *(int *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120064,0);
  return;
}
