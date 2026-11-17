/* @k10d insertion_sort_bytes @ 0x104f8910
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insertion_sort_bytes(uint32_t param_1,void *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  if (1 < param_3) {
    iVar4 = 0;
    do {
      bVar1 = *(byte *)((int)param_2 + iVar5);
      iVar2 = iVar4;
      if ((-1 < iVar4) && (bVar1 < *(byte *)((int)param_2 + iVar4))) {
        iVar3 = iVar4 + 1;
        do {
          *(uint8_t *)((int)param_2 + iVar3) = *(uint8_t *)((int)param_2 + iVar2);
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 + -1;
          if (iVar2 < 0) break;
        } while (bVar1 < *(byte *)((int)param_2 + iVar2));
      }
      *(byte *)((int)param_2 + iVar2 + 1) = bVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar5 < param_3);
  }
  return;
}
