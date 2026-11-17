/* @k10d find_free_queue_slot_1000d978 @ 0x1000d978
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Searches a fixed-size array of 14-byte entries for a slot marked -2 and dispatches the
 *   request to it.
 * summary:
 *   Validates that the low 12 bits of the first word in param_1 are zero, then either
 *   checks a specific index against a bound (DAT_10011d4c) or scans DAT_10011d40 entries at
 *   DAT_10011d04 for a value of -2. If a free slot is found, it calls initialize_queue_node
 *   with the slot index and the request pointer; otherwise it returns error codes -0x22 (no
 *   free slot) or -0xb (invalid request). The source module is identified as rtos_kernel,
 *   suggesting this manages a kernel-level resource or message queue.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int find_free_queue_slot_1000d978(ushort *param_1)

{
  int iVar1;
  int caller_r10;
  
  if ((*param_1 & 0xfffc) == 0) {
    if ((*param_1 == 3) && (((short)param_1[1] < 1 || (DAT_10011d4c/*ROM*/ < (short)param_1[1])))) {
      caller_r10 = E_PAR;
    }
    else {
      iVar1 = 0;
      if (0 < DAT_10011d40/*ROM*/) {
        do {
          if (*(short *)(iVar1 * 0xe + DAT_10011d04/*ROM*/) == -2) {
            caller_r10 = (int)(short)((short)iVar1 + 1);
            break;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 < DAT_10011d40/*ROM*/);
      }
      if (iVar1 < DAT_10011d40/*ROM*/) {
        initialize_queue_node((short)caller_r10,param_1);
      }
      else {
        caller_r10 = E_NOID;
      }
    }
  }
  else {
    caller_r10 = E_RSATR;
  }
  return caller_r10;
}
