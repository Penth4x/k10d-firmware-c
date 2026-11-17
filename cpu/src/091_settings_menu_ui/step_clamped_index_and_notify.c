/* @k10d step_clamped_index_and_notify @ 0x10408040
 * name: model (proposed by the local model from the decompile, confidence 0.82)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Steps a clamped index by a mode-dependent amount, stores the result, and issues virtual
 *   notifications.
 * summary:
 *   Reads a mode byte at offset 0x59 and an index at 0x5b. Computes a new index as current
 *   + param_2 * (param_3/2 + 1), clamping to 0-0x4b or 0-0xf based on mode, with wraparound
 *   via helper calls if out of range. Stores the new index and calls
 *   set_setting_by_mode_and_index. Then issues multiple virtual calls (slot 1) to notify,
 *   optionally fetching a value via select_and_copy_rodata_entry and passing it through
 *   glyph_draw before a final notify call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void step_clamped_index_and_notify(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar5 + 0x14))
            ((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar5 + 0x10),0x1120065,0);
  iVar5 = (param_3 >> 1) + 1;
  if (*(char *)((int)param_1 + 0x59) == '\0') {
    iVar1 = find_byte_in_buffer_10408282((int)param_1,(uint)*(byte *)((int)param_1 + 0x5b));
    if (iVar1 == -1) {
      uVar2 = adjust_mode_by_direction(param_1,(uint)*(byte *)((int)param_1 + 0x5b),param_2);
      iVar5 = find_byte_in_buffer_10408282((int)param_1,uVar2);
    }
    else {
      iVar5 = param_2 * iVar5 + iVar1;
      if ((iVar1 == 0x4b) && (0 < param_2)) {
        iVar5 = 0x4b;
      }
      else if ((iVar1 == 0) && (param_2 < 0)) {
        iVar5 = 0;
      }
      else if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x4b < iVar5) {
        iVar5 = 0x4b;
      }
    }
    *(uint8_t *)((int)param_1 + 0x5b) = *(uint8_t *)((int)param_1 + iVar5 + 0x5d);
  }
  else if (*(char *)((int)param_1 + 0x59) == '\x01') {
    iVar1 = find_byte_in_16_byte_array((int)param_1,(uint)*(byte *)((int)param_1 + 0x5b));
    if (iVar1 == -1) {
      uVar2 = map_index_to_group_id(param_1,(uint)*(byte *)((int)param_1 + 0x5b),param_2);
      iVar5 = find_byte_in_16_byte_array((int)param_1,uVar2);
    }
    else {
      iVar5 = param_2 * iVar5 + iVar1;
      if ((iVar1 == 0xf) && (0 < param_2)) {
        iVar5 = 0xf;
      }
      else if ((iVar1 == 0) && (param_2 < 0)) {
        iVar5 = 0;
      }
      else if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xf < iVar5) {
        iVar5 = 0xf;
      }
    }
    *(uint8_t *)((int)param_1 + 0x5b) = *(uint8_t *)((int)param_1 + iVar5 + 0xa9);
  }
  set_setting_by_mode_and_index(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x5b),
               *(uint8_t *)((int)param_1 + 0x5a));
  iVar1 = (int)param_1 + 8;
  iVar5 = menu_item_register(iVar1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  iVar5 = menu_item_register(iVar1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  if (*(byte *)((int)param_1 + 0x5b) == 0x58) {
    iVar5 = menu_item_register(iVar1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  else {
    pbVar3 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),
                                  (uint)*(byte *)((int)param_1 + 0x5b));
    pvVar4 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar4,pbVar3);
    iVar5 = menu_item_register(iVar1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  iVar5 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar5 + 0x14))
            ((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar5 + 0x10),0x1120075,0);
  return;
}
