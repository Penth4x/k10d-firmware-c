/* @k10d validate_task_request @ 0x1000e344
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task index and request flags, returning specific error codes or dispatching
 *   a valid request.
 * summary:
 *   Checks if param_1 is within the range defined by DAT_10011d40. If valid, it inspects
 *   the flags in *param_2; if the lower 12 bits are zero, it checks a specific sub-
 *   condition involving param_2[1] and DAT_10011d4c. If the state at DAT_10011d04 +
 *   param_1*0xe is -2, it calls initialize_queue_node. Returns 0 on success or negative
 *   error codes (0xffffffee, 0xffffffef, 0xffffffd7, 0xfffffff5) on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_task_request(int param_1,ushort *param_2)

{
  uint32_t uVar1;
  
  if ((param_1 < 1) || (DAT_10011d40/*ROM*/ < param_1)) {
    uVar1 = E_ID;
  }
  else if ((*param_2 & 0xfffc) == 0) {
    if ((*param_2 == 3) && (((short)param_2[1] < 1 || (DAT_10011d4c/*ROM*/ < (short)param_2[1])))) {
      uVar1 = E_PAR;
    }
    else if (*(short *)((short)param_1 * 0xe + DAT_10011d04/*ROM*/ + -0xe) == -2) {
      initialize_queue_node((short)param_1,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = E_OBJ;
    }
  }
  else {
    uVar1 = E_RSATR;
  }
  return uVar1;
}
