/* @k10d get_task_timeout_value @ 0x10010424
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Retrieves the timeout value for a specific task from the kernel's timeout queue.
 * summary:
 *   Validates the task ID against the range defined by DAT_10011d42. Accesses a 16-byte
 *   structure at DAT_10011d08 + id*0x10. If the status field (offset -0x10) is -2, returns
 *   an error (0xffffffd6). If -1, treats the timeout as 0. Otherwise, copies the timeout
 *   value to the output pointer and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t get_task_timeout_value(int param_1,short *param_2)

{
  short sVar2;
  int iVar1;
  int iVar3;
  uint32_t uVar4;
  
  if ((param_1 < 1) || (DAT_10011d42/*ROM*/ < param_1)) {
    uVar4 = E_ID;
  }
  else {
    sVar2 = *(short *)(DAT_10011d08/*ROM*/ + param_1 * 0x10 + -0x10);
    if (sVar2 == -2) {
      uVar4 = E_NOEXS;
    }
    else {
      if (sVar2 == -1) {
        sVar2 = 0;
      }
      *param_2 = sVar2;
      iVar1 = DAT_10011d08/*ROM*/ + param_1 * 0x10;
      iVar3 = *(int *)(iVar1 + -8);
      if (iVar3 == iVar1 + -8) {
        param_2[2] = 0;
        param_2[3] = 0;
      }
      else {
        *(int *)(param_2 + 2) = iVar3;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}
