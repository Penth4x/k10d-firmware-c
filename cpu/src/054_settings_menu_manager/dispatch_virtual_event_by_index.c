/* @k10d dispatch_virtual_event_by_index @ 0x103bd32a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved via menu_item_register, passing an
 *   index-dependent command code.
 * summary:
 *   The function retrieves an object pointer using menu_item_register and calls a virtual
 *   method at vtable offset 0xc with argument 0. If param_2 is between 0 and 6, it calls
 *   another virtual method at vtable offset 0xf4 with a specific command code (0x1ee-0x236)
 *   and a size parameter derived from param_1. Finally, it calls the first virtual method
 *   again with argument 1. The specific command codes and object structure are not
 *   identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_by_index(int *param_1,int param_2)

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
    (*pcVar2)(sVar1 + iVar3,6,0x1ee,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1fa,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x206,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x212,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x21e,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 5) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x22a,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 6) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar5 + 2) = 8;
    *(uint16_t *)(puVar5 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x236,iVar4 + 0x106);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
