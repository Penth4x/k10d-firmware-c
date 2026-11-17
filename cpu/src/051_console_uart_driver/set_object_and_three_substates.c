/* @k10d set_object_and_three_substates @ 0x103b6dbe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Sets a virtual state on an object and three sub-objects based on a mode parameter.
 * summary:
 *   The function retrieves an object from param_1+8 via menu_item_register and calls its
 *   virtual slot 2 to set a state to 0, then to param_2. If param_2 is non-zero, it
 *   processes three sub-objects (indices 0xc, 0xd, 0xe) from param_1+0x28. For each, it
 *   checks a property via get_setting_by_mode_index_104f0e20; if the value is 0x58, it sets
 *   the sub-state to 1, otherwise it retrieves data via select_and_copy_rodata_entry,
 *   passes it to glyph_draw, and sets the state to 1. Finally, it sets the main object's
 *   state to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_and_three_substates(void *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  if (param_2 != 0) {
    iVar1 = get_setting_by_mode_index_104f0e20(*(int *)((int)param_1 + 0x28),0xc);
    if (iVar1 == 0x58) {
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      pbVar2 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),iVar1);
      pvVar3 = (void *)menu_item_register(iVar4);
      glyph_draw(pvVar3,pbVar2);
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = get_setting_by_mode_index_104f0e20(*(int *)((int)param_1 + 0x28),0xd);
    if (iVar1 == 0x58) {
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      pbVar2 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),iVar1);
      pvVar3 = (void *)menu_item_register(iVar4);
      glyph_draw(pvVar3,pbVar2);
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = get_setting_by_mode_index_104f0e20(*(int *)((int)param_1 + 0x28),0xe);
    if (iVar1 == 0x58) {
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      pbVar2 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),iVar1);
      pvVar3 = (void *)menu_item_register(iVar4);
      glyph_draw(pvVar3,pbVar2);
      iVar1 = menu_item_register(iVar4);
      (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    iVar1 = menu_item_register(iVar4);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
