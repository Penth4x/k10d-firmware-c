/* @k10d call_virtual_slot_two_on_member_104574f2 @ 0x104574f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object stored at offset 8 of the given object.
 * summary:
 *   Takes an object pointer in param_1, loads the member pointer at offset 8, and
 *   dispatches to virtual slot 2 of class cls_1059e408 via dispatch_single_subobj. No other
 *   side effects are visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_104574f2(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
