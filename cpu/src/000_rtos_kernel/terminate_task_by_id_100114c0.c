/* @k10d terminate_task_by_id_100114c0 @ 0x100114c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task ID and dispatches termination of the corresponding task control block.
 * summary:
 *   Checks a global state via check_kernel_flag_bit5 and validates param_1 against a task
 *   count in DAT_10011d40. It indexes into a task array at DAT_10011d04 (stride 0xe) and
 *   checks the task state at offset -0xe. If the state is not -2, it reads a field at
 *   offset -2 and calls remove_task_from_timeout_queue_100115c4 if it matches
 *   _DAT_6a003758, returning 0 on success or negative error codes otherwise. The module
 *   context (RTOS kernel) and the error code pattern (0xffffffee, 0xffffffd6, 0xffffffe4,
 *   0xffffffe7) are consistent with a µITRON-style task termination service.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t terminate_task_by_id_100114c0(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = check_kernel_flag_bit5();
  if (iVar2 == 0) {
    if ((param_1 < 1) || (DAT_10011d40/*ROM*/ < param_1)) {
      uVar1 = E_ID;
    }
    else {
      iVar2 = DAT_10011d04/*ROM*/ + (short)param_1 * 0xe;
      if (*(short *)(iVar2 + -0xe) == -2) {
        uVar1 = E_NOEXS;
      }
      else {
        iVar2 = (int)*(short *)(iVar2 + -2);
        if (iVar2 == 0) {
          uVar1 = E_ILUSE;
        }
        else if (iVar2 == _DAT_6a003758) {
          remove_task_from_timeout_queue_100115c4(iVar2,param_1);
          uVar1 = 0;
        }
        else {
          uVar1 = E_ILUSE;
        }
      }
    }
  }
  else {
    uVar1 = E_CTX;
  }
  return uVar1;
}
