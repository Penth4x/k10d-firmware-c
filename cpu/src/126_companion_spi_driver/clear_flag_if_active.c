/* @k10d clear_flag_if_active @ 0x1043d7b2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed release_pointer_at_offset_0x10c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls clear_flag2_with_notify on the pointer stored at offset 0x10c of param_1 if it is
 *   non-null.
 * summary:
 *   Reads the pointer at param_1+0x10c. If it is not NULL, passes it as the sole argument
 *   to clear_flag2_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional call on a struct field. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_active(void *param_1)

{
  if (*(void **)((int)param_1 + 0x10c) != (void *)0x0) {
    clear_flag2_with_notify(*(void **)((int)param_1 + 0x10c));
  }
  return;
}
