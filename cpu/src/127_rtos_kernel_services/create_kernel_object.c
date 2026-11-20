/* @k10d create_kernel_object @ 0x104593c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a kernel object via find_free_queue_slot_1000d66c and stores the returned ID in
 *   the caller's pointer.
 * summary:
 *   Initializes a stack structure with a zero value and a function pointer to
 *   call_virtual_slot_2_on_nested_object, then calls find_free_queue_slot_1000d66c to
 *   create a kernel object. If the call returns a positive ID, it stores that ID in the
 *   memory pointed to by param_1 and returns true; otherwise, it leaves param_1 as zero and
 *   returns false. This is a standard wrapper for creating a REALOS kernel object (like a
 *   task, mailbox, or semaphore).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool create_kernel_object(int *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_10;
  int *piStack_c;
  void (*pcStack_8)(void *);
  
  uStack_10 = 0;
  pcStack_8 = call_virtual_slot_2_on_nested_object;
  *param_1 = 0;
  piStack_c = param_1;
  iVar1 = __trap_find_free_queue_slot_1000d66c((void *)&uStack_10);
  if (0 < iVar1) {
    *param_1 = iVar1;
  }
  return 0 < iVar1;
}
