/* @k10d copy_structured_field_array @ 0x1042873e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_field_array(void *param_1,int param_2,void *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 == 0) {
    if (0 < param_4) {
      iVar2 = param_2 << 3;
      iVar3 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar3) {
        do {
          *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x50);
          *(uint16_t *)((int)param_3 + iVar1 + 2) = *(uint16_t *)((int)param_1 + iVar2 + 0x52);
          *(uint16_t *)((int)param_3 + iVar1 + 4) = *(uint16_t *)((int)param_1 + iVar2 + 0x54);
          iVar1 = iVar1 + 6;
          iVar3 = iVar3 + -3;
          iVar2 = iVar2 + 6;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x50);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      }
    }
  }
  else if (param_5 == 1) {
    if (0 < param_4) {
      iVar2 = param_2 << 3;
      iVar3 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar3) {
        do {
          *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x68);
          *(uint16_t *)((int)param_3 + iVar1 + 2) = *(uint16_t *)((int)param_1 + iVar2 + 0x6a);
          *(uint16_t *)((int)param_3 + iVar1 + 4) = *(uint16_t *)((int)param_1 + iVar2 + 0x6c);
          iVar1 = iVar1 + 6;
          iVar3 = iVar3 + -3;
          iVar2 = iVar2 + 6;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x68);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      }
    }
  }
  else if (param_5 == 2) {
    if (0 < param_4) {
      iVar2 = param_2 << 3;
      iVar3 = param_4 + -3;
      iVar1 = 0;
      if (2 < iVar3) {
        do {
          *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x80);
          *(uint16_t *)((int)param_3 + iVar1 + 2) = *(uint16_t *)((int)param_1 + iVar2 + 0x82);
          *(uint16_t *)((int)param_3 + iVar1 + 4) = *(uint16_t *)((int)param_1 + iVar2 + 0x84);
          iVar1 = iVar1 + 6;
          iVar3 = iVar3 + -3;
          iVar2 = iVar2 + 6;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x80);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      }
    }
  }
  else if (0 < param_4) {
    iVar2 = param_2 << 3;
    iVar3 = param_4 + -3;
    iVar1 = 0;
    if (2 < iVar3) {
      do {
        *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x38);
        *(uint16_t *)((int)param_3 + iVar1 + 2) = *(uint16_t *)((int)param_1 + iVar2 + 0x3a);
        *(uint16_t *)((int)param_3 + iVar1 + 4) = *(uint16_t *)((int)param_1 + iVar2 + 0x3c);
        iVar1 = iVar1 + 6;
        iVar3 = iVar3 + -3;
        iVar2 = iVar2 + 6;
      } while (-1 < iVar3);
    }
    for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
      *(uint16_t *)((int)param_3 + iVar1) = *(uint16_t *)((int)param_1 + iVar2 + 0x38);
      iVar1 = iVar1 + 2;
      iVar2 = iVar2 + 2;
    }
  }
  return;
}
