/* @k10d activate_timeout_queue_entry @ 0x10010e38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates an index and transitions a timeout queue entry from pending to active state.
 * summary:
 *   Checks that param_1 is within the bounds of DAT_10011d38 and that the entry at
 *   DAT_10011cf4 + index*0x1c is non-zero. If the entry's status word (offset -0xe) has bit
 *   2 clear, it calls insert_into_timeout_queue_10011644 if bit 1 is set, copies a value
 *   from offset -0xc to -0x14, calls insert_into_timeout_queue_1000fcd4, and sets bit 2 in
 *   the status word. Returns 0 on success, 0xffffffee for out-of-bounds, or 0xffffffd6 for
 *   null entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t activate_timeout_queue_entry(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 < 1) || (DAT_10011d38/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 0x1c;
    iVar2 = DAT_10011cf4/*ROM*/ + iVar1;
    if (*(int *)(iVar2 + -0x1c) == 0) {
      uVar3 = E_NOEXS;
    }
    else {
      if ((*(ushort *)(iVar2 + -0xe) & 4) == 0) {
        if ((*(ushort *)(iVar2 + -0xe) & 2) != 0) {
          insert_into_timeout_queue_10011644(iVar2 + -0x1c);
        }
        *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x14) = *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xc)
        ;
        insert_into_timeout_queue_1000fcd4((uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x1c));
      }
      *(ushort *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xe) = *(ushort *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xe) | 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}
