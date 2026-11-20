/* @k10d check_kernel_object_id_valid @ 0x10459426
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if the 16-bit kernel object id in *param_1 is non-zero and passes a
 *   validity check via validate_and_lock_task_slot.
 * summary:
 *   Reads a short from the first word of param_1. If it is positive, calls
 *   validate_and_lock_task_slot with that id and returns whether the result is zero;
 *   otherwise returns false. Lives in the rtos_wrappers_and_heap module alongside heap and
 *   mailbox wrappers, consistent with a ÂµITRON kernel-object id validity probe.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool check_kernel_object_id_valid(int *param_1)

{
  int iVar1;
  
  iVar1 = -3;
  if (0 < *param_1) {
    iVar1 = __trap_validate_and_lock_task_slot((int)(short)*param_1);
  }
  return iVar1 == 0;
}
