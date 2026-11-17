/* @k10d dispatch_seven_virtual_commands_103bd574 @ 0x103bd574
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of seven virtual method calls based on param_2, passing distinct command
 *   codes and a computed size.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and invokes a virtual
 *   method (slot 1) with argument 0. It then branches on param_2 (0-6) to call a different
 *   virtual method (slot 18) with specific command codes (0x1ee-0x236) and a size parameter
 *   derived from a flag at param_1+0xe. A virtual method (slot 1) is then called again with
 *   argument 1. The caller is a virtual method of class cls_10594e70.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_virtual_commands_103bd574(int *param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_18 [8];
  
  puVar5 = auStack_18;
  iVar4 = 0x18;
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar4 = 0;
  }
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1ee,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1fa,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x206,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x212,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x21e,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 5) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x22a,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 6) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x236,iVar4 + 0x166);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
