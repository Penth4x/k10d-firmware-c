/* @k10d check_task_state_transition @ 0x1000d540
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task ID and checks state flags to permit a state change, setting a pending
 *   flag on success.
 * summary:
 *   The function takes a task ID (param_1) and validates it against a global limit
 *   (DAT_10011d4a) and a specific task table entry at 0x6a001be8. It checks various status
 *   bits in DAT_6a003aa4 and DAT_6a003aa5 to determine if a transition is allowed. If
 *   valid, it sets bit 0x80 in DAT_6a003aa5 and stores a value in _DAT_6a003aa0. The module
 *   context suggests this is a kernel service routine for task management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_task_state_transition(uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t extraout_r5;
  int caller_r14;
  
  if (param_1 == 0) {
    return E_ID;
  }
  if (_DAT_6a003758 != param_1) {
    if (((int)param_1 < 1) || ((int)DAT_10011d4a/*ROM*/ < (int)param_1)) {
      uVar2 = E_ID;
    }
    else {
      iVar1 = (short)param_1 * 0x44;
      if (*(short *)(iVar1 + 0x6a001be8) == -2) {
        uVar2 = E_NOEXS;
      }
      else if (*(char *)(iVar1 + 0x6a001c06) == '\x10') {
        cre_tsk_insert_setup();
        uVar2 = 0;
      }
      else {
        uVar2 = E_OBJ;
      }
    }
    return uVar2;
  }
  if ((((*(byte *)(caller_r14 + 0x4f) & 0x20) != 0) ||
      (mask_26bit(param_1), *(short *)(caller_r14 + 0x2c) != 0)) || ((DAT_6a003aa5 & 0xc0) != 0)) {
    return E_OBJ;
  }
  if ((DAT_6a003aa5 & 0x10) == 0) {
    if ((DAT_6a003aa4 & 0x10) != 0) {
      return E_NOEXS;
    }
    if ((DAT_6a003aa4 & 0xc0) == 0) {
      return E_OBJ;
    }
  }
  DAT_6a003aa5 = DAT_6a003aa5 | 0x80;
  _DAT_6a003aa0 = extraout_r5;
  return 0;
}
