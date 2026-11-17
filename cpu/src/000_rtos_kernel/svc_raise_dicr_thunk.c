/* @k10d svc_raise_dicr_thunk @ 0x1000e644
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed reset_flag_and_dispatch)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Clears a global flag and invokes two kernel service routines in sequence.
 * summary:
 *   The function calls reschedule_raise_dicr, sets the global variable DAT_6a003aa8 to 0,
 *   and then calls empty_kernel_stub_1000d320. It is located in the rtos_kernel module,
 *   suggesting it performs a specific kernel state transition or service request. The exact
 *   roles of the callees are not provided, so the specific kernel operation is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void svc_raise_dicr_thunk(void)

{
  reschedule_raise_dicr();
  DAT_6a003aa8 = 0;
  empty_kernel_stub_1000d320();
  return;
}
