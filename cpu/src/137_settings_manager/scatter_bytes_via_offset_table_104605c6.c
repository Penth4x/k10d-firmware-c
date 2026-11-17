/* @k10d scatter_bytes_via_offset_table_104605c6 @ 0x104605c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void scatter_bytes_via_offset_table_104605c6(void *param_1,int param_2)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 8;
  do {
    iVar5 = iVar4;
    *(uint8_t *)((int)param_1 + *(int *)(&DAT_105a6820/*ROM*/ + iVar2) + 4) =
         *(uint8_t *)(param_2 + iVar3);
    *(uint8_t *)((int)param_1 + *(int *)(&DAT_105a6824/*ROM*/ + iVar2) + 4) =
         *(uint8_t *)(param_2 + iVar3 + 1);
    iVar4 = iVar3 + 2;
    iVar3 = iVar3 + 3;
    *(uint8_t *)((int)param_1 + *(int *)(&DAT_105a6828/*ROM*/ + iVar2) + 4) =
         *(uint8_t *)(param_2 + iVar4);
    iVar4 = iVar5 + -3;
    iVar2 = iVar2 + 0xc;
  } while (-1 < iVar4);
  iVar5 = iVar5 + -1;
  do {
    puVar1 = (uint8_t *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *(uint8_t *)((int)param_1 + *(int *)(&DAT_105a6820/*ROM*/ + iVar2) + 4) = *puVar1;
    iVar5 = iVar5 + -1;
    iVar2 = iVar2 + 4;
  } while (-1 < iVar5);
  return;
}
