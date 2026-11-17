/* @k10d dispatch_setup_event @ 0x103dc8fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103dc916) overlaps instruction at (ram,0x103dc914)
    */

int dispatch_setup_event(int *param_1,int param_2)

{
  short sVar1;
  uint8_t uVar2;
  int *piVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int aiStack_20 [4];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x195006c) {
    iVar5 = setting_get(param_1[2],0xa9);
    if (iVar5 < 10) {
      iVar5 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      piVar3 = aiStack_20 + 2;
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(piVar3,0x1e8,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(piVar3,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      iVar5 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(piVar3,0x230,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(piVar3,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    }
    else {
      iVar5 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      iVar5 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    }
    if (*(char *)((int)param_1 + 0x21) != '\x1a') {
      if (*(char *)((int)param_1 + 0x21) != '\x1b') {
        return 0;
      }
      return 0x1950011;
    }
    return 0x195000d;
  }
  iVar5 = 0;
  if (param_2 != 0x1950011) {
    if (param_2 != 0x195005c) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x22) == -1) {
      iVar5 = first_run_flag_b_done(param_1[2]);
      if (iVar5 == 0) {
        *(uint8_t *)((int)param_1 + 0x22) = 0;
      }
      else {
        uVar4 = setting_get(param_1[2],0xa7);
        *(char *)((int)param_1 + 0x22) = (char)uVar4;
      }
    }
    aiStack_20[0] = 0x195005e;
    aiStack_20[1] = 0x195005f;
    iVar5 = 0xff;
    if (cRam105967bc == *(char *)((int)param_1 + 0x22)) {
      iVar5 = 0;
    }
    if (cRam105967bd == *(char *)((int)param_1 + 0x22)) {
      iVar5 = 1;
    }
    return aiStack_20[iVar5];
  }
  if (*(byte *)(param_1 + 9) != 0xff) {
    return *(byte *)(param_1 + 9) + 0x1950013;
  }
  iVar6 = first_run_flag_b_done(param_1[2]);
  if (iVar6 != 0) {
    iVar5 = setting_get(param_1[2],0xa5);
    *(char *)(param_1 + 9) = (char)iVar5;
    return iVar5 + 0x1950013;
  }
  uVar4 = setting_get(param_1[2],0xa9);
  switch(uVar4) {
  case 0:
    iVar5 = 0x1950051;
    uVar2 = 0x3e;
    break;
  case 1:
    iVar5 = 0x1950016;
    uVar2 = 3;
    break;
  case 2:
    iVar5 = 0x195001a;
    uVar2 = 7;
    break;
  case 3:
    iVar5 = 0x1950014;
    uVar2 = 1;
    break;
  case 4:
    iVar5 = 0x1950013;
    uVar2 = 0;
    break;
  case 5:
    iVar5 = 0x1950019;
    uVar2 = 6;
    break;
  case 6:
    iVar5 = 0x195001b;
    uVar2 = 8;
    break;
  case 7:
    iVar5 = 0x1950017;
    uVar2 = 4;
    break;
  case 8:
    iVar5 = 0x195001e;
    uVar2 = 0xb;
    break;
  case 9:
    goto LAB_103dcc68;
  case 10:
    iVar5 = 0x195003d;
    uVar2 = 0x2a;
    break;
  case 0xb:
    iVar5 = 0x1950038;
    uVar2 = 0x25;
    break;
  case 0xc:
    iVar5 = 0x1950039;
    uVar2 = 0x26;
    break;
  case 0xd:
    iVar5 = 0x195003e;
    uVar2 = 0x2b;
    break;
  default:
    goto LAB_103dcc68;
  }
  *(uint8_t *)(param_1 + 9) = uVar2;
LAB_103dcc68:
  return iVar5;
}
