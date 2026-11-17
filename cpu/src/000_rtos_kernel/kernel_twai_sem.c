/* @k10d kernel_twai_sem @ 0x100113dc
 * name: verified (structural evidence: d313: disassembly (sem table 0x10011d14, count==0 && tmo==-1 -> TCB +0x34 = -1, wait queue); runtime TCB state 2)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   uITRON twai_sem service: E_CTX/E_ID/E_NOEXS checks, take a unit if available, else
 *   queue the task with the timeout.
 * summary:
 *   VERIFIED: d313: disassembly (sem table 0x10011d14, count==0 && tmo==-1 -> TCB +0x34 =
 *   -1, wait queue); runtime TCB state 2
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t kernel_twai_sem(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = rtos_can_dispatch();
  if (iVar1 == 0) {
    if ((param_1 < 1) || (DAT_10011d48/*ROM*/ < param_1)) {
      uVar2 = E_ID;
    }
    else if (param_2 < -1) {
      uVar2 = E_PAR;
    }
    else {
      iVar1 = DAT_10011d14/*ROM*/ + (short)param_1 * 10;
      if (*(short *)(iVar1 + -10) == -2) {
        uVar2 = E_NOEXS;
      }
      else if (*(short *)(iVar1 + -4) == 0) {
        if (param_2 == -1) {
          *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
        }
        else {
          if (param_2 == 0) {
            return E_TMOUT;
          }
          subtract_timeout_from_queue(param_2);
        }
        release_twai_sem_unit((short)param_1);
        uVar2 = 0;
      }
      else {
        *(short *)(iVar1 + -4) = *(short *)(iVar1 + -4) + -1;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = E_CTX;
  }
  return uVar2;
}
