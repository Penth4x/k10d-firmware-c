/* @k10d call_subobject_at_offset_0x14_1044076c @ 0x1044076c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 0x14 of the input object and passes it to a single-
 *   argument helper.
 * summary:
 *   The function reads the pointer stored at param_1 + 0x14 and forwards it as the sole
 *   argument to set_flag_with_notify. No other state is read or modified. The role of the
 *   sub-object and the callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_1044076c(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x14));
  return;
}
