/* @k10d kernel_wai_flg_svc @ 0x100112a4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_event_flag)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Waits for specific bits in a kernel event flag object with an optional timeout.
 * summary:
 *   Validates the event flag ID and wait pattern, then checks the flag state. If the
 *   required bits are not set, it blocks the task using a timeout mechanism (param_5) or
 *   polls if timeout is 0. On success, it clears the flag bits if the 'clear on wait'
 *   attribute is set and returns the previous flag value in param_4. Returns kernel error
 *   codes (e.g., 0xffffffee for invalid ID) on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t kernel_wai_flg_svc(int param_1,uint param_2,uint param_3,uint32_t *param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar1 = rtos_can_dispatch();
  if (iVar1 == 0) {
    if ((param_1 < 1) || (DAT_10011d46/*ROM*/ < param_1)) {
      uVar2 = E_ID;
    }
    else if (((param_2 == 0) || ((param_3 & 0xfffffffe) != 0)) || (param_5 < -1)) {
      uVar2 = E_PAR;
    }
    else {
      iVar1 = (short)param_1 * 0xc;
      iVar3 = DAT_10011d10/*ROM*/ + iVar1;
      if (*(short *)(iVar3 + -0xc) == -2) {
        uVar2 = E_NOEXS;
      }
      else if (((*(ushort *)(iVar3 + -8) & 2) == 0) && (*(short *)(iVar3 + -0xc) != -1)) {
        uVar2 = E_ILUSE;
      }
      else {
        iVar3 = check_bitmask_overlap(*(uint *)(iVar3 + -4),param_2,param_3);
        if (iVar3 == 0) {
          if (param_5 == -1) {
            *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
          }
          else {
            if (param_5 == 0) {
              return E_TMOUT;
            }
            subtract_timeout_from_queue(param_5);
          }
          schedule_task_event_10011714((short)param_1,param_2,(char)param_3,param_4);
          uVar2 = 0;
        }
        else {
          *param_4 = *(uint32_t *)(DAT_10011d10/*ROM*/ + iVar1 + -4);
          if ((*(ushort *)(DAT_10011d10/*ROM*/ + iVar1 + -8) & 4) != 0) {
            *(uint32_t *)(DAT_10011d10/*ROM*/ + iVar1 + -4) = 0;
          }
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = E_CTX;
  }
  return uVar2;
}
