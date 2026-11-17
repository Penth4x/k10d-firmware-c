/* @k10d copy_words_to_struct_offset_10428576 @ 0x10428576
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_words_to_struct_offset_10428576(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_5 == 0) {
    if (0 < param_4) {
      iVar3 = param_2 << 3;
      iVar4 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar4) {
        do {
          iVar2 = param_1 + 0x50;
          *(uint16_t *)(iVar2 + iVar3) = *(uint16_t *)(param_3 + iVar1);
          *(uint16_t *)(iVar2 + iVar3 + 2) = *(uint16_t *)(param_3 + iVar1 + 2);
          *(uint16_t *)(iVar2 + iVar3 + 4) = *(uint16_t *)(param_3 + iVar1 + 4);
          iVar1 = iVar1 + 6;
          iVar4 = iVar4 + -3;
          iVar3 = iVar3 + 6;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint16_t *)(param_1 + 0x50 + iVar3) = *(uint16_t *)(param_3 + iVar1);
        iVar1 = iVar1 + 2;
        iVar3 = iVar3 + 2;
      }
    }
  }
  else if (param_5 == 1) {
    if (0 < param_4) {
      iVar3 = param_2 << 3;
      iVar4 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar4) {
        do {
          iVar2 = param_1 + 0x68;
          *(uint16_t *)(iVar2 + iVar3) = *(uint16_t *)(param_3 + iVar1);
          *(uint16_t *)(iVar2 + iVar3 + 2) = *(uint16_t *)(param_3 + iVar1 + 2);
          *(uint16_t *)(iVar2 + iVar3 + 4) = *(uint16_t *)(param_3 + iVar1 + 4);
          iVar1 = iVar1 + 6;
          iVar4 = iVar4 + -3;
          iVar3 = iVar3 + 6;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint16_t *)(param_1 + 0x68 + iVar3) = *(uint16_t *)(param_3 + iVar1);
        iVar1 = iVar1 + 2;
        iVar3 = iVar3 + 2;
      }
    }
  }
  else if (param_5 == 2) {
    if (0 < param_4) {
      iVar3 = param_2 << 3;
      iVar4 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar4) {
        do {
          iVar2 = param_1 + 0x80;
          *(uint16_t *)(iVar2 + iVar3) = *(uint16_t *)(param_3 + iVar1);
          *(uint16_t *)(iVar2 + iVar3 + 2) = *(uint16_t *)(param_3 + iVar1 + 2);
          *(uint16_t *)(iVar2 + iVar3 + 4) = *(uint16_t *)(param_3 + iVar1 + 4);
          iVar1 = iVar1 + 6;
          iVar4 = iVar4 + -3;
          iVar3 = iVar3 + 6;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint16_t *)(param_1 + 0x80 + iVar3) = *(uint16_t *)(param_3 + iVar1);
        iVar1 = iVar1 + 2;
        iVar3 = iVar3 + 2;
      }
    }
  }
  else if (0 < param_4) {
    iVar3 = param_2 << 3;
    iVar4 = param_4 + -3;
    iVar1 = 0;
    if (2 < iVar4) {
      do {
        iVar2 = param_1 + 0x38;
        *(uint16_t *)(iVar2 + iVar3) = *(uint16_t *)(param_3 + iVar1);
        *(uint16_t *)(iVar2 + iVar3 + 2) = *(uint16_t *)(param_3 + iVar1 + 2);
        *(uint16_t *)(iVar2 + iVar3 + 4) = *(uint16_t *)(param_3 + iVar1 + 4);
        iVar1 = iVar1 + 6;
        iVar4 = iVar4 + -3;
        iVar3 = iVar3 + 6;
      } while (-1 < iVar4);
    }
    for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
      *(uint16_t *)(param_1 + 0x38 + iVar3) = *(uint16_t *)(param_3 + iVar1);
      iVar1 = iVar1 + 2;
      iVar3 = iVar3 + 2;
    }
  }
  return;
}
