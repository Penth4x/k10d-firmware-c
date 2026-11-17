/* @k10d copy_bytes_to_struct_offset_10428a0e @ 0x10428a0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10428a1e) overlaps instruction at (ram,0x10428a1c)
    */

void copy_bytes_to_struct_offset_10428a0e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 == 0) {
    if (0 < param_3) {
      iVar2 = 0;
      iVar4 = param_3 + -3;
      iVar1 = 0xb0;
      if (2 < iVar4) {
        do {
          iVar3 = param_1 + 0x98;
          *(uint8_t *)(iVar3 + iVar1) = *(uint8_t *)(param_2 + iVar2);
          *(uint8_t *)(iVar3 + iVar1 + 1) = *(uint8_t *)(param_2 + iVar2 + 1);
          *(uint8_t *)(iVar3 + iVar1 + 2) = *(uint8_t *)(param_2 + iVar2 + 2);
          iVar2 = iVar2 + 3;
          iVar4 = iVar4 + -3;
          iVar1 = iVar1 + 3;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint8_t *)(param_1 + 0x98 + iVar1) = *(uint8_t *)(param_2 + iVar2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else if (param_4 == 1) {
    iVar4 = 0;
    if (0 < param_3) {
      iVar1 = param_3 + -3;
      iVar2 = 0xd8;
      if (2 < iVar1) {
        do {
          iVar3 = param_1 + 0x98;
          *(uint8_t *)(iVar3 + iVar2) = *(uint8_t *)(param_2 + iVar4);
          *(uint8_t *)(iVar3 + iVar2 + 1) = *(uint8_t *)(param_2 + iVar4 + 1);
          *(uint8_t *)(iVar3 + iVar2 + 2) = *(uint8_t *)(param_2 + iVar4 + 2);
          iVar4 = iVar4 + 3;
          iVar1 = iVar1 + -3;
          iVar2 = iVar2 + 3;
        } while (-1 < iVar1);
      }
      for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
        *(uint8_t *)(param_1 + 0x98 + iVar2) = *(uint8_t *)(param_2 + iVar4);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 1;
      }
    }
  }
  else if ((param_4 == 2) && (iVar4 = 0, 0 < param_3)) {
    iVar2 = 0x100;
    iVar1 = param_3 + -3;
    if (2 < iVar1) {
      do {
        iVar3 = param_1 + 0x98;
        *(uint8_t *)(iVar3 + iVar2) = *(uint8_t *)(param_2 + iVar4);
        *(uint8_t *)(iVar3 + iVar2 + 1) = *(uint8_t *)(param_2 + iVar4 + 1);
        *(uint8_t *)(iVar3 + iVar2 + 2) = *(uint8_t *)(param_2 + iVar4 + 2);
        iVar4 = iVar4 + 3;
        iVar1 = iVar1 + -3;
        iVar2 = iVar2 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint8_t *)(param_1 + 0x98 + iVar2) = *(uint8_t *)(param_2 + iVar4);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}
