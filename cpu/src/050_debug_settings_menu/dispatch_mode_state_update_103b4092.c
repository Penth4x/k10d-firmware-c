/* @k10d dispatch_mode_state_update_103b4092 @ 0x103b4092
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Maps a mode ID to a state index and invokes virtual methods on an object to update UI
 *   or state flags.
 * summary:
 *   The function reads a mode identifier from param_1+0x28 via
 *   call_two_helpers_in_sequence_104f1b02 and maps it to a value (0-3) stored at
 *   param_1+0x40. It then retrieves an object pointer via menu_item_register and calls
 *   virtual slot 1 (offset 0xc) and slot 14 (offset 0x74) multiple times with arguments
 *   derived from get_setting_by_mode_flag_104f147e and query_object_byte_property_104f1ab6.
 *   The logic branches on the mapped state and specific mode values (e.g., 0xa, 0xb, 0xc,
 *   0x11) to determine the arguments passed to the virtual calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_update_103b4092(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = call_two_helpers_in_sequence_104f1b02(*(uint32_t *)((int)param_1 + 0x28));
  switch(uVar1) {
  case 6:
  case 8:
  case 0xc:
    *(uint32_t *)((int)param_1 + 0x40) = 0;
    break;
  case 10:
    *(uint32_t *)((int)param_1 + 0x40) = 1;
    break;
  case 0xe:
  case 0x16:
  case 0x1c:
  case 0x1e:
    *(uint32_t *)((int)param_1 + 0x40) = 2;
    break;
  case 0x18:
    *(uint32_t *)((int)param_1 + 0x40) = 3;
  }
  iVar4 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = get_setting_by_mode_flag_104f147e(*(uint32_t *)((int)param_1 + 0x28),0);
  bVar5 = iVar2 != 5;
  iVar2 = *(int *)((int)param_1 + 0x40);
  if (iVar2 == 0) {
    iVar2 = menu_item_register(iVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    uVar3 = query_object_byte_property_104f1ab6(*(int *)((int)param_1 + 0x28));
    if (uVar3 == 10) {
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),0);
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),0);
    }
    else {
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),bVar5);
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),1);
    }
  }
  else if (iVar2 == 1) {
    iVar2 = menu_item_register(iVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (iVar2 == 2) {
    iVar2 = menu_item_register(iVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    uVar3 = query_object_byte_property_104f1ab6(*(int *)((int)param_1 + 0x28));
    if ((uVar3 == 0xb) || (uVar3 = query_object_byte_property_104f1ab6(*(int *)((int)param_1 + 0x28)), uVar3 == 0xc)) {
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),0);
      iVar2 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),0);
    }
    else {
      iVar2 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),bVar5);
      iVar2 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),1);
    }
  }
  else if (iVar2 == 3) {
    iVar2 = menu_item_register(iVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    uVar3 = query_object_byte_property_104f1ab6(*(int *)((int)param_1 + 0x28));
    if (uVar3 == 0x11) {
      iVar2 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),0);
    }
    else {
      iVar2 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x70),bVar5);
    }
  }
  return;
}
