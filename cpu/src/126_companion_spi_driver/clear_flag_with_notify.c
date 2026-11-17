/* @k10d clear_flag_with_notify @ 0x10439822
 * name: earlier (carried from an earlier Ghidra session, not re-verified)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a bit in a flag word at offset 0x10 using a mask at 0x1c, calling notify hooks
 *   at 0x20 before and after.
 * summary:
 *   The function reads a pointer at param_1+0x20 and calls call_kernel_with_short_id if
 *   non-null. It then clears a specific bit in the 32-bit value at param_1+0x10 by ANDing
 *   it with the bitwise NOT of the mask byte at param_1+0x1c. Finally, it calls
 *   check_kernel_call_success_10459d88 if the pointer at param_1+0x20 is still non-null.
 *   The structure suggests a flag management routine with pre- and post-clear notification
 *   callbacks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_with_notify(void *param_1)

{
                    /* Purpose: Clear flag with notification. Clears bit in [obj+0x10] using mask
                       [obj+0x1c], calls FUN_10459d74/d88 (notify) if [obj+0x20] non-null.
                       Params: param_1 = object pointer.
                       Returns: void. */
  if (*(int *)((int)param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x20));
  }
  **(byte **)((int)param_1 + 0x10) =
       **(byte **)((int)param_1 + 0x10) & (*(byte *)((int)param_1 + 0x1c) ^ 0xff);
  if (*(int *)((int)param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x20));
  }
  return;
}
