/* @k10d call_subobject_at_offset_0x14_1044137c @ 0x1044137c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x14 of param_1 and passes it to
 *   set_flag2_with_notify.
 * summary:
 *   The function loads the value at param_1 + 0x14, treating it as a pointer, and forwards
 *   it as the sole argument to set_flag2_with_notify. It performs no other operations and
 *   returns void. The role of set_flag2_with_notify is unknown, so the specific subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_1044137c(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x14));
  return;
}
