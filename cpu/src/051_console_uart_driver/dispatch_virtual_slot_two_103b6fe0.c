/* @k10d dispatch_virtual_slot_two_103b6fe0 @ 0x103b6fe0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a virtual object and invokes its slot 2 method with argument 0, then
 *   conditionally invokes it again with argument 1 based on a helper return value.
 * summary:
 *   The function calls menu_item_register to obtain a virtual object pointer and invokes
 *   virtual slot 2 (offset 0xc) with argument 0 twice. It then calls
 *   get_setting_by_mode_index_104f0e20; if the result is 0x58, it invokes slot 2 with
 *   argument 1. Otherwise, it calls select_and_copy_rodata_entry to get a pointer and
 *   passes it to glyph_draw before invoking slot 2 with argument 1. The specific subsystem
 *   is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_103b6fe0(void *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  
  iVar1 = get_setting_by_mode_flag_104f0946(*(int *)((int)param_1 + 0x28));
  iVar5 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar5);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar5);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar1 = get_setting_by_mode_index_104f0e20(*(int *)((int)param_1 + 0x28),iVar1);
  if (iVar1 == 0x58) {
    iVar1 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    pbVar3 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),iVar1);
    pvVar4 = (void *)menu_item_register(iVar5);
    glyph_draw(pvVar4,pbVar3);
    iVar1 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
