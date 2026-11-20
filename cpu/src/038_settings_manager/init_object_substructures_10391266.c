/* @k10d init_object_substructures_10391266 @ 0x10391266
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes two sub-structures within the object and calls a base class virtual method.
 * summary:
 *   This function is virtual slot 2 of cls_10562400. It calls override_parent_slot_two
 *   (base class virtual slot 2), invoke_virtual_slot_7_on_sixteen_objects, and then
 *   initializes two specific offsets within the object (param_1 + 0x2c50 and param_1 +
 *   0x2c20) via call_helper_on_offset_field_10391b2e and create_kernel_object. It returns
 *   1, likely indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t init_object_substructures_10391266(cls_10562400 *param_1)

{
  override_parent_slot_two((cls_105bb314 *)param_1);
  invoke_virtual_slot_7_on_sixteen_objects();
  call_helper_on_offset_field_10391b2e((int)(&param_1[0x46].field_0x90));
  create_kernel_object(&param_1[0x46].field_0x60);
  return 1;
}
