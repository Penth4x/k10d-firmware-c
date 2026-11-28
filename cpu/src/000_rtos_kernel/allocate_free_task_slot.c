/* @k10d allocate_free_task_slot @ 0x1000d7f0
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Finds a free slot in a fixed-size task table and initializes it with the given task
 *   descriptor.
 * summary:
 *   Scans an array of 0x10-byte entries (base DAT_10011d08, count DAT_10011d42) for a slot
 *   whose first word is -2 (free marker). If a free slot is found, it optionally stores
 *   param_1[1] into the slot (when bit 1 of *param_1 is set and param_1[1] >= 1) and calls
 *   initialize_timeout_queue_node_1000f778 to complete initialization. Returns the slot
 *   index on success, or negative error codes (-0x11, -0x22, -0xb) on failure. The source
 *   module is the RTOS kernel, consistent with task-control-block allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int allocate_free_task_slot(ushort *tcb_flags)

{
  int scan_idx;
  int ret_val;

  if ((*tcb_flags & 0xfffc) == 0) {
    scan_idx = 0;
    if (0 < DAT_10011d42/*ROM*/) {
      do {
        if (*(short *)(scan_idx * 0x10 + DAT_10011d08/*ROM*/) == -2) {
          ret_val = (int)(short)((short)scan_idx + 1);
          break;
        }
        scan_idx = (int)(short)((short)scan_idx + 1);
      } while (scan_idx < DAT_10011d42/*ROM*/);
    }
    if (scan_idx < DAT_10011d42/*ROM*/) {
      if ((*tcb_flags & 2) != 0) {
        if ((short)tcb_flags[1] < 1) {
          return E_PAR;
        }
        *(ushort *)(ret_val * 0x10 + DAT_10011d08/*ROM*/ + -10) = tcb_flags[1];
      }
      initialize_timeout_queue_node_1000f778(ret_val,tcb_flags);
    }
    else {
      ret_val = E_NOID;
    }
  }
  else {
    ret_val = E_RSATR;
  }
  return ret_val;
}
