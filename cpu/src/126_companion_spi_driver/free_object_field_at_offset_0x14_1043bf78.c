/* @k10d free_object_field_at_offset_0x14_1043bf78 @ 0x1043bf78
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14; if non-null, calls set_flag_with_notify on it.
 *   set_flag_with_notify is unnamed, so the exact deallocation semantics are unknown, but
 *   the pattern is a conditional release of a single member pointer. No other side effects
 *   are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_field_at_offset_0x14_1043bf78(int param_1)

{
  if (*(void **)(param_1 + 0x14) != 0) {
    set_flag_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
