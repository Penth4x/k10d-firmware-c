/* @k10d remove_entry_from_array_1052b11c @ 0x1052b11c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_entry_from_array_1052b11c(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint32_t *puVar3;
  int iVar4;
  int iVar5;
  uint32_t *puVar6;
  
  iVar5 = 0;
  bVar1 = false;
  if (0 < *(int *)((int)param_1 + 0x16c)) {
    iVar2 = 0;
    do {
      if (*(int *)((int)param_1 + iVar2 + 0x170) == param_2) {
        puVar3 = (uint32_t *)((int)param_1 + iVar5 * 0xc + 0x170);
        *puVar3 = 0xffff;
        puVar3[1] = 0;
        puVar3[2] = 0;
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar5 < *(int *)((int)param_1 + 0x16c));
  }
  if (bVar1) {
    if (iVar5 < *(int *)((int)param_1 + 0x16c) + -1) {
      iVar2 = iVar5 * 0xc;
      iVar4 = (iVar5 + 1) * 0xc;
      do {
        puVar6 = (uint32_t *)((int)param_1 + iVar4 + 0x170);
        puVar3 = (uint32_t *)((int)param_1 + iVar2 + 0x170);
        *puVar3 = *puVar6;
        iVar4 = iVar4 + 0xc;
        puVar3[1] = puVar6[1];
        iVar2 = iVar2 + 0xc;
        puVar3[2] = puVar6[2];
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)param_1 + 0x16c) + -1);
    }
    *(int *)((int)param_1 + 0x16c) = *(int *)((int)param_1 + 0x16c) + -1;
  }
  return;
}
