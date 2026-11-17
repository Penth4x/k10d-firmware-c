/* @k10d call_subobject_at_offset_0x14_104400b8 @ 0x104400b8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x14 of param_1 and passes it to
 *   set_flag_with_notify.
 * summary:
 *   The function reads a pointer from offset 0x14 of the object pointed to by param_1 and
 *   forwards it as the sole argument to set_flag_with_notify. No other operations, side
 *   effects, or state modifications are visible in the pseudocode. The role of
 *   set_flag_with_notify is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_104400b8(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x14));
  return;
}
