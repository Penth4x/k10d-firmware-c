/* @k10d dispatch_seven_virtual_commands_103f1580 @ 0x103f1580
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Selects one of seven virtual method calls based on param_2 and invokes it with specific
 *   arguments.
 * summary:
 *   The function calls menu_item_register to obtain a base pointer, then uses param_2 (0-6)
 *   to select a branch. Each branch retrieves a function pointer and a this-adjustment from
 *   the object structure, sets two stack values (8 and 0x10), and calls the selected
 *   virtual method with a unique third argument (0x206, 0x212, 0x21e, 0x22a, 0x236, 0x242,
 *   0x24e) and a fourth argument of 0x138. It then calls a second virtual method (slot 1)
 *   with argument 1. The specific camera subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_virtual_commands_103f1580(int *param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_14 [8];
  
  puVar4 = auStack_14;
  iVar3 = menu_item_register(*param_1);
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x206,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x212,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x21e,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x22a,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x236,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 5) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x242,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 6) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x24e,0x138);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
