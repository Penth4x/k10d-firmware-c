/* @k10d kernel_timeout_queue_insert @ 0x10011008
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a timeout entry into the kernel's timeout queue, handling list head/tail and
 *   priority ordering.
 * summary:
 *   The function validates index arguments (r10, r9) against a limit (DAT_10011d40) and
 *   returns specific error codes (0xffffffee, 0xffffffef, 0xffffffd6, 0xffffffe4,
 *   0xffffffce) for invalid states. It manipulates a linked list structure at 0x6a001c00
 *   with 0x44-byte entries, updating pointers and calling helper functions
 *   (ready_list_unlink, ready_list_insert, insert_into_timeout_queue_1000fc60,
 *   subtract_timeout_from_queue, enqueue_timeout_event_10011a74, adjust_task_priority) to
 *   manage the queue state. The source module is identified as rtos_kernel, and the logic
 *   fits a timeout/ready-list management routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t kernel_timeout_queue_insert(void)

{
  short sVar1;
  short sVar2;
  uint32_t uVar3;
  int iVar4;
  int caller_r9;
  int caller_r10;
  short sVar5;
  int *caller_r11;
  int caller_r14;
  
  if ((caller_r10 < 1) || (DAT_10011d40/*ROM*/ < caller_r10)) {
    uVar3 = E_ID;
  }
  else if (caller_r9 < -1) {
    uVar3 = E_PAR;
  }
  else {
    sVar5 = (short)caller_r10;
    *(int *)(caller_r14 + -8) = sVar5 * 0xe;
    sVar2 = _DAT_6a003758;
    iVar4 = *caller_r11 + sVar5 * 0xe;
    if (*(short *)(iVar4 + -0xe) == -2) {
      uVar3 = E_NOEXS;
    }
    else if ((*(short *)(iVar4 + -6) == 3) &&
            (*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c04) < *(short *)(iVar4 + -4))) {
      uVar3 = E_ILUSE;
    }
    else if (*(short *)(iVar4 + -2) == _DAT_6a003758) {
      uVar3 = E_ILUSE;
    }
    else if (*(short *)(iVar4 + -2) == 0) {
      if ((*(short *)(iVar4 + -6) == 3) &&
         (sVar1 = *(short *)(iVar4 + -4), iVar4 = (int)_DAT_6a003758,
         *(uint32_t *)(caller_r14 + -4) = 0x44, sVar1 < *(short *)(iVar4 * 0x44 + 0x6a001c00))) {
        ready_list_unlink(sVar2);
        sVar2 = _DAT_6a003758;
        *(uint16_t *)
         ((int)_DAT_6a003758 * (int)(short)*(uint32_t *)(caller_r14 + -4) + 0x6a001c00) =
             *(uint16_t *)(*caller_r11 + *(int *)(caller_r14 + -8) + -4);
        ready_list_insert(sVar2);
      }
      *(short *)(*caller_r11 + *(int *)(caller_r14 + -8) + -2) = _DAT_6a003758;
      insert_into_timeout_queue_1000fc60(_DAT_6a003758,sVar5);
      uVar3 = 0;
    }
    else {
      if (caller_r9 == -1) {
        *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
      }
      else {
        if (caller_r9 == 0) {
          return E_TMOUT;
        }
        subtract_timeout_from_queue(caller_r9);
      }
      enqueue_timeout_event_10011a74(sVar5);
      adjust_task_priority((int)_DAT_6a003758,(int)*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00));
      uVar3 = 0;
    }
  }
  return uVar3;
}
