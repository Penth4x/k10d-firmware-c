/* @k10d dispatch_state_update_by_id @ 0x103d9656
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_3 in the object and conditionally calls helper functions based on param_2
 *   and param_3 values.
 * summary:
 *   The function writes param_3 to offset 5 of the object pointed to by param_1. It
 *   branches on param_3 (checking for values 0x11, 0xe, 7, 0, 1, 3) and param_2 (checking
 *   for specific 0x18xxxxx constants). Depending on the match, it calls
 *   apply_setting_from_table with a computed index and a byte from the object, optionally
 *   sets a byte at offset 0x23 to 0x8c, and calls get_setting_by_index and
 *   invoke_virtual_slot_one_on_objects. The specific subsystem is not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_update_by_id(int *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1[5] = param_3;
  if ((param_3 == 0x11) || (param_3 == 0xe)) {
    if (param_2 == 0x1800027) {
      apply_setting_from_table(param_1,0xb,(uint)*(byte *)(param_1 + 8));
      uVar1 = get_setting_by_index((int)param_1,0xb);
      invoke_virtual_slot_one_on_objects(param_1,uVar1);
    }
    else {
      if (param_2 == 0x180005a) {
        iVar2 = 0xc;
      }
      else if (param_2 == 0x1800034) {
        iVar2 = 0xd;
      }
      else if (param_2 == 0x180003e) {
        iVar2 = 0xe;
      }
      else {
        if (param_2 != 0x1800048) {
          return (int)param_1;
        }
        iVar2 = 0xf;
      }
      apply_setting_from_table(param_1,iVar2,(uint)*(byte *)((int)param_1 + 0x21));
    }
  }
  else if ((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) {
    if (param_2 == 0x1800027) {
      apply_setting_from_table(param_1,0xb,(uint)*(byte *)(param_1 + 8));
      *(uint8_t *)((int)param_1 + 0x23) = 0x8c;
      uVar1 = get_setting_by_index((int)param_1,0xb);
      invoke_virtual_slot_one_on_objects(param_1,uVar1);
      param_1 = (int *)0x0;
    }
    else {
      if (param_2 == 0x180005a) {
        iVar2 = 0xc;
      }
      else if (param_2 == 0x1800034) {
        iVar2 = 0xd;
      }
      else if (param_2 == 0x180003e) {
        iVar2 = 0xe;
      }
      else {
        if (param_2 != 0x1800048) {
          return (int)param_1;
        }
        iVar2 = 0xf;
      }
      apply_setting_from_table(param_1,iVar2,(uint)*(byte *)((int)param_1 + 0x21));
      *(uint8_t *)((int)param_1 + 0x23) = 0x8c;
      param_1 = (int *)0x0;
    }
  }
  return (int)param_1;
}
