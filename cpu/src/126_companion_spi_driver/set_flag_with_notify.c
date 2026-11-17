/* @k10d set_flag_with_notify @ 0x1043986a
 * name: earlier (carried from an earlier Ghidra session, not re-verified)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a bit in a flag word pointed to by obj+0x10 using the mask at obj+0x1c, bracketing
 *   the write with lock/unlock calls on obj+0x20.
 * summary:
 *   The function dereferences the pointer at param_1+0x10 and ORs it with the byte mask at
 *   param_1+0x1c. If the pointer at param_1+0x20 is non-null, it calls
 *   call_kernel_with_short_id before the write and check_kernel_call_success_10459d88
 *   after, which likely act as mutex lock and unlock primitives. This pattern is consistent
 *   with a thread-safe flag-setting operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_with_notify(void *param_1)

{
                    /* Purpose: Set flag with notification. Sets bit in [obj+0x10] using mask
                       [obj+0x1c], calls FUN_10459d74/d88 (notify) if [obj+0x20] non-null.
                       Params: param_1 = object pointer.
                       Returns: void. */
  if (*(int *)((int)param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x20));
  }
  **(byte **)((int)param_1 + 0x10) =
       **(byte **)((int)param_1 + 0x10) | *(byte *)((int)param_1 + 0x1c);
  if (*(int *)((int)param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x20));
  }
  return;
}
