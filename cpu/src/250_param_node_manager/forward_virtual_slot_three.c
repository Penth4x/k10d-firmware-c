/* @k10d forward_virtual_slot_three @ 0x104df314
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Forwards a virtual slot 3 call to the base class implementation.
 * summary:
 *   This function is virtual method slot 3 of class cls_105bb314. It contains no logic of
 *   its own and simply calls check_field_at_offset_0x70, which is the corresponding virtual
 *   method slot 3 of the base class cls_105bb0ec. This is a standard C++ virtual function
 *   override that delegates entirely to the parent class implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_virtual_slot_three(void)

{
  check_field_at_offset_0x70(__frv_reg_unset(4));
  return;
}
