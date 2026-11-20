/* @k10d override_parent_slot_two @ 0x104df306
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Overrides virtual slot 2 of cls_105bb0ec by delegating to the parent implementation.
 * summary:
 *   This function is virtual method slot 2 of class cls_105bb314, which derives from
 *   cls_105bb0ec. It contains no local logic and simply calls
 *   initialize_object_subcomponent, which is the verified slot 2 implementation of the
 *   parent class cls_105bb0ec. This pattern indicates a pass-through override where the
 *   derived class does not modify the base class behavior for this specific virtual method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void override_parent_slot_two(cls_105bb314 *param_1)

{
  initialize_object_subcomponent((cls_105bb0ec *)param_1);
  return;
}
