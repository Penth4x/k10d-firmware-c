/* @k10d find_free_tcb_slot_1000d770 @ 0x1000d770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int find_free_tcb_slot_1000d770(ushort *param_1)

{
  int iVar1;
  int caller_r9;
  
  if ((*param_1 & 0xfff8) == 0) {
    iVar1 = 0;
    if (0 < DAT_10011d46/*ROM*/) {
      do {
        if (*(short *)(iVar1 * 0xc + DAT_10011d10/*ROM*/) == -2) {
          caller_r9 = (int)(short)((short)iVar1 + 1);
          break;
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < DAT_10011d46/*ROM*/);
    }
    if (iVar1 < DAT_10011d46/*ROM*/) {
      write_timeout_queue_node((short)caller_r9,param_1);
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
