/* @k10d insert_sorted_list_entry @ 0x104e5dd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e5de8) overlaps instruction at (ram,0x104e5de6)
    */

void insert_sorted_list_entry(void *param_1,uint param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uStack_14;
  
  uStack_14 = 0;
  if (1 < param_2) {
    iVar2 = *(int *)((int)param_1 + 0x40);
    piVar7 = *(int **)(param_3 * 4 + iVar2);
    uVar3 = (param_3 + 1) - param_2;
    uVar5 = param_3 - 1;
    iVar6 = 0;
    if (uVar3 <= uVar5) {
      iVar4 = uVar5 * 4;
      do {
        if (*(int *)(iVar2 + iVar4) != 0) {
          uVar1 = *(ushort *)(*(int *)(iVar2 + iVar4) + 0x14);
          if (*(ushort *)(piVar7 + 5) == uVar1) {
            iVar2 = (*(code *)0x104e3858/*ROM*/)(*(uint32_t *)(iVar2 + uVar5 * 4));
            if (iVar2 != 0) {
              *(uint8_t *)(*(int *)(uVar5 * 4 + *(int *)((int)param_1 + 0x40)) + 0x16) = 0;
            }
            uStack_14 = (uint)(iVar2 != 0);
            iVar2 = (*(code *)0x104e3858/*ROM*/)(piVar7);
            if (iVar2 != 0) {
              uStack_14 = uStack_14 + 1;
              *(uint8_t *)((int)piVar7 + 0x16) = 0;
            }
            if (0 < iVar6) {
              func_0x104e5efe(param_1,uVar5 + 1,uVar5 + 2,iVar6);
              *(int **)(*(int *)((int)param_1 + 0x40) + (uVar5 + 1) * 4) = piVar7;
              *piVar7 = uVar5 + 0x65;
            }
            break;
          }
          if (uVar1 < *(ushort *)(piVar7 + 5)) {
            func_0x104e5efe(param_1,uVar5 + 1,uVar5 + 2,iVar6);
            *(int **)(*(int *)((int)param_1 + 0x40) + (uVar5 + 1) * 4) = piVar7;
            *piVar7 = uVar5 + 0x65;
            break;
          }
          if (uVar3 == uVar5) {
            func_0x104e5efe(param_1,uVar5,uVar5 + 1,iVar6 + 1);
            *(int **)(*(int *)((int)param_1 + 0x40) + uVar5 * 4) = piVar7;
            *piVar7 = uVar5 + 100;
            break;
          }
        }
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -4;
      } while (uVar3 <= uVar5);
    }
  }
  *param_4 = *param_4 + uStack_14;
  return;
}
