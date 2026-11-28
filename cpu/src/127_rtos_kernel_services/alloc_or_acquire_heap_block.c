/* @k10d alloc_or_acquire_heap_block @ 0x104597ac
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x20000-byte heap block when param_2 is zero, otherwise acquires an
 *   existing block via param_2, storing the handle in *param_1 and mapping errors to -1/-3.
 * summary:
 *   Writes param_2 into *param_1 and sets a local size field to 0x20000. If param_2 is zero
 *   it calls find_free_tcb_slot_1000d770 with the size descriptor; otherwise it calls
 *   validate_task_id_and_flag with a truncated param_2 and the descriptor. On success it
 *   stores the returned handle in *param_1; on failure it maps 0 to 0, -0x21 to -1, and any
 *   other code to -3. The module context (rtos_wrappers_and_heap) supports a heap
 *   allocation/acquisition role, but the specific kernel services are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int alloc_or_acquire_heap_block(int *out_handle, int task_id, uint32_t flgptn)

{
  int kernel_result;
  /* Two-word kernel descriptor: attr (0x20000) at +0, flgptn at +4.
   * The kernel service reads both words from the pointer passed as its argument. */
  uint32_t obj_desc[2];

  obj_desc[0] = 0x20000;
  *out_handle = task_id;
  obj_desc[1] = flgptn;
  if (task_id == 0) {
    kernel_result = __trap_find_free_tcb_slot_1000d770(obj_desc);
    if (0 < kernel_result) {
      *out_handle = kernel_result;
      return kernel_result;
    }
  }
  else {
    kernel_result = __trap_validate_task_id_and_flag((int)(short)task_id, obj_desc);
  }
  if (kernel_result == 0) {
    kernel_result = 0;
  }
  else if (kernel_result == -0x21) {
    kernel_result = -1;
  }
  else {
    kernel_result = -3;
  }
  return kernel_result;
}
