/* @k10d get_task_state_by_id @ 0x100103b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Retrieves the state and associated data for a task identified by an index, returning an
 *   error code if invalid or terminated.
 * summary:
 *   The function validates the input index against a global count (DAT_10011d46) and checks
 *   the task state at DAT_10011d10. If the state is -2 (likely terminated), it returns
 *   0xffffffd6. If the state is -1 (likely inactive), it normalizes it to 0. It copies the
 *   state and a 4-byte value from the task control block into the output buffer (param_2)
 *   and returns 0 on success. This behavior is consistent with a µITRON/REALOS kernel
 *   service for querying task status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t get_task_state_by_id(int param_1,short *param_2)

{
  int iVar1;
  short sVar2;
  uint32_t uVar3;
  
  if ((param_1 < 1) || (DAT_10011d46/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 0xc;
    sVar2 = *(short *)(DAT_10011d10/*ROM*/ + iVar1 + -0xc);
    if (sVar2 == -2) {
      uVar3 = E_NOEXS;
    }
    else {
      if (sVar2 == -1) {
        sVar2 = 0;
      }
      *param_2 = sVar2;
      *(uint32_t *)(param_2 + 2) = *(uint32_t *)(DAT_10011d10/*ROM*/ + iVar1 + -4);
      uVar3 = 0;
    }
  }
  return uVar3;
}
