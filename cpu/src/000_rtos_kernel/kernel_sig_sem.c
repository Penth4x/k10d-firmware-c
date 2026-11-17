/* @k10d kernel_sig_sem @ 0x10010b38
 * name: verified (structural evidence: d313: disassembly (same sem table 0x10011d14; waiter head -1 -> count path, else dequeue via 0x1001166c))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   uITRON sig_sem service: wake the first waiting task or increment the semaphore count.
 * summary:
 *   VERIFIED: d313: disassembly (same sem table 0x10011d14; waiter head -1 -> count path,
 *   else dequeue via 0x1001166c)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t kernel_sig_sem(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  
  if ((param_1 < 1) || (DAT_10011d48/*ROM*/ < param_1)) {
    uVar6 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 10;
    iVar5 = DAT_10011d14/*ROM*/ + iVar1;
    sVar3 = *(short *)(iVar5 + -10);
    iVar4 = (int)sVar3;
    if (iVar4 == -2) {
      uVar6 = E_NOEXS;
    }
    else {
      if (iVar4 == -1) {
        if (*(short *)(iVar5 + -4) == *(short *)(iVar5 + -2)) {
          return E_QOVR;
        }
        *(short *)(iVar5 + -4) = *(short *)(iVar5 + -4) + 1;
      }
      else {
        remove_task_from_timeout_queue_1001166c(sVar3);
        iVar4 = iVar4 * 0x44;
        sVar2 = *(short *)(iVar4 + 0x6a001be8);
        if (sVar2 == -1) {
          iVar5 = DAT_10011d14/*ROM*/ + iVar1;
          iVar7 = -8;
        }
        else {
          iVar5 = sVar2 * 0x44 + 0x6a001be8;
          iVar7 = 2;
        }
        *(uint16_t *)(iVar7 + iVar5) = 0xffff;
        *(short *)(DAT_10011d14/*ROM*/ + iVar1 + -10) = sVar2;
        if ((*(byte *)(iVar4 + 0x6a001c06) & 8) == 0) {
          *(uint8_t *)(iVar4 + 0x6a001c06) = 2;
          ready_list_insert(sVar3);
        }
        else {
          *(uint8_t *)(iVar4 + 0x6a001c06) = 8;
        }
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}
