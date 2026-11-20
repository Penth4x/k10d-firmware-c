/* @k10d register_menu_item_by_index_103bd0e0 @ 0x103bd0e0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a virtual method slot on an object based on the integer index in
 *   param_2.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and performs a virtual
 *   call (slot 1) with argument 0. If param_2 is between 0 and 6, it performs another
 *   virtual call (slot 31) with specific arguments (6 or 2, and a unique offset like 0x1ee,
 *   0x1fa, etc.) followed by a virtual call (slot 1) with argument 1. The specific offsets
 *   and the structure of the calls suggest a state machine or event dispatcher, but the
 *   exact semantic role (e.g., which camera subsystem) is not determinable from the
 *   pseudocode alone without knowing the class definition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_by_index_103bd0e0(int *param_1,int param_2)

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
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1ee,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1fa,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x206,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x212,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x21e,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 5) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x22a,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 6) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x236,iVar4 + 0x136);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
