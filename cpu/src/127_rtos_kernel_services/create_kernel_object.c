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
  /* Descriptor-split bug (same class as alloc_or_acquire_heap_block): the kernel reads a 3-word
   * descriptor {attr@+0, exinf@+4, handler@+8} (insert_timeout_queue_node copies +4 and +8), but the
   * decompiler emitted the fields as NON-adjacent, DESCENDING stack locals (uStack_10@sp+0x10,
   * piStack_c@sp+0xc, pcStack_8@sp+8) and passed &uStack_10, so +4/+8 landed on uninitialized slots
   * -> the created cyclic handler got a garbage handler/exinf; when activated it corrupted SP and
   * derailed (act_tsk path). Stock descriptor = {0, exinf=param_1, handler=0x10459448}; lay the
   * three words out contiguously. */
  uint32_t desc[3];

  desc[0] = 0;                                               /* attr */
  desc[1] = (uint32_t)param_1;                               /* exinf */
  desc[2] = (uint32_t)call_virtual_slot_2_on_nested_object;  /* handler (0x10459448) */
  *param_1 = 0;
  iVar1 = __trap_find_free_queue_slot_1000d66c((void *)desc);
  if (0 < iVar1) {
    *param_1 = iVar1;
  }
  return 0 < iVar1;
}
