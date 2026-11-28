/* @k10d rtos_can_dispatch @ 0x1000e758
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_dispatch_allowed)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns true if the RTOS dispatcher is permitted to run based on a kernel flag or a
 *   global state byte.
 * summary:
 *   Calls rtos_dispatch_allowed_chk and checks if the result is non-zero or if the global
 *   DAT_6a003aa8 is non-zero. This function acts as a gate for scheduler operations, likely
 *   checking if the kernel is in a state where task dispatching is allowed. It is called by
 *   several kernel services including the semaphore wait function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool rtos_can_dispatch(void)

{
  int chk_ret;

  chk_ret = rtos_dispatch_allowed_chk();
  return chk_ret != 0 || DAT_6a003aa8 != '\0';
}
