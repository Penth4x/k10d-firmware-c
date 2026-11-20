/* @k10d dispatch_mode_change_event_103fc4e6 @ 0x103fc4e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Handles mode change events by updating state, adjusting parameters, and triggering UI
 *   updates.
 * summary:
 *   The function branches on param_2 (event type) and param_1[6] (sub-state). For specific
 *   events (0xd, 0xe), it adjusts a byte at offset 0x22, calls set_exposure_mode_state and
 *   dispatch_state_based_on_setting, and invokes a virtual method to update a display or UI
 *   element. For other events, it calls register_nine_menu_items_103fd884 and sets a flag
 *   at offset 0x32. It also persists settings via setting_set for event 0x11.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103fc4fe) overlaps instruction at (ram,0x103fc4fc)
    */

cls_10597dcc * dispatch_mode_change_event_103fc4e6(cls_10597dcc *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint uVar4;
  char cVar5;
  uint8_t uVar6;
  code *pcVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t *puVar10;
  uint8_t *puVar11;
  uint8_t *puVar12;
  uint8_t auStack_24 [8];
  
  puVar9 = auStack_24;
  puVar10 = auStack_24;
  puVar11 = auStack_24;
  puVar12 = auStack_24;
  if (param_2 == 0xe) {
    param_1->field_0x14 = 0xe;
    if (param_1->field_0x18 == 0x18e0011) {
      iVar8 = menu_item_register((int)param_1->field_0x0);
      forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(0));
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      if (param_1->field_0x23 == '\x01') {
        uVar4 = 6;
      }
      else {
        uVar4 = (uint)(byte)(param_1->field_0x23 - 1);
      }
      param_1->field_0x22 = *(uint8_t *)(uVar4 + 0x10597dc5/*ROM*/);
      set_exposure_mode_state(param_1, __frv_reg_unset(5));
      dispatch_state_based_on_setting(param_1);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
      uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
      pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
      sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
      *(uint16_t *)(puVar9 + 2) = 0xc;
      *(uint16_t *)(puVar9 + 6) = 0xc;
      (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
      forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(1));
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
    }
    else if (param_1->field_0x18 == 0x18e005d) {
      iVar8 = menu_item_register((int)param_1->field_0x0);
      forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(0));
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      if (param_1->field_0x22 == '\0') {
        cVar5 = 'F';
      }
      else {
        cVar5 = param_1->field_0x22 + -1;
      }
      param_1->field_0x22 = cVar5;
      set_exposure_mode_state(param_1,param_1->field_0x22);
      dispatch_state_based_on_setting(param_1);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
      uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
      pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
      sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
      *(uint16_t *)(puVar10 + 2) = 0xc;
      *(uint16_t *)(puVar10 + 6) = 0xc;
      (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
      forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(1));
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
    }
  }
  else {
    param_1->field_0x14 = param_2;
    if (param_2 == 0xd) {
      if (param_1->field_0x18 == 0x18e0011) {
        iVar8 = menu_item_register((int)param_1->field_0x0);
        forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(0));
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        if (param_1->field_0x23 == '\x06') {
          uVar4 = 1;
        }
        else {
          uVar4 = (uint)(byte)(param_1->field_0x23 + 1);
        }
        param_1->field_0x22 = *(uint8_t *)(uVar4 + 0x10597dbf/*ROM*/);
        set_exposure_mode_state(param_1, __frv_reg_unset(5));
        dispatch_state_based_on_setting(param_1);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
        uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
        pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
        sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
        *(uint16_t *)(puVar11 + 2) = 0xc;
        *(uint16_t *)(puVar11 + 6) = 0xc;
        (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
        forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(1));
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      }
      else if (param_1->field_0x18 == 0x18e005d) {
        iVar8 = menu_item_register((int)param_1->field_0x0);
        forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(0));
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        if (param_1->field_0x22 == 'F') {
          param_1->field_0x22 = 0;
        }
        else {
          param_1->field_0x22 = param_1->field_0x22 + '\x01';
        }
        set_exposure_mode_state(param_1,param_1->field_0x22);
        dispatch_state_based_on_setting(param_1);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
        uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
        pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
        sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
        *(uint16_t *)(puVar12 + 2) = 0xc;
        *(uint16_t *)(puVar12 + 6) = 0xc;
        (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
        forward_two_args_to_helper_10493bf8((int *)(iVar8),(uint8_t)(1));
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
        iVar8 = menu_item_register((int)param_1->field_0x0);
        (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      }
    }
    else if (param_2 == 0xc) {
      register_nine_menu_items_103fd884(param_1);
      param_1 = (cls_10597dcc *)get_or_init_singleton_object_103f21a6();
    }
    else if (param_2 == 0x11) {
      setting_set(param_1->field_0x8,0xa5,(uint)(byte)param_1->field_0x22);
      setting_set(param_1->field_0x8,0xa7,(uint)(byte)param_1->field_0x24);
      first_run_set_flag_b(param_1->field_0x8,1);
      register_nine_menu_items_103fd884(param_1);
      param_1 = (cls_10597dcc *)get_or_init_singleton_object_103f21a6();
    }
    else {
      if ((((param_2 == 7) || (param_2 == 0)) || (param_2 == 1)) || (param_2 == 3)) {
        register_nine_menu_items_103fd884(param_1);
        uVar6 = 0x8c;
      }
      else if ((param_2 == 0x19) || (param_2 == 9)) {
        register_nine_menu_items_103fd884(param_1);
        uVar6 = 0x50;
      }
      else if (param_2 == 0x18) {
        register_nine_menu_items_103fd884(param_1);
        uVar6 = 0xb4;
      }
      else if (param_2 == 0x2c) {
        register_nine_menu_items_103fd884(param_1);
        uVar6 = 0x8c;
      }
      else {
        if (param_2 != 10) {
          return param_1;
        }
        register_nine_menu_items_103fd884(param_1);
        uVar6 = 200;
      }
      param_1->field_0x32 = uVar6;
      param_1 = (cls_10597dcc *)0x0;
    }
  }
  return param_1;
}
