/* @k10d clear_task_flag_bits @ 0x1000e1d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Clears specific bits in a task control block's flag field based on a bitmask.
 * summary:
 *   Validates the task ID against a global limit (DAT_10011d46) and checks for a specific
 *   state (-2) in the TCB. If valid, it performs a bitwise AND with the inverse of the
 *   provided mask (param_2) on the flag field located at offset -4 within the 12-byte TCB
 *   structure. Returns 0 on success or error codes 0xffffffee and 0xffffffd6 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t clear_task_flag_bits(int param_1,uint param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 < 1) || (DAT_10011d46/*ROM*/ < param_1)) {
    uVar1 = E_ID;
  }
  else {
    iVar2 = DAT_10011d10/*ROM*/ + (short)param_1 * 0xc;
    if (*(short *)(iVar2 + -0xc) == -2) {
      uVar1 = E_NOEXS;
    }
    else if (param_2 == 0xffffffff) {
      uVar1 = 0;
    }
    else {
      *(uint *)(iVar2 + -4) = *(uint *)(iVar2 + -4) & param_2;
      uVar1 = 0;
    }
  }
  return uVar1;
}
