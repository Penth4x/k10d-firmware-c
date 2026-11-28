/* @k10d copy_rgb_triplets_from_struct @ 0x10428f3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10428f4a) overlaps instruction at (ram,0x10428f48)
    */

void copy_rgb_triplets_from_struct(void *param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_4 == 0) {
    if (0 < param_3) {
      iVar2 = 0;
      iVar1 = 0x128;
      iVar3 = param_3 + -3;
      if (2 < iVar3) {
        do {
          *(uint8_t *)((int)param_2 + iVar2) = *(uint8_t *)((int)param_1 + iVar1 + 0x98);
          *(uint8_t *)((int)param_2 + iVar2 + 1) = *(uint8_t *)((int)param_1 + iVar1 + 0x99);
          *(uint8_t *)((int)param_2 + iVar2 + 2) = *(uint8_t *)((int)param_1 + iVar1 + 0x9a);
          iVar2 = iVar2 + 3;
          iVar3 = iVar3 + -3;
          iVar1 = iVar1 + 3;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint8_t *)((int)param_2 + iVar2) = *(uint8_t *)((int)param_1 + iVar1 + 0x98);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else if (param_4 == 1) {
    iVar3 = 0;
    if (0 < param_3) {
      iVar2 = 0x1a8;
      iVar1 = param_3 + -3;
      if (2 < iVar1) {
        do {
          *(uint8_t *)((int)param_2 + iVar3) = *(uint8_t *)((int)param_1 + iVar2 + 0x98);
          *(uint8_t *)((int)param_2 + iVar3 + 1) = *(uint8_t *)((int)param_1 + iVar2 + 0x99);
          *(uint8_t *)((int)param_2 + iVar3 + 2) = *(uint8_t *)((int)param_1 + iVar2 + 0x9a);
          iVar3 = iVar3 + 3;
          iVar1 = iVar1 + -3;
          iVar2 = iVar2 + 3;
        } while (-1 < iVar1);
      }
      for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
        *(uint8_t *)((int)param_2 + iVar3) = *(uint8_t *)((int)param_1 + iVar2 + 0x98);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 1;
      }
    }
  }
  else if ((param_4 == 2) && (iVar3 = 0, 0 < param_3)) {
    iVar2 = 0x228;
    iVar1 = param_3 + -3;
    if (2 < iVar1) {
      do {
        *(uint8_t *)((int)param_2 + iVar3) = *(uint8_t *)((int)param_1 + iVar2 + 0x98);
        *(uint8_t *)((int)param_2 + iVar3 + 1) = *(uint8_t *)((int)param_1 + iVar2 + 0x99);
        *(uint8_t *)((int)param_2 + iVar3 + 2) = *(uint8_t *)((int)param_1 + iVar2 + 0x9a);
        iVar3 = iVar3 + 3;
        iVar1 = iVar1 + -3;
        iVar2 = iVar2 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint8_t *)((int)param_2 + iVar3) = *(uint8_t *)((int)param_1 + iVar2 + 0x98);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}
