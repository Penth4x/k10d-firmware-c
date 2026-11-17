/* @k10d free_object_field_at_offset_0x14_1043c5fc @ 0x1043c5fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14 and, if non-null, passes it to
 *   clear_flag2_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional release of a single object field. No camera subsystem is
 *   indicated by the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_field_at_offset_0x14_1043c5fc(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    clear_flag2_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
