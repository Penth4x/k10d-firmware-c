/* @k10d initialize_object_three_steps @ 0x1048aa54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions on the object pointer and returns the pointer unchanged.
 * summary:
 *   The function takes a single object pointer (param_1), passes it to three callees
 *   (set_two_fields_to_four, enable_display_output, call_0x1048c3f4) in sequence, and
 *   returns the same pointer. It is virtual slot 3 of class cls_105b3ae4. The specific
 *   roles of the callees are unknown, so the operation is described mechanically as a
 *   three-step initialization or setup sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3ae4 * initialize_object_three_steps(cls_105b3ae4 *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  call_0x1048c3f4((int)param_1);
  return param_1;
}
