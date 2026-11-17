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

void override_parent_slot_two(void)

{
  initialize_object_subcomponent(__frv_reg_unset(4));
  return;
}
