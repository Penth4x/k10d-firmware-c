/* @k10d find_free_queue_slot_1000da18 @ 0x1000da18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a queue descriptor and locates the first free slot in a fixed-size table.
 * summary:
 *   Checks that the descriptor's type field is zero and that its start/end indices are
 *   valid and ordered. It then scans a global table of 10-byte entries (DAT_10011d14) for a
 *   slot marked -2 (free) up to the count in DAT_10011d48. If a free slot is found, it
 *   calls write_task_control_block_entry with the slot index and the descriptor; otherwise
 *   it returns error codes (-0x22, -0x11, or -0xb) for no free slot, invalid indices, or
 *   invalid type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int find_free_queue_slot_1000da18(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  int caller_r10;
  
  if ((*param_1 & 0xfffe) == 0) {
    if ((((*(uint *)(param_1 + 2) < 0x10000) && (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0)) &&
        (uVar1 < 0x10000)) && (*(uint *)(param_1 + 2) <= uVar1)) {
      iVar2 = 0;
      if (0 < DAT_10011d48/*ROM*/) {
        do {
          if (*(short *)(iVar2 * 10 + DAT_10011d14/*ROM*/) == -2) {
            caller_r10 = (int)(short)((short)iVar2 + 1);
            break;
          }
          iVar2 = (int)(short)((short)iVar2 + 1);
        } while (iVar2 < DAT_10011d48/*ROM*/);
      }
      if (iVar2 < DAT_10011d48/*ROM*/) {
        write_task_control_block_entry((short)caller_r10,param_1);
      }
      else {
        caller_r10 = E_NOID;
      }
    }
    else {
      caller_r10 = E_PAR;
    }
  }
  else {
    caller_r10 = E_RSATR;
  }
  return caller_r10;
}
