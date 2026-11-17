/* @k10d call_three_helpers_on_object_1036de5e @ 0x1036de5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on the given object pointer, passing a derived offset
 *   and a zero constant.
 * summary:
 *   The function takes a single object pointer and calls reset_object_fields_and_call_base
 *   on the field at offset 0x9c, then calls dispatch_object_state_update_1036e02a with the
 *   object and 0, and finally calls empty_stub_1036e028 with the object. No return value is
 *   produced. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a sequence of three calls on the input object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_object_1036de5e(void *param_1)

{
  reset_object_fields_and_call_base((void *)((int)param_1 + 0x9c));
  dispatch_object_state_update_1036e02a(param_1,0);
  empty_stub_1036e028(param_1);
  return;
}
