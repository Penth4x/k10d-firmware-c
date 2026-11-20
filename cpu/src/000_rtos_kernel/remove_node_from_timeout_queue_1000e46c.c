/* @k10d remove_node_from_timeout_queue_1000e46c @ 0x1000e46c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t remove_node_from_timeout_queue_1000e46c(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 < 1) || (DAT_10011d38/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 0x1c;
    iVar2 = DAT_10011cf4/*ROM*/ + iVar1;
    if (*(int *)(iVar2 + -0x1c) == 0) {
      uVar3 = E_NOEXS;
    }
    else {
      if (*(int *)(iVar2 + -0x1c) != iVar2 + -0x1c) {
        insert_into_timeout_queue_10011644((int *)(iVar2 + -0x1c));
      }
      *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar1 + -0x1c) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}
