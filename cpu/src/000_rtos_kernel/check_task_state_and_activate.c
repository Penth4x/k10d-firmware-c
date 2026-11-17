/* @k10d check_task_state_and_activate @ 0x1001194c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t check_task_state_and_activate(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 < 1) || (DAT_10011d4a/*ROM*/ < param_1)) {
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
