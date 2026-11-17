/* @k10d call_helper_with_offset_10492a5c @ 0x10492a5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Calls get_or_create_singleton_object_10492ade and passes its result plus 4 to
 *   kernel_diag_taskstack.
 * summary:
 *   The function invokes get_or_create_singleton_object_10492ade to obtain an integer
 *   value, adds 4 to it, and passes the sum as the sole argument to kernel_diag_taskstack.
 *   It is virtual method slot 5 of class cls_105b42fc. No other side effects or global
 *   accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_10492a5c(void)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10492ade();
  kernel_diag_taskstack((void *)(iVar1 + 4));
  return;
}
