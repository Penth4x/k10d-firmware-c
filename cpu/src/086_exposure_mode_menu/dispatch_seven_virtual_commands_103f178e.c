/* @k10d dispatch_seven_virtual_commands_103f178e @ 0x103f178e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Dispatches one of seven virtual method calls based on param_2, passing specific command
 *   codes.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and calls a virtual
 *   method (slot 1) with argument 0. It then branches on param_2 (0-6) to call another
 *   virtual method (slot 18) with a fixed set of arguments (6, specific code, 0x168) and
 *   finally calls the first virtual method again with argument 1. The specific codes passed
 *   are 0x206, 0x212, 0x21e, 0x22a, 0x236, 0x242, and 0x24e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_virtual_commands_103f178e(int *param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_14 [8];
  
  puVar4 = auStack_14;
  iVar3 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x206,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x212,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x21e,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x22a,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x236,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 5) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x242,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 6) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x24e,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
