/* @k10d call_three_kernel_routines @ 0x100108c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Invokes three unnamed kernel-service routines in sequence, passing the incoming r4
 *   value to each.
 * summary:
 *   The function takes the value in r4 (in_r4) and calls cre_tsk, ready_list_insert, and
 *   dispatch_kernel_service_1000e6e0 in that order, forwarding the same argument to each.
 *   It returns the value in r4 from the final callee (extraout_r4). All three callees are
 *   in the rtos_kernel module, but their specific roles are not named, so the exact kernel
 *   operation (e.g., task state change, interrupt control) cannot be determined from this
 *   wrapper alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_three_kernel_routines(void)

{
  short r4_in;
  uint32_t extraout_r4;
  
  cre_tsk(r4_in);
  ready_list_insert(r4_in);
  dispatch_kernel_service_1000e6e0(r4_in);
  return extraout_r4;
}
