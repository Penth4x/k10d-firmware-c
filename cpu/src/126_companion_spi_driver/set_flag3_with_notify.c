/* @k10d set_flag3_with_notify @ 0x10439aba
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_flag_and_notify)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a bit in a flag word and calls two notification functions on an associated object.
 * summary:
 *   The function checks if the pointer at offset 0x20 is non-null. If so, it calls
 *   call_kernel_with_short_id with that pointer. It then ORs the byte at offset 0x1c into
 *   the byte pointed to by the pointer at offset 0x28, and copies that resulting byte to
 *   the location pointed to by the pointer at offset 0x18. Finally, if the pointer at
 *   offset 0x20 is still non-null, it calls check_kernel_call_success_10459d88 with that
 *   pointer. The callees are unnamed, so the specific nature of the notification is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag3_with_notify(void *param_1)

{
                    /* Purpose: Set flag3 with notification. Sets bit in [obj+0x28] using mask
                       [obj+0x1c], copies to [obj+0x18], calls FUN_10459d74/d88 (notify) if
                       [obj+0x20] non-null.
                       Params: param_1 = object pointer.
                       Returns: void. */
  if (*(int *)((int)param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x20));
  }
  **(byte **)((int)param_1 + 0x28) =
       **(byte **)((int)param_1 + 0x28) | *(byte *)((int)param_1 + 0x1c);
  **(uint8_t **)((int)param_1 + 0x18) = **(uint8_t **)((int)param_1 + 0x28);
  if (*(int *)((int)param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x20));
  }
  return;
}
