/* @k10d call_virtual_slot_two_on_member_104583c2 @ 0x104583c2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object stored at offset 8 of the given object.
 * summary:
 *   Takes an object pointer in param_1, loads the member pointer at offset 8, and
 *   dispatches to virtual slot 2 of class cls_1059e408 via dispatch_single_subobj. This is
 *   a one-line wrapper in the rtos_wrappers_and_heap module that forwards a call to a
 *   nested object's second virtual method. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_104583c2(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
