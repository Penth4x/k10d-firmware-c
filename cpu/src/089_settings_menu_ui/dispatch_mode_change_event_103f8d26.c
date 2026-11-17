/* @k10d dispatch_mode_change_event_103f8d26 @ 0x103f8d26
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Handles a mode-change event by updating state, adjusting a parameter, and invoking a
 *   virtual callback.
 * summary:
 *   The function branches on param_2 (event ID) and param_1[6] (sub-state). For specific
 *   events (0xd, 0xe), it acquires an object via menu_item_register, disables it, adjusts a
 *   byte at offset 0x22 (increment/decrement with wrap-around), calls
 *   set_level_state_and_notify and compute_ev_offset_and_dispatch, and then invokes a
 *   virtual method (slot at offset 0xf4) with values from a lookup table at 0x8001cca0. For
 *   other events, it calls register_nine_menu_items_103fa390 and sets a byte at offset 0x36
 *   to a specific value (e.g., 0x8c, 0x50). It also uses setting_set to persist values for
 *   event 0x11.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f8d3e) overlaps instruction at (ram,0x103f8d3c)
    */

int * dispatch_mode_change_event_103f8d26(int *param_1,int param_2)

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
    param_1[5] = 0xe;
    if (param_1[6] == 0x18f0011) {
      iVar8 = menu_item_register(*param_1);
      forward_two_args_to_helper_10493bf8((void *)iVar8,0);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      if (*(char *)((int)param_1 + 0x23) == '\x01') {
        uVar4 = 6;
      }
      else {
        uVar4 = (uint)(byte)(*(char *)((int)param_1 + 0x23) - 1);
      }
      *(uint8_t *)((int)param_1 + 0x22) = *(uint8_t *)(uVar4 + 0x10597d15/*ROM*/);
      set_level_state_and_notify(param_1, __frv_reg_unset(5));
      compute_ev_offset_and_dispatch(param_1);
      iVar8 = menu_item_register(*param_1);
      uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)*(byte *)((int)param_1 + 0x22) * 4);
      uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2);
      pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
      sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
      *(uint16_t *)(puVar9 + 2) = 0xc;
      *(uint16_t *)(puVar9 + 6) = 0xc;
      (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
      forward_two_args_to_helper_10493bf8((void *)iVar8,1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
    }
    else if (param_1[6] == 0x18f005d) {
      iVar8 = menu_item_register(*param_1);
      forward_two_args_to_helper_10493bf8((void *)iVar8,0);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      if (*(char *)((int)param_1 + 0x22) == '\0') {
        cVar5 = 'F';
      }
      else {
        cVar5 = *(char *)((int)param_1 + 0x22) + -1;
      }
      *(char *)((int)param_1 + 0x22) = cVar5;
      set_level_state_and_notify(param_1,*(uint8_t *)((int)param_1 + 0x22));
      compute_ev_offset_and_dispatch(param_1);
      iVar8 = menu_item_register(*param_1);
      uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)*(byte *)((int)param_1 + 0x22) * 4);
      uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2);
      pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
      sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
      *(uint16_t *)(puVar10 + 2) = 0xc;
      *(uint16_t *)(puVar10 + 6) = 0xc;
      (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
      forward_two_args_to_helper_10493bf8((void *)iVar8,1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
    }
  }
  else {
    param_1[5] = param_2;
    if (param_2 == 0xd) {
      if (param_1[6] == 0x18f0011) {
        iVar8 = menu_item_register(*param_1);
        forward_two_args_to_helper_10493bf8((void *)iVar8,0);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        iVar8 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        if (*(char *)((int)param_1 + 0x23) == '\x06') {
          uVar4 = 1;
        }
        else {
          uVar4 = (uint)(byte)(*(char *)((int)param_1 + 0x23) + 1);
        }
        *(uint8_t *)((int)param_1 + 0x22) = *(uint8_t *)(uVar4 + 0x10597d0f/*ROM*/);
        set_level_state_and_notify(param_1, __frv_reg_unset(5));
        compute_ev_offset_and_dispatch(param_1);
        iVar8 = menu_item_register(*param_1);
        uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)*(byte *)((int)param_1 + 0x22) * 4);
        uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2);
        pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
        sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
        *(uint16_t *)(puVar11 + 2) = 0xc;
        *(uint16_t *)(puVar11 + 6) = 0xc;
        (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
        forward_two_args_to_helper_10493bf8((void *)iVar8,1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
        iVar8 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      }
      else if (param_1[6] == 0x18f005d) {
        iVar8 = menu_item_register(*param_1);
        forward_two_args_to_helper_10493bf8((void *)iVar8,0);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        iVar8 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
        if (*(char *)((int)param_1 + 0x22) == 'F') {
          *(uint8_t *)((int)param_1 + 0x22) = 0;
        }
        else {
          *(char *)((int)param_1 + 0x22) = *(char *)((int)param_1 + 0x22) + '\x01';
        }
        set_level_state_and_notify(param_1,*(uint8_t *)((int)param_1 + 0x22));
        compute_ev_offset_and_dispatch(param_1);
        iVar8 = menu_item_register(*param_1);
        uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)*(byte *)((int)param_1 + 0x22) * 4);
        uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2);
        pcVar7 = *(code **)(*(int *)(iVar8 + 0xc) + 0xf4);
        sVar1 = *(short *)(*(int *)(iVar8 + 0xc) + 0xf0);
        *(uint16_t *)(puVar12 + 2) = 0xc;
        *(uint16_t *)(puVar12 + 6) = 0xc;
        (*pcVar7)(sVar1 + iVar8,0x10,uVar2,uVar3);
        forward_two_args_to_helper_10493bf8((void *)iVar8,1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
        iVar8 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      }
    }
    else if (param_2 == 0xc) {
      register_nine_menu_items_103fa390(param_1);
      param_1 = (int *)get_or_init_singleton_object_103f21a6();
    }
    else if (param_2 == 0x11) {
      setting_set(param_1[2],0xa6,(uint)*(byte *)((int)param_1 + 0x22));
      setting_set(param_1[2],0xa8,(uint)*(byte *)(param_1 + 9));
      register_nine_menu_items_103fa390(param_1);
      param_1 = (int *)get_or_init_singleton_object_103f21a6();
    }
    else {
      if ((((param_2 == 7) || (param_2 == 0)) || (param_2 == 1)) || (param_2 == 3)) {
        register_nine_menu_items_103fa390(param_1);
        uVar6 = 0x8c;
      }
      else if ((param_2 == 0x19) || (param_2 == 9)) {
        register_nine_menu_items_103fa390(param_1);
        uVar6 = 0x50;
      }
      else if (param_2 == 0x18) {
        register_nine_menu_items_103fa390(param_1);
        uVar6 = 0xb4;
      }
      else if (param_2 == 0x2c) {
        register_nine_menu_items_103fa390(param_1);
        uVar6 = 0x8c;
      }
      else {
        if (param_2 != 10) {
          return param_1;
        }
        register_nine_menu_items_103fa390(param_1);
        uVar6 = 200;
      }
      *(uint8_t *)((int)param_1 + 0x36) = uVar6;
      param_1 = (int *)0x0;
    }
  }
  return param_1;
}
