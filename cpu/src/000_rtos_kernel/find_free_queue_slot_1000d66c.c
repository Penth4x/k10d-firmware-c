/* @k10d find_free_queue_slot_1000d66c @ 0x1000d66c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int find_free_queue_slot_1000d66c(ushort *param_1)

{
  int iVar1;
  int caller_r9;
  
  if (*param_1 == 0) {
    iVar1 = 0;
    if (0 < DAT_10011d36/*ROM*/) {
      do {
        if (*(int *)(iVar1 * 0x18 + DAT_10011cf0/*ROM*/) == 0) {
          caller_r9 = (int)(short)((short)iVar1 + 1);
          break;
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < DAT_10011d36/*ROM*/);
    }
    if (iVar1 < DAT_10011d36/*ROM*/) {
      insert_timeout_queue_node((short)caller_r9,param_1);
    }
    else {
      caller_r9 = E_NOID;
    }
  }
  else {
    caller_r9 = E_RSATR;
  }
  return caller_r9;
}
