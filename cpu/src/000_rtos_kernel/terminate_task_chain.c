/* @k10d terminate_task_chain @ 0x1001155c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Walks a linked list of task IDs and calls two kernel routines to remove each entry.
 * summary:
 *   Reads a short ID from an array indexed by param_1, then iterates a linked list (stride
 *   0xe, next pointer at offset -10) until -1. For each ID it clears a 2-byte field at
 *   DAT_10011d04+id*0xe-2, calls update_timeout_queue_entry(param_1, id), and calls
 *   dequeue_timeout_entry(id). The module is the RTOS kernel, so this is likely a task or
 *   resource teardown loop, but the exact kernel object is not confirmed by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void terminate_task_chain(short param_1)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_1 * 0x44 + 0x6a001bf0);
  while (sVar2 != -1) {
    iVar1 = sVar2 * 0xe;
    *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar1 + -2) = 0;
    update_timeout_queue_entry(param_1,sVar2);
    dequeue_timeout_entry(sVar2);
    sVar2 = *(short *)(iVar1 + DAT_10011d04/*ROM*/ + -10);
  }
  return;
}
