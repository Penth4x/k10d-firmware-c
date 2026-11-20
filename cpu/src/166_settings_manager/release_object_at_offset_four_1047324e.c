/* @k10d release_object_at_offset_four_1047324e @ 0x1047324e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 166_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 4 of the given structure if it is non-
 *   null.
 * summary:
 *   Checks the 4-byte field at offset 4 of param_1. If non-zero, it calls
 *   kernel_diag_taskstack with the pointer at offset 8 of that referenced object. This is
 *   virtual slot 5 of cls_105aa2f4, likely a cleanup or destructor helper that releases a
 *   sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_four_1047324e(cls_105aa2f4 *param_1)

{
  if (param_1->field_0x4 != 0) {
    kernel_diag_taskstack((int *)(param_1->field_0x4 + 8));
  }
  return;
}
