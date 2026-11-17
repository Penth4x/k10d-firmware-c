/* @k10d dispatch_mode_event_handler_103bfe0e @ 0x103bfe0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Handles specific event codes by updating object state and invoking virtual methods on a
 *   related object.
 * summary:
 *   Stores the event code in the object and branches based on the code value. For codes
 *   0x1020020, 0x102001e, and 0x102001f, it repeatedly calls virtual slot 2 of an object
 *   obtained via menu_item_register. For other codes, it sets a byte at offset 0xc from a
 *   global constant, calls render_two_objects_by_setting_103c09ec, and then calls
 *   split_value_and_write_fields with values retrieved via get_setting_by_index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_event_handler_103bfe0e(int *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[7] = param_2;
  if (((param_2 == 0x1020020) || (param_2 == 0x102001e)) || (param_2 == 0x102001f)) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    if ((*(ushort *)(param_1 + 3) & 1) == 1) {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    if (*(char *)((int)param_1 + 0x37) == '\0') {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
      uVar2 = get_setting_by_index((int)param_1,5);
      uVar3 = get_setting_by_index((int)param_1,0x47);
      uVar4 = get_setting_by_index((int)param_1,0xb);
      split_value_and_write_fields(param_1,uVar2,uVar3,uVar4);
    }
    else {
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    return;
  }
  if ((param_2 == 0x1020014) || (param_2 == 0x1020015)) {
    *(uint8_t *)(param_1 + 0xc) = DAT_10594f70/*ROM*/;
    render_two_objects_by_setting_103c09ec(param_1);
    uVar6 = (uint)*(byte *)(param_1 + 0xc);
    uVar5 = get_setting_by_index((int)param_1,0x47);
  }
  else {
    if ((param_2 == 0x1020017) || (param_2 == 0x1020018)) {
      *(uint8_t *)(param_1 + 0xc) = DAT_10594f71/*ROM*/;
      render_two_objects_by_setting_103c09ec(param_1);
      uVar6 = (uint)*(byte *)(param_1 + 0xc);
      uVar5 = get_setting_by_index((int)param_1,0x47);
      uVar2 = 0;
      goto LAB_103c0274;
    }
    if ((param_2 == 0x102001a) || (param_2 == 0x102001b)) {
      *(uint8_t *)(param_1 + 0xc) = DAT_10594f72/*ROM*/;
      render_two_objects_by_setting_103c09ec(param_1);
      uVar6 = (uint)*(byte *)(param_1 + 0xc);
      uVar5 = get_setting_by_index((int)param_1,0x47);
      uVar2 = 0;
      goto LAB_103c0274;
    }
    if (param_2 == 0x102002d) {
      iVar1 = get_setting_by_index((int)param_1,5);
      if (iVar1 != 0) {
        iVar1 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        if ((*(ushort *)(param_1 + 3) & 1) == 1) {
          iVar1 = menu_item_register(*param_1);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        }
        else {
          iVar1 = menu_item_register(*param_1);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        }
        if (*(char *)((int)param_1 + 0x37) == '\0') {
          iVar1 = menu_item_register(*param_1);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
          uVar2 = get_setting_by_index((int)param_1,5);
          uVar3 = get_setting_by_index((int)param_1,0x47);
          uVar4 = get_setting_by_index((int)param_1,0xb);
          split_value_and_write_fields(param_1,uVar2,uVar3,uVar4);
        }
        else {
          iVar1 = menu_item_register(*param_1);
          (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        }
      }
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar1 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      return;
    }
    if (param_2 == 0x1020028) {
      *(uint8_t *)(param_1 + 0xc) = DAT_10594f73/*ROM*/;
      render_two_objects_by_setting_103c09ec(param_1);
      iVar1 = get_setting_by_index((int)param_1,5);
      if (iVar1 == 0) {
        return;
      }
      uVar6 = get_setting_by_index((int)param_1,5);
      uVar5 = (uint)*(byte *)(param_1 + 0xc);
    }
    else {
      if (param_2 != 0x102002a) {
        return;
      }
      *(uint8_t *)(param_1 + 0xc) = DAT_10594f74/*ROM*/;
      render_two_objects_by_setting_103c09ec(param_1);
      iVar1 = get_setting_by_index((int)param_1,5);
      if (iVar1 == 0) {
        return;
      }
      uVar6 = get_setting_by_index((int)param_1,5);
      uVar5 = (uint)*(byte *)(param_1 + 0xc);
    }
  }
  uVar2 = get_setting_by_index((int)param_1,0xb);
LAB_103c0274:
  split_value_and_write_fields(param_1,uVar6,uVar5,uVar2);
  return;
}
