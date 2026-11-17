/* @k10d toggle_flag_and_call_handler_10433f62 @ 0x10433f62
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Sets a flag on an object, calls a handler with a related value, then clears the flag.
 * summary:
 *   The function writes the value 1 to a field at offset 0x28 of the object in param_1 via
 *   dispatch_context_request. It then obtains a pointer from sr_driver_singleton and passes
 *   the value at offset 4 of that pointer to invoke_virtual_methods_on_object_array.
 *   Finally, it writes 0 to the same field at offset 0x28 via dispatch_context_request,
 *   effectively bracketing the handler call with a set/clear operation on the object's
 *   state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_call_handler_10433f62(int param_1)

{
  int iVar1;
  
  dispatch_context_request(*(uint32_t *)(param_1 + 0x28),0,1,1);
  iVar1 = sr_driver_singleton();
  invoke_virtual_methods_on_object_array((void *)(*(uint32_t *)(iVar1 + 4)));
  dispatch_context_request(*(uint32_t *)(param_1 + 0x28),0,0,1);
  return;
}
