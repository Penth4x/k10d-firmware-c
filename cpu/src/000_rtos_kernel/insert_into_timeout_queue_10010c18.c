/* @k10d insert_into_timeout_queue_10010c18 @ 0x10010c18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t insert_into_timeout_queue_10010c18(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  
  if ((param_1 < 1) || (DAT_10011d42/*ROM*/ < param_1)) {
    uVar8 = E_ID;
  }
  else {
    param_1 = param_1 * 0x10;
    iVar6 = DAT_10011d08/*ROM*/ + param_1;
    if (*(short *)(iVar6 + -0x10) == -2) {
      uVar8 = E_NOEXS;
    }
    else if (((*(ushort *)(iVar6 + -0xc) & 2) == 0) ||
            ((0 < *(short *)(param_2 + 1) && (*(short *)(param_2 + 1) <= *(short *)(iVar6 + -10)))))
    {
      sVar2 = *(short *)(iVar6 + -0x10);
      if (sVar2 == -1) {
        if ((*(ushort *)(iVar6 + -0xc) & 2) == 0) {
          **(uint32_t **)(iVar6 + -4) = (uintptr_t)(param_2);
          *param_2 = DAT_10011d08/*ROM*/ + param_1 + -8;
          *(int **)(DAT_10011d08/*ROM*/ + param_1 + -4) = param_2;
        }
        else {
          piVar3 = *(int **)(iVar6 + -8);
          piVar5 = (int *)(iVar6 + -8);
          if (piVar3 != piVar5) {
            do {
              piVar4 = piVar3;
              piVar3 = piVar4;
              if (*(short *)(param_2 + 1) < *(short *)(piVar4 + 1)) break;
              piVar3 = (int *)*piVar4;
              piVar5 = piVar4;
            } while (piVar3 != (int *)(DAT_10011d08/*ROM*/ + param_1 + -8));
          }
          if (piVar3 == (int *)(iVar6 + -8)) {
            *(int **)(iVar6 + -4) = param_2;
          }
          if (piVar5 == (int *)(DAT_10011d08/*ROM*/ + param_1 + -8)) {
            *(int **)(DAT_10011d08/*ROM*/ + param_1 + -8) = param_2;
          }
          else {
            *piVar5 = (int)param_2;
          }
          *param_2 = (int)piVar3;
        }
      }
      else {
        remove_task_from_timeout_queue_1001166c(sVar2);
        iVar6 = sVar2 * 0x44;
        sVar1 = *(short *)(iVar6 + 0x6a001be8);
        if (sVar1 == -1) {
          iVar7 = DAT_10011d08/*ROM*/ + param_1;
          iVar9 = -0xe;
        }
        else {
          iVar7 = sVar1 * 0x44 + 0x6a001be8;
          iVar9 = 2;
        }
        *(uint16_t *)(iVar9 + iVar7) = 0xffff;
        *(short *)(DAT_10011d08/*ROM*/ + param_1 + -0x10) = sVar1;
        if ((*(byte *)(iVar6 + 0x6a001c06) & 8) == 0) {
          *(uint8_t *)(iVar6 + 0x6a001c06) = 2;
          ready_list_insert(sVar2);
        }
        else {
          *(uint8_t *)(iVar6 + 0x6a001c06) = 8;
        }
        **(uint32_t **)(iVar6 + 0x6a001c10) = (uintptr_t)(param_2);
      }
      uVar8 = 0;
    }
    else {
      uVar8 = E_PAR;
    }
  }
  return uVar8;
}
