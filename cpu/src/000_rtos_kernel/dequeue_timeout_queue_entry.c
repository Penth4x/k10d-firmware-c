/* @k10d dequeue_timeout_queue_entry @ 0x10010278
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes and returns the head entry from a kernel timeout queue, updating the queue
 *   pointers.
 * summary:
 *   Validates the index param_1 against the queue size in DAT_10011d42. If the queue is
 *   empty (head pointer equals the base at iVar1-8), it returns an error code 0xffffffce.
 *   Otherwise, it dereferences the head pointer, stores the entry value into *param_2, and
 *   advances the head pointer to the next entry or back to the base if the queue becomes
 *   empty. The source module is identified as rtos_kernel, and the logic matches a standard
 *   circular queue dequeue operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t dequeue_timeout_queue_entry(int param_1,int *param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  if ((param_1 < 1) || (DAT_10011d42/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else {
    param_1 = param_1 * 0x10;
    iVar1 = DAT_10011d08/*ROM*/ + param_1;
    if (*(short *)(iVar1 + -0x10) == -2) {
      uVar3 = E_NOEXS;
    }
    else {
      puVar2 = *(uint32_t **)(iVar1 + -8);
      if (puVar2 == (uint32_t *)(iVar1 + -8)) {
        uVar3 = E_TMOUT;
      }
      else {
        *param_2 = (int)puVar2;
        iVar1 = DAT_10011d08/*ROM*/ + param_1;
        if (puVar2 == *(uint32_t **)(iVar1 + -4)) {
          *(int *)(iVar1 + -4) = iVar1 + -8;
        }
        *(uint32_t *)(DAT_10011d08/*ROM*/ + param_1 + -8) = *puVar2;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
