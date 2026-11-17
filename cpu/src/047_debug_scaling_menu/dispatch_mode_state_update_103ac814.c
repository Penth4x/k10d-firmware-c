/* @k10d dispatch_mode_state_update_103ac814 @ 0x103ac814
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Dispatches on a mode byte at offset 0x48 to invoke virtual methods and state helpers.
 * summary:
 *   The function reads a mode identifier from param_1+0x48 and branches on its value. For
 *   specific cases (6, 8, 0xc, 0xe, 0x16, 0x18), it calls helper functions
 *   (get_setting_199, get_setting_0xc4, etc.) to determine sub-states and then invokes
 *   virtual methods via menu_item_register. Other cases either perform no action or call
 *   the virtual method once. It also checks flags at offsets 0x4b, 0x4c, and 0x4d to modify
 *   the dispatch logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_update_103ac814(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = get_setting_at_offset_0xbc(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 2) {
    query_object_via_temp_buffer_104f1a6c(*(uint32_t *)((int)param_1 + 0x28));
  }
  else if ((2 < *(byte *)((int)param_1 + 0x4b)) &&
          (((*(char *)((int)param_1 + 0x4d) != '\0' || (*(char *)((int)param_1 + 0x4c) != '\0')) &&
           (iVar1 = query_object_byte_at_offset(*(uint32_t *)((int)param_1 + 0x28)), iVar1 != 0)))) {
    get_setting_at_offset_0xbc(*(int *)((int)param_1 + 0x28));
  }
  iVar1 = menu_item_register(iVar2);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
    iVar1 = get_setting_199(*(int *)((int)param_1 + 0x28));
    if ((iVar1 == 3) || (iVar1 = get_setting_199(*(int *)((int)param_1 + 0x28)), iVar1 == 4)) {
      if ((*(char *)((int)param_1 + 0x4c) == '\0') &&
         ((*(char *)((int)param_1 + 0x4d) == '\0' && (*(char *)((int)param_1 + 0x4b) != '\0')))) {
        iVar1 = menu_item_register((int)param_1 + 8);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
      else {
        iVar1 = menu_item_register(iVar2);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        iVar1 = menu_item_register(iVar2);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
    }
    else {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
    break;
  case 8:
    iVar1 = get_setting_0xc4(*(int *)((int)param_1 + 0x28));
    if ((iVar1 == 0) || (iVar1 == 4)) {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else if ((iVar1 == 1) || (iVar1 == 2)) {
      iVar1 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else if (iVar1 == 3) {
      iVar1 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      iVar1 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  case 10:
  case 0x1c:
    iVar1 = menu_item_register(iVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    break;
  case 0xc:
    iVar1 = get_setting_0xc5(*(int *)((int)param_1 + 0x28));
    if (iVar1 == 0) {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else if ((iVar1 == 1) || (iVar1 == 2)) {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      iVar1 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  case 0xe:
    iVar1 = get_setting_0xc6(*(int *)((int)param_1 + 0x28));
    if ((iVar1 == 3) || (iVar1 = get_setting_0xc6(*(int *)((int)param_1 + 0x28)), iVar1 == 4)) {
      if ((*(char *)((int)param_1 + 0x4c) == '\0') &&
         ((*(char *)((int)param_1 + 0x4d) == '\0' && (*(char *)((int)param_1 + 0x4b) != '\0')))) {
        iVar1 = menu_item_register((int)param_1 + 8);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
      else {
        iVar1 = menu_item_register(iVar2);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        iVar1 = menu_item_register(iVar2);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
    }
    else {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  case 0x16:
  case 0x1e:
    iVar1 = get_setting_200(*(int *)((int)param_1 + 0x28));
    if (iVar1 == 0) {
      if (*(char *)((int)param_1 + 0x4d) == '\0') {
        if (*(char *)((int)param_1 + 0x4c) == '\0') {
          iVar1 = menu_item_register((int)param_1 + 8);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        }
        else {
          iVar1 = menu_item_register((int)param_1 + 8);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        }
      }
      else {
        iVar1 = menu_item_register(iVar2);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
    }
    else if (iVar1 == 1) {
      if ((*(char *)((int)param_1 + 0x4d) == '\0') && (*(char *)((int)param_1 + 0x4c) == '\0')) {
        iVar1 = menu_item_register((int)param_1 + 8);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
      else {
        iVar1 = menu_item_register((int)param_1 + 8);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
    }
    else if (iVar1 == 2) {
      if (*(char *)((int)param_1 + 0x4d) == '\0') {
        if (*(char *)((int)param_1 + 0x4c) == '\0') {
          iVar1 = menu_item_register((int)param_1 + 8);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        }
        else {
          iVar1 = menu_item_register((int)param_1 + 8);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        }
      }
      else {
        iVar1 = menu_item_register((int)param_1 + 8);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      }
    }
    else {
      iVar1 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  case 0x18:
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      iVar1 = menu_item_register(iVar2);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    break;
  default:
  }
  return;
}
