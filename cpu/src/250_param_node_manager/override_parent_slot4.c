/* @k10d override_parent_slot4 @ 0x104df322
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Overrides virtual slot 4 by delegating to the base class implementation.
 * summary:
 *   This function is virtual method slot 4 of class cls_105bb314. It takes a single
 *   parameter and immediately forwards it to release_slot4_object_ref, which is the
 *   corresponding virtual method slot 4 of the parent class cls_105bb0ec. It contains no
 *   additional logic, side effects, or state modifications beyond the call to the base
 *   class method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void override_parent_slot4(cls_105bb314 *param_1)

{
  release_slot4_object_ref((cls_105bb0ec *)param_1);
  return;
}
