/* @k10d clear_flag2_with_notify @ 0x10439938
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clear_flag_and_notify)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a bit in a flag word and calls two notification functions if a pointer field is
 *   set.
 * summary:
 *   The function takes a structure pointer. If the field at offset 0x20 is non-null, it
 *   calls call_kernel_with_short_id with that pointer. It then clears a specific bit in the
 *   byte pointed to by the pointer at offset 0x24, using the inverse of the byte at offset
 *   0x1c as a mask. It copies the resulting byte value to the location pointed to by the
 *   pointer at offset 0x14. Finally, if the field at offset 0x20 is still non-null, it
 *   calls check_kernel_call_success_10459d88 with that pointer. The callees are unnamed, so
 *   the specific subsystem (e.g., event queue, status register) is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag2_with_notify(void *param_1)

{
                    /* Purpose: Clear flag2 with notification. Clears bit in [obj+0x24] using mask
                       [obj+0x1c], copies to [obj+0x14], calls FUN_10459d74/d88 (notify) if
                       [obj+0x20] non-null.
                       Params: param_1 = object pointer.
                       Returns: void. */
  if (*(int *)((int)param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x20));
  }
  **(byte **)((int)param_1 + 0x24) =
       **(byte **)((int)param_1 + 0x24) & (*(byte *)((int)param_1 + 0x1c) ^ 0xff);
  **(uint8_t **)((int)param_1 + 0x14) = **(uint8_t **)((int)param_1 + 0x24);
  if (*(int *)((int)param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x20));
  }
  return;
}
