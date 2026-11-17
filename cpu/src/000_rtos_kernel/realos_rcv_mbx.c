/* @k10d realos_rcv_mbx @ 0x100111b0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed receive_mailbox_message)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Dequeues a message from a kernel mailbox, blocking if empty, and returns the payload
 *   pointer.
 * summary:
 *   Validates the mailbox ID and timeout parameter against the kernel state. If the mailbox
 *   is empty, it sets a wait flag or blocks based on the timeout value. If a message is
 *   present, it unlinks the message node from the list, updates the head/tail pointers, and
 *   returns the message data pointer in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t realos_rcv_mbx(int param_1,uint32_t *param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar2 = rtos_can_dispatch();
  if (iVar2 == 0) {
    if ((param_1 < 1) || (DAT_10011d42/*ROM*/ < param_1)) {
      uVar3 = E_ID;
    }
    else if (param_3 < -1) {
      uVar3 = E_PAR;
    }
    else {
      iVar2 = param_1 * 0x10;
      iVar4 = DAT_10011d08/*ROM*/ + iVar2;
      if (*(short *)(iVar4 + -0x10) == -2) {
        uVar3 = E_NOEXS;
      }
      else {
        puVar1 = *(uint32_t **)(iVar4 + -8);
        if (puVar1 == (uint32_t *)(iVar4 + -8)) {
          if (param_3 == -1) {
            *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
          }
          else {
            if (param_3 == 0) {
              return E_TMOUT;
            }
            subtract_timeout_from_queue(param_3);
          }
          enqueue_kernel_event((ushort)param_1,param_2);
          uVar3 = 0;
        }
        else {
          *param_2 = puVar1;
          iVar4 = DAT_10011d08/*ROM*/ + iVar2;
          if (puVar1 == *(uint32_t **)(iVar4 + -4)) {
            *(int *)(iVar4 + -4) = iVar4 + -8;
          }
          *(uint32_t *)(DAT_10011d08/*ROM*/ + iVar2 + -8) = *puVar1;
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = E_CTX;
  }
  return uVar3;
}
