/* @k10d release_object_field_pointer @ 0x1046c5e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the pointer stored at offset 4 of the object if it is non-null.
 * summary:
 *   Checks the integer at offset 4 of the object passed in param_1. If it is not zero, it
 *   calls kernel_diag_taskstack with the value at offset 8 (the pointer at offset 4 plus
 *   4). This is virtual slot 5 of cls_105a8e3c, likely a cleanup or release method for a
 *   resource held by the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_field_pointer(cls_105a8e3c *param_1)

{
  if (param_1->field_0x4 != 0) {
    kernel_diag_taskstack((int *)(param_1->field_0x4 + 4));
  }
  return;
}
