/* @k10d dispatch_timer_event_handler @ 0x103e4576
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Handles specific event codes by toggling virtual object states and scheduling delayed
 *   callbacks.
 * summary:
 *   The function branches on param_2 (0x10036 or 0x10034). For 0x10036, it checks byte
 *   flags at offsets 0xe and 0x3b in param_1 to determine a sequence of virtual calls (slot
 *   2) via menu_item_register, then calls set_flg_obj. For 0x10034, it branches on *param_3
 *   (0, 1, or 3) to perform similar virtual state toggles, call
 *   init_object_with_hash_and_flag with a duration, and schedule a callback via
 *   check_heap_alloc_success with a timeout value (1000 or 2000).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_timer_event_handler(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == 0x10036) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else if (*(char *)((int)param_1 + 0x3b) == '\0') {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      pvVar2 = (void *)menu_item_register(*param_1);
      (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
                ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
      init_object_with_hash_and_flag(pvVar2,0);
    }
    else {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    set_flg_obj(param_1 + 8);
  }
  else if (param_2 == 0x10034) {
    iVar1 = *param_3;
    if (iVar1 == 3) {
      pvVar2 = (void *)menu_item_register(*param_1);
      (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
                ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
      init_object_with_hash_and_flag(pvVar2,100);
    }
    else {
      if (iVar1 == 0) {
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        pvVar2 = (void *)menu_item_register(*param_1);
        (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
                  ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
        init_object_with_hash_and_flag(pvVar2,100);
        iVar1 = 1000;
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        iVar1 = 2000;
      }
      *(uint8_t *)((int)param_1 + 0x36) = 0;
      check_heap_alloc_success(param_1 + 6,iVar1);
    }
  }
  return 0;
}
