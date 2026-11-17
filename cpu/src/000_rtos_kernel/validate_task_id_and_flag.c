/* @k10d validate_task_id_and_flag @ 0x1000e23c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Checks a task ID against a global bound and a flag word, returning kernel error codes
 *   or calling a helper.
 * summary:
 *   The function validates param_1 against DAT_10011d46 and checks the low bits of
 *   *param_2. If the ID is out of range it returns 0xffffffee (E_ID). If the flag is zero,
 *   it indexes a table at DAT_10011d10 with stride 0xc; if the entry is -2, it calls
 *   write_timeout_queue_node and returns 0 (E_OK), otherwise it returns 0xffffffd7 (E_OBJ).
 *   If the flag is non-zero, it returns 0xfffffff5 (E_PARA). The source module is
 *   identified as rtos_kernel, and the error codes match standard µITRON/REALOS kernel
 *   service return values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_task_id_and_flag(int param_1,ushort *param_2)

{
  uint32_t uVar1;
  
  if ((param_1 < 1) || (DAT_10011d46/*ROM*/ < param_1)) {
    uVar1 = E_ID;
  }
  else if ((*param_2 & 0xfff8) == 0) {
    if (*(short *)((short)param_1 * 0xc + DAT_10011d10/*ROM*/ + -0xc) == -2) {
      write_timeout_queue_node((short)param_1,param_2);
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
