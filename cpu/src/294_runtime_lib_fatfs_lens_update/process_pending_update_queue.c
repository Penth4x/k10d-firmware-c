/* @k10d process_pending_update_queue @ 0x105470a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Drains a linked list of pending items, invoking a virtual method on each node to
 *   process or finalize it.
 * summary:
 *   Iterates through a singly linked list pointed to by r8. For each node, it unlinks the
 *   node from the list and calls the virtual method at offset 8. If the node's field at
 *   offset 4 is zero, the method is called with no arguments; otherwise, it is called with
 *   the field value and the constant 2. This pattern is typical for processing a queue of
 *   tasks or events, such as firmware update steps or status notifications.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_pending_update_queue(void)

{
  int iVar1;
  int *caller_r8;
  
  iVar1 = *caller_r8;
  while (iVar1 != 0) {
    iVar1 = *caller_r8;
    *caller_r8 = *(int *)*caller_r8;
    if (*(int *)(iVar1 + 4) == 0) {
      (**(code **)(iVar1 + 8))();
    }
    else {
      (**(code **)(iVar1 + 8))(*(int *)(iVar1 + 4),2);
    }
    iVar1 = *caller_r8;
  }
  return;
}
