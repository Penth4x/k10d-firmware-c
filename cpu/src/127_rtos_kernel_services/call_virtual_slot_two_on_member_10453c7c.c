/* @k10d call_virtual_slot_two_on_member_10453c7c @ 0x10453c7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object stored at offset 8 of the given object.
 * summary:
 *   Takes param_1 as an object pointer, loads the member pointer at offset 8, and calls its
 *   virtual method slot 2 (vtable offset 0x10) via dispatch_single_subobj. No other side
 *   effects are visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_10453c7c(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
