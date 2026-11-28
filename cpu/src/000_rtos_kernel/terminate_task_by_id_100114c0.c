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

uint32_t terminate_task_by_id_100114c0(int task_id)
{
  uint32_t result;
  int task_base;

  if (check_kernel_flag_bit5() != 0) {
    result = E_CTX;
  }
  else if (task_id < 1 || DAT_10011d40/*ROM*/ < task_id) {
    result = E_ID;
  }
  else {
    /* task array: base + 14*(task_id-1); state at offset -14, handle at offset -2 */
    task_base = DAT_10011d04/*ROM*/ + task_id * 0xe;
    if (*(short *)(task_base - 0xe) == -2) {
      result = E_NOEXS;
    }
    else {
      int handle = (int)*(short *)(task_base - 2);
      if (handle == 0) {
        result = E_ILUSE;
      }
      else if (handle == _DAT_6a003758) {
        remove_task_from_timeout_queue_100115c4(handle, task_id);
        result = 0;
      }
      else {
        result = E_ILUSE;
      }
    }
  }
  return result;
}
