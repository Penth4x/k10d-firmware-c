/* @k10d build_menu_with_setting_items @ 0x103f0bd8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on objects retrieved from a container, with conditional data
 *   writes based on a lookup value.
 * summary:
 *   The function repeatedly calls menu_item_register to obtain object pointers and invokes
 *   virtual method slot 2 (offset 0xc) on them. It performs this in three batches of five
 *   calls, followed by two more. It then queries get_setting_by_index with argument 0x21
 *   and compares the result against a table at 0x10597a55 to determine an index. Depending
 *   on this index (0xc, 0xd, or 0xe), it may write data from a table at 0x10597aaa to an
 *   object via menu_list_build before invoking the virtual method again with argument 1.
 *   Finally, it calls get_setting_by_index with values derived from the determined index
 *   and invokes the virtual method twice more.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_with_setting_items(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uintptr_t sp;
  int iStack_c8;
  int iStack_c4;
  uint16_t uStack_a;
  
  uStack_a = 0;
  iVar5 = 2;
  do {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iStack_c8 = 2;
  do {
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iStack_c8 = iStack_c8 + -1;
  } while (-1 < iStack_c8);
  iStack_c4 = 2;
  do {
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iStack_c4 = iStack_c4 + -1;
  } while (-1 < iStack_c4);
  iVar5 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  iVar5 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  uVar2 = get_setting_by_index((int)param_1,0x21);
  uVar6 = 0xff;
  uVar4 = 0;
  iVar5 = 2;
  do {
    if (*(byte *)(uVar4 + 0x10597a55/*ROM*/) == uVar2) {
      uVar6 = uVar4 & 0xff;
    }
    if (*(byte *)(uVar4 + 0x10597a56/*ROM*/) == uVar2) {
      uVar6 = uVar4 + 1 & 0xff;
    }
    if (*(byte *)(uVar4 + 0x10597a57/*ROM*/) == uVar2) {
      uVar6 = uVar4 + 2 & 0xff;
    }
    if (*(byte *)(uVar4 + 0x10597a58/*ROM*/) == uVar2) {
      uVar6 = uVar4 + 3 & 0xff;
    }
    if (*(byte *)(uVar4 + 0x10597a59/*ROM*/) == uVar2) {
      uVar6 = uVar4 + 4 & 0xff;
    }
    iVar5 = iVar5 + -1;
    uVar4 = uVar4 + 5;
  } while (-1 < iVar5);
  if (uVar2 == 0xc) {
    iVar5 = get_setting_by_index((int)param_1,0x3f);
    uStack_a = *(uint16_t *)(iVar5 * 2 + 0x10597aaa/*ROM*/);
    uVar3 = menu_item_register(*param_1);
    menu_list_build(uVar3,&uStack_a,5,1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  else if (uVar2 == 0xd) {
    iVar5 = get_setting_by_index((int)param_1,0x42);
    uStack_a = *(uint16_t *)(iVar5 * 2 + 0x10597aaa/*ROM*/);
    uVar3 = menu_item_register(*param_1);
    menu_list_build(uVar3,&uStack_a,5,1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  else if (uVar2 == 0xe) {
    iVar5 = get_setting_by_index((int)param_1,0x45);
    uStack_a = *(uint16_t *)(iVar5 * 2 + 0x10597aaa/*ROM*/);
    uVar3 = menu_item_register(*param_1);
    menu_list_build(uVar3,&uStack_a,5,1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  else {
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  get_setting_by_index((int)param_1,(uint)*(byte *)(uVar6 + 0x10597a8c/*ROM*/));
  get_setting_by_index((int)param_1,(uint)*(byte *)(uVar6 + 0x10597a9b/*ROM*/));
  iVar5 = 2;
  do {
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  iVar5 = 2;
  do {
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  return;
}
