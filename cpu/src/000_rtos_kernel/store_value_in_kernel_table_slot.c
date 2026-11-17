/* @k10d store_value_in_kernel_table_slot @ 0x10010db0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates an index and writes param_2 into a 0x18-byte table entry after checking a
 *   pointer field.
 * summary:
 *   Bounds-checks param_1 against DAT_10011d36 and computes an offset into the table at
 *   DAT_10011cf0. If the entry's first word is non-zero and not self-referential, it calls
 *   insert_into_timeout_queue_10011644, stores param_2 at offset -0x10, and calls
 *   insert_into_timeout_queue_1000fcd4 on the entry base. Returns 0 on success or error
 *   codes 0xffffffee/0xffffffd6 on failure. The module context suggests this is a kernel-
 *   service routine, but the specific subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t store_value_in_kernel_table_slot(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  if ((param_1 < 1) || (DAT_10011d36/*ROM*/ < param_1)) {
    uVar2 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 0x18;
    iVar3 = DAT_10011cf0/*ROM*/ + iVar1;
    if (*(int *)(iVar3 + -0x18) == 0) {
      uVar2 = E_NOEXS;
    }
    else {
      if (*(int *)(iVar3 + -0x18) != iVar3 + -0x18) {
        insert_into_timeout_queue_10011644(iVar3 + -0x18);
      }
      *(uint32_t *)(DAT_10011cf0/*ROM*/ + iVar1 + -0x10) = param_2;
      insert_into_timeout_queue_1000fcd4((uint32_t *)(DAT_10011cf0/*ROM*/ + iVar1 + -0x18));
      uVar2 = 0;
    }
  }
  return uVar2;
}
