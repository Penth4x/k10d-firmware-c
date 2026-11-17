/* @k10d copy_struct_fields_to_buffer_10429056 @ 0x10429056
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_to_buffer_10429056(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_10 [4];
  
  piVar5 = (int *)auStack_10;
  iVar3 = compute_struct_offset_10428532(param_1,0);
  *piVar5 = param_2;
  copy_words_to_struct_offset_10428576(param_1,0,iVar3,4,*piVar5);
  iVar3 = compute_struct_offset_10428532(param_1,1);
  *piVar5 = param_2;
  copy_words_to_struct_offset_10428576(param_1,1,iVar3,4,*piVar5);
  iVar3 = compute_struct_offset_10428532(param_1,2);
  *piVar5 = param_2;
  copy_words_to_struct_offset_10428576(param_1,2,iVar3,4,*piVar5);
  iVar4 = param_2 * 0x80 + 0x128;
  iVar3 = 0;
  iVar2 = 0xd;
  do {
    iVar1 = param_1 + 0x98;
    *(uint8_t *)(iVar1 + iVar4) = *(uint8_t *)(iVar1 + iVar3);
    *(uint8_t *)(iVar1 + iVar4 + 1) = *(uint8_t *)(iVar1 + iVar3 + 1);
    *(uint8_t *)(iVar1 + iVar4 + 2) = *(uint8_t *)(iVar1 + iVar3 + 2);
    *(uint8_t *)(iVar1 + iVar4 + 3) = *(uint8_t *)(iVar1 + iVar3 + 3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 4;
  } while (-1 < iVar2);
  iVar3 = 0x50;
  iVar2 = 7;
  do {
    iVar1 = param_1 + 0x98;
    *(uint8_t *)(iVar1 + iVar4) = *(uint8_t *)(iVar1 + iVar3);
    *(uint8_t *)(iVar1 + iVar4 + 1) = *(uint8_t *)(iVar1 + iVar3 + 1);
    *(uint8_t *)(iVar1 + iVar4 + 2) = *(uint8_t *)(iVar1 + iVar3 + 2);
    *(uint8_t *)(iVar1 + iVar4 + 3) = *(uint8_t *)(iVar1 + iVar3 + 3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 4;
  } while (-1 < iVar2);
  iVar3 = 0xb0;
  iVar2 = 7;
  do {
    iVar1 = param_1 + 0x98;
    *(uint8_t *)(iVar1 + iVar4) = *(uint8_t *)(iVar1 + iVar3);
    *(uint8_t *)(iVar1 + iVar4 + 1) = *(uint8_t *)(iVar1 + iVar3 + 1);
    *(uint8_t *)(iVar1 + iVar4 + 2) = *(uint8_t *)(iVar1 + iVar3 + 2);
    *(uint8_t *)(iVar1 + iVar4 + 3) = *(uint8_t *)(iVar1 + iVar3 + 3);
    *(uint8_t *)(iVar1 + iVar4 + 4) = *(uint8_t *)(iVar1 + iVar3 + 4);
    iVar3 = iVar3 + 5;
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 5;
  } while (-1 < iVar2);
  return;
}
