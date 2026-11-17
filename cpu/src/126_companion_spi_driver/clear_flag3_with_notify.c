/* @k10d clear_flag3_with_notify @ 0x10439a66
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clear_flag_and_notify)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a bit in a flag word and calls two notification functions if a pointer field is
 *   set.
 * summary:
 *   The function checks if the pointer at offset 0x20 is non-null. If so, it calls
 *   call_kernel_with_short_id. It then clears a specific bit in the byte pointed to by the
 *   pointer at offset 0x28, where the bit mask is derived from the byte at offset 0x1c
 *   (inverted). It copies the updated byte value to the location pointed to by the pointer
 *   at offset 0x18. Finally, if the pointer at offset 0x20 is still non-null, it calls
 *   check_kernel_call_success_10459d88. The callees are unnamed, so the specific subsystem
 *   (e.g., UI, event queue) is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag3_with_notify(void *param_1)

{
                    /* Purpose: Clear flag3 with notification. Clears bit in [obj+0x28] using mask
                       [obj+0x1c], copies to [obj+0x18], calls FUN_10459d74/d88 (notify) if
                       [obj+0x20] non-null.
                       Params: param_1 = object pointer.
                       Returns: void. */
  if (*(int *)((int)param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x20));
  }
  **(byte **)((int)param_1 + 0x28) =
       **(byte **)((int)param_1 + 0x28) & (*(byte *)((int)param_1 + 0x1c) ^ 0xff);
  **(uint8_t **)((int)param_1 + 0x18) = **(uint8_t **)((int)param_1 + 0x28);
  if (*(int *)((int)param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x20));
  }
  return;
}
