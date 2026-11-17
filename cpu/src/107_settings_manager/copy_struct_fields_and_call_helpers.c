/* @k10d copy_struct_fields_and_call_helpers @ 0x10429160
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_and_call_helpers(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  
  uVar4 = (*(code *)0x104288bc/*ROM*/)(param_1,0,param_2);
  copy_words_to_struct_offset_10428474(param_1,0,uVar4,4);
  uVar4 = (*(code *)0x104288bc/*ROM*/)(param_1,1,param_2);
  copy_words_to_struct_offset_10428474(param_1,1,uVar4,4);
  uVar4 = (*(code *)0x104288bc/*ROM*/)(param_1,2,param_2);
  copy_words_to_struct_offset_10428474(param_1,2,uVar4,4);
  iVar5 = param_2 * 0x80 + 0x128;
  iVar1 = 0;
  iVar3 = 0xd;
  do {
    iVar2 = param_1 + 0x98;
    *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + iVar5);
    *(uint8_t *)(iVar2 + iVar1 + 1) = *(uint8_t *)(iVar2 + iVar5 + 1);
    *(uint8_t *)(iVar2 + iVar1 + 2) = *(uint8_t *)(iVar2 + iVar5 + 2);
    *(uint8_t *)(iVar2 + iVar1 + 3) = *(uint8_t *)(iVar2 + iVar5 + 3);
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + -1;
    iVar5 = iVar5 + 4;
  } while (-1 < iVar3);
  iVar1 = 0x50;
  iVar3 = 7;
  do {
    iVar2 = param_1 + 0x98;
    *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + iVar5);
    *(uint8_t *)(iVar2 + iVar1 + 1) = *(uint8_t *)(iVar2 + iVar5 + 1);
    *(uint8_t *)(iVar2 + iVar1 + 2) = *(uint8_t *)(iVar2 + iVar5 + 2);
    *(uint8_t *)(iVar2 + iVar1 + 3) = *(uint8_t *)(iVar2 + iVar5 + 3);
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + -1;
    iVar5 = iVar5 + 4;
  } while (-1 < iVar3);
  iVar1 = 0xb0;
  iVar3 = 7;
  do {
    iVar2 = param_1 + 0x98;
    *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + iVar5);
    *(uint8_t *)(iVar2 + iVar1 + 1) = *(uint8_t *)(iVar2 + iVar5 + 1);
    *(uint8_t *)(iVar2 + iVar1 + 2) = *(uint8_t *)(iVar2 + iVar5 + 2);
    *(uint8_t *)(iVar2 + iVar1 + 3) = *(uint8_t *)(iVar2 + iVar5 + 3);
    *(uint8_t *)(iVar2 + iVar1 + 4) = *(uint8_t *)(iVar2 + iVar5 + 4);
    iVar1 = iVar1 + 5;
    iVar3 = iVar3 + -1;
    iVar5 = iVar5 + 5;
  } while (-1 < iVar3);
  return;
}
