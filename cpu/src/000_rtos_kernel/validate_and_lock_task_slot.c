/* @k10d validate_and_lock_task_slot @ 0x10010edc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task index and ensures its control block is in a locked/active state before
 *   returning success.
 * summary:
 *   Checks if param_1 is within the range [1, DAT_10011d36]. It calculates an offset into a
 *   table at DAT_10011cf0 (stride 0x18) and checks the value at offset -0x18. If that value
 *   is 0, it returns an error (0xffffffd6). If it is not equal to its own address, it calls
 *   insert_into_timeout_queue_10011644 and sets it to its own address (a self-referential
 *   lock). Returns 0 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_and_lock_task_slot(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 < 1) || (DAT_10011d36/*ROM*/ < param_1)) {
    uVar1 = E_ID;
  }
  else {
    iVar3 = (short)param_1 * 0x18;
    iVar2 = DAT_10011cf0/*ROM*/ + iVar3;
    if (*(int *)(iVar2 + -0x18) == 0) {
      uVar1 = E_NOEXS;
    }
    else {
      if (*(int *)(iVar2 + -0x18) != iVar2 + -0x18) {
        insert_into_timeout_queue_10011644(iVar2 + -0x18);
        iVar3 = DAT_10011cf0/*ROM*/ + iVar3;
        *(int *)(iVar3 + -0x18) = iVar3 + -0x18;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
