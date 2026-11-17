/* @k10d find_free_tcb_slot_1000d6e4 @ 0x1000d6e4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Scans a TCB array for the first zeroed entry and dispatches the found index to a
 *   helper.
 * summary:
 *   Validates that the low 12 bits of the header word in param_1 are zero and that the
 *   field at offset 24 is non-zero. It then iterates over DAT_10011d38 entries in the array
 *   at DAT_10011cf4 (stride 0x1c) to find the first slot where the first int is zero. If a
 *   free slot is found, it calls insert_into_timeout_queue_1000f6b4 with the slot index and
 *   param_1; otherwise it returns -0x22. Returns -0x11 if the offset-24 field is zero, and
 *   -0xb if the header validation fails. The 0x1c stride and zero-check pattern are
 *   consistent with searching a task-control-block pool in a µITRON-style kernel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int find_free_tcb_slot_1000d6e4(ushort *param_1)

{
  int iVar1;
  int caller_r10;
  
  if ((*param_1 & 0xfff9) == 0) {
    if (*(int *)(param_1 + 6) == 0) {
      caller_r10 = E_PAR;
    }
    else {
      iVar1 = 0;
      if (0 < DAT_10011d38/*ROM*/) {
        do {
          if (*(int *)(iVar1 * 0x1c + DAT_10011cf4/*ROM*/) == 0) {
            caller_r10 = (int)(short)((short)iVar1 + 1);
            break;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 < DAT_10011d38/*ROM*/);
      }
      if (iVar1 < DAT_10011d38/*ROM*/) {
        insert_into_timeout_queue_1000f6b4((short)caller_r10,param_1);
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
