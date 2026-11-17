/* @k10d toggle_flag_and_call_handler_1046d81a @ 0x1046d81a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag to 1, calls a handler with a pointer from the object, then sets the flag to
 *   0.
 * summary:
 *   The function takes an object pointer (param_1). It calls post_event_to_subobject with
 *   the object and value 1, then calls invoke_virtual_methods_on_object_array with the
 *   value stored at offset 0x14 of the object. Finally, it calls post_event_to_subobject
 *   again with the object and value 0. This pattern suggests enabling a state, performing
 *   an operation on a sub-component or ID, and then disabling the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_call_handler_1046d81a(int param_1)

{
  post_event_to_subobject(param_1,1);
  invoke_virtual_methods_on_object_array((void *)(*(uint32_t *)(param_1 + 0x14)));
  post_event_to_subobject(param_1,0);
  return;
}
