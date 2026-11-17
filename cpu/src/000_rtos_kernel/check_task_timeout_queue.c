/* @k10d check_task_timeout_queue @ 0x1000e020
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Instruction at (ram,0x1000e104) overlaps instruction at (ram,0x1000e102)
    */

uint32_t check_task_timeout_queue(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint32_t uVar5;
  int caller_r8;
  uint16_t uVar6;
  uint32_t caller_r10;
  short sVar7;
  int *caller_r11;
  
  sVar7 = (short)caller_r10;
  iVar1 = sVar7 * 0x44;
  if (*(short *)(iVar1 + 0x6a001be8) == -2) {
    uVar5 = E_NOEXS;
  }
  else {
    if (caller_r8 == 0) {
      caller_r8 = (int)*(short *)(iVar1 + 0x6a001c02);
    }
    else if ((caller_r8 < 1) || (DAT_10011d4c/*ROM*/ < caller_r8)) {
      return E_PAR;
    }
    bVar2 = *(byte *)(iVar1 + 0x6a001c06);
    if (((((bVar2 & 4) == 0) || (*(char *)(iVar1 + 0x6a001c07) != '\a')) ||
        (iVar4 = *caller_r11 + *(short *)(iVar1 + 0x6a001c08) * 0xe, *(short *)(iVar4 + -6) != 3)) ||
       (*(short *)(iVar4 + -4) <= caller_r8)) {
      iVar4 = (int)*(short *)(iVar1 + 0x6a001bf0);
      bVar3 = false;
      if (iVar4 != -1) {
        bVar3 = true;
        do {
          iVar4 = DAT_10011d04/*ROM*/ + iVar4 * 0xe;
          if ((*(short *)(iVar4 + -6) == 3) && (caller_r8 < *(short *)(iVar4 + -4))) {
            return E_ILUSE;
          }
          iVar4 = (int)*(short *)(iVar4 + -10);
        } while (iVar4 != -1);
      }
      if (bVar2 == 0x10) {
        uVar5 = E_OBJ;
      }
      else {
        uVar6 = (uint16_t)caller_r8;
        if (bVar2 == 2) {
          *(uint16_t *)(iVar1 + 0x6a001c04) = uVar6;
          if ((!bVar3) || (caller_r8 < *(short *)(iVar1 + 0x6a001c00))) {
            ready_list_unlink(sVar7);
            *(uint16_t *)(iVar1 + 0x6a001c00) = uVar6;
            ready_list_insert(sVar7);
          }
        }
        else if (bVar2 == 8) {
          *(uint16_t *)(iVar1 + 0x6a001c04) = uVar6;
          if (bVar3) {
            if (caller_r8 < *(short *)(iVar1 + 0x6a001c00)) {
              *(uint16_t *)(iVar1 + 0x6a001c00) = uVar6;
            }
          }
          else {
            *(uint16_t *)(iVar1 + 0x6a001c00) = uVar6;
          }
        }
        else if ((bVar2 == 4) || (bVar2 == 0xc)) {
          *(uint16_t *)(iVar1 + 0x6a001c04) = uVar6;
          if (bVar3) {
            if (caller_r8 < *(short *)(iVar1 + 0x6a001c00)) {
              *(uint16_t *)(iVar1 + 0x6a001c00) = uVar6;
            }
          }
          else {
            *(uint16_t *)(iVar1 + 0x6a001c00) = uVar6;
          }
          iVar4 = test_task_state_bit((int)*(short *)(iVar1 + 0x6a001c08),
                               *(uint8_t *)(iVar1 + 0x6a001c07));
          if (iVar4 == 1) {
            remove_node_from_queue((int)*(short *)(iVar1 + 0x6a001c08),caller_r10,1);
          }
          if (*(char *)(iVar1 + 0x6a001c07) == '\a') {
            (*(code *)PTR_FUN_10011c78)();
          }
        }
        uVar5 = 0;
      }
    }
    else {
      uVar5 = E_ILUSE;
    }
  }
  return uVar5;
}
