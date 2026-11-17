/* @k10d enqueue_timeout_event_10011a74 @ 0x10011a74
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes a timeout descriptor into a per-slot queue and dispatches it to the scheduler.
 * summary:
 *   The function uses the index in param_1 to compute an offset into a 0x44-byte stride
 *   table at 0x6a001c06, writing a type code (4), a sub-code (7), and the parameter value.
 *   It then calls ready_list_unlink with the index, and conditionally calls either
 *   remove_node_from_timeout_queue_10011a20 or insert_into_priority_queue based on a flag
 *   in a table at DAT_10011d04. The module context (rtos_kernel, scheduler/timeout-queue)
 *   and the mechanical pattern of writing to a queue slot and invoking a dispatch routine
 *   strongly suggest this is a timeout or event enqueue operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enqueue_timeout_event_10011a74(short param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = _DAT_6a003758;
  iVar2 = (int)_DAT_6a003758;
  *(uint8_t *)(_DAT_6a003758 * 0x44 + 0x6a001c06) = 4;
  *(uint8_t *)(iVar2 * 0x44 + 0x6a001c07) = 7;
  *(short *)(sVar1 * 0x44 + 0x6a001c08) = param_1;
  ready_list_unlink(sVar1);
  iVar2 = DAT_10011d04/*ROM*/ + param_1 * 0xe;
  if (*(short *)(iVar2 + -6) == 0) {
    remove_node_from_timeout_queue_10011a20((short *)(iVar2 + -0xe));
  }
  else {
    insert_into_priority_queue(_DAT_6a003758,(short *)(iVar2 + -0xe));
  }
  return;
}
