/* @k10d free_object_field_pointer_1043bf20 @ 0x1043bf20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x10 of the object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x10 and, if non-zero, passes it to
 *   set_flag_with_notify, which likely performs a deallocation or cleanup. The function
 *   acts as a small destructor or release helper for a single member of a struct. No other
 *   fields are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_field_pointer_1043bf20(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    set_flag_with_notify(*(void **)(param_1 + 0x10));
  }
  return;
}
