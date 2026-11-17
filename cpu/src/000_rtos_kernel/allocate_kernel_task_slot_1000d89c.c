/* @k10d allocate_kernel_task_slot_1000d89c @ 0x1000d89c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task descriptor and allocates a free slot from the kernel task table.
 * summary:
 *   Checks that the descriptor's size fields are valid (min 0x1c/0x14, aligned, consistent)
 *   and that the task ID is zero (new task). It scans the task table (DAT_10011cf8) for a
 *   slot marked -2 (free). If a slot is found, it calls allocate_kernel_memory_block to
 *   allocate memory for the task stack/context if not provided, then calls
 *   init_timeout_queue_node to initialize the task in that slot. Returns the slot index on
 *   success or negative error codes (-0x11, -0x21, -0x22, -0xb) on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int allocate_kernel_task_slot_1000d89c(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int caller_r9;
  uintptr_t sp;
  void *pvStack_c;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((((((int)uVar1 < 0x1c) || (uVar2 = *(uint *)(param_1 + 6), (int)uVar2 < 0x14)) ||
       (uVar1 - 8 < uVar2)) || (((uVar1 & 3) != 0 || ((uVar2 & 3) != 0)))) ||
     (pvStack_c = *(void **)(param_1 + 4), ((uint)pvStack_c & 3) != 0)) {
    caller_r9 = E_PAR;
  }
  else if ((*param_1 & 0xfffe) == 0) {
    iVar3 = 0;
    if (0 < DAT_10011d3a/*ROM*/) {
      do {
        if (*(short *)(iVar3 * 0x20 + DAT_10011cf8/*ROM*/) == -2) {
          caller_r9 = (int)(short)((short)iVar3 + 1);
          break;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < DAT_10011d3a/*ROM*/);
    }
    if (iVar3 < DAT_10011d3a/*ROM*/) {
      if ((pvStack_c == (void *)0x0) &&
         (iVar3 = allocate_kernel_memory_block(*(uint *)(param_1 + 2),&pvStack_c), iVar3 != 1)) {
        caller_r9 = E_NOMEM;
      }
      else {
        init_timeout_queue_node(caller_r9,param_1,pvStack_c);
      }
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
