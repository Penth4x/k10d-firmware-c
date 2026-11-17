/* @k10d dispatch_mode_event @ 0x103ff7ee
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Handles two event codes by updating a state byte and invoking virtual methods on an
 *   object retrieved via menu_item_register.
 * summary:
 *   Branches on param_2. For 0x184002e, reads setting 0xa9 and calls virtual slots on an
 *   object from menu_item_register, passing results from alloc_two_word_pair_1045bc2e. For
 *   0x1840015, updates a state byte at offset 0x21 based on RAM values and calls
 *   register_and_configure_menu_item_103ffe78. Returns a status code or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ff808) overlaps instruction at (ram,0x103ff806)
    */

uint32_t dispatch_mode_event(int *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t auStack_24 [5];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x184002e) {
    iVar3 = setting_get(param_1[2],0xa9);
    if (iVar3 < 10) {
      iVar3 = menu_item_register(*param_1);
      iVar7 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar7 + 0x10);
      puVar4 = auStack_24 + 3;
      uVar5 = alloc_two_word_pair_1045bc2e(puVar4,0x1e8,0x198);
      (**(code **)(iVar7 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(puVar4,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      iVar7 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar7 + 0x10);
      uVar5 = alloc_two_word_pair_1045bc2e(puVar4,0x230,0x198);
      (**(code **)(iVar7 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(puVar4,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else {
      iVar3 = menu_item_register(*param_1);
      iVar7 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar7 + 0x10);
      uVar5 = alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198);
      (**(code **)(iVar7 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      iVar7 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar7 + 0x10);
      uVar5 = alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198);
      (**(code **)(iVar7 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    uVar5 = get_setting_by_index((int)param_1,0x13);
    uVar6 = 0x184000e;
    *(char *)(param_1 + 8) = (char)uVar5;
  }
  else {
    uVar6 = 0;
    if (param_2 == 0x1840015) {
      if (*(char *)((int)param_1 + 0x21) == -1) {
        uVar5 = get_setting_by_index((int)param_1,0x12);
        *(char *)((int)param_1 + 0x21) = (char)uVar5;
      }
      auStack_24[0] = 0x1840018;
      auStack_24[1] = 0x184001b;
      auStack_24[2] = 0x184001e;
      cVar2 = *(char *)((int)param_1 + 0x21);
      iVar3 = 0xff;
      if (cRam10598384 == cVar2) {
        iVar3 = 0;
      }
      if (cRam10598385 == cVar2) {
        iVar3 = 1;
      }
      if (cRam10598386 == cVar2) {
        iVar3 = 2;
      }
      uVar6 = auStack_24[iVar3];
      *(char *)((int)param_1 + 0x21) = cVar2;
      register_and_configure_menu_item_103ffe78(param_1, __frv_reg_unset(5));
    }
  }
  return uVar6;
}
