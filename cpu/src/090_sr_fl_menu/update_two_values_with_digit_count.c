/* @k10d update_two_values_with_digit_count @ 0x103ffca6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Reads a byte from param_1, maps it to two values via a table, computes digit counts,
 *   and updates two objects via virtual calls.
 * summary:
 *   The function retrieves a byte at offset 8 of param_1. It calls menu_item_register to
 *   get an object pointer and invokes a virtual method (slot 2) with argument 1 twice. If
 *   the byte is 0, it calls the same virtual method with 0 twice. Otherwise, it looks up a
 *   value in a table at DAT_10598388, determines the number of digits (1, 2, or 3) based on
 *   the value's magnitude, and calls menu_list_build. It then calls
 *   send_mode_specific_commands. Finally, if the byte is 0x21, it calls the virtual method
 *   with 0 twice; otherwise, it performs a similar table lookup and update for a second
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_values_with_digit_count(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  ushort uStack_a;
  
  uStack_a = 0;
  uVar3 = (uint)*(byte *)(param_1 + 8);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  if (uVar3 == 0) {
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    uStack_a = *(ushort *)(&DAT_10598388/*ROM*/ + (uVar3 - 1) * 2);
    uVar4 = menu_item_register(*param_1);
    uVar2 = 3;
    if ((uStack_a < 100) && (9 < uStack_a)) {
      uVar2 = 2;
    }
    else if (uStack_a < 10) {
      uVar2 = 1;
    }
    menu_list_build((int *)(uVar4),(uint16_t *)(&uStack_a),(uint8_t)(uVar2),(uint8_t)(1));
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  send_mode_specific_commands(param_1,uVar3);
  if (uVar3 == 0x21) {
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    uStack_a = *(ushort *)(&DAT_10598388/*ROM*/ + (uVar3 + 1) * 2);
    uVar4 = 3;
    if ((uStack_a < 100) && (9 < uStack_a)) {
      uVar4 = 2;
    }
    else if (uStack_a < 10) {
      uVar4 = 1;
    }
    uVar2 = menu_item_register(*param_1);
    menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(uVar4),(uint8_t)(1));
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
