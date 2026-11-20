/* @k10d cancel_timeout_queue_entry @ 0x10010f50
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a timeout queue entry by index, unlinking it from the list if it is in a
 *   pending state.
 * summary:
 *   Validates the index against DAT_10011d38 and accesses an array of 0x1c-byte structures
 *   at DAT_10011cf4. If the entry's status word is non-zero and specific bits (2 and 4) are
 *   set in the flags at offset -0xe, it calls insert_into_timeout_queue_10011644 to unlink
 *   the entry and updates the pointer at offset -0x1c. It then clears bit 1 of the flags
 *   and returns 0 on success, or error codes 0xffffffee (invalid index) and 0xffffffd6
 *   (invalid state).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t cancel_timeout_queue_entry(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  if ((param_1 < 1) || (DAT_10011d38/*ROM*/ < param_1)) {
    uVar2 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 0x1c;
    iVar3 = DAT_10011cf4/*ROM*/ + iVar1;
    if (*(int *)(iVar3 + -0x1c) == 0) {
      uVar2 = E_NOEXS;
    }
    else {
      if (((*(ushort *)(iVar3 + -0xe) & 4) == 0) && ((*(ushort *)(iVar3 + -0xe) & 2) != 0)) {
        insert_into_timeout_queue_10011644((int *)(iVar3 + -0x1c));
        *(int *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x1c) = DAT_10011cf4/*ROM*/ + iVar1 + -0x1c;
      }
      *(ushort *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xe) = *(ushort *)(DAT_10011cf4/*ROM*/ + iVar1 + -0xe) & 0xfffd;
      uVar2 = 0;
    }
  }
  return uVar2;
}
