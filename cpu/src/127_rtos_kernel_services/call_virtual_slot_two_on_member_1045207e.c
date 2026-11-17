/* @k10d call_virtual_slot_two_on_member_1045207e @ 0x1045207e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object at offset 8 in param_1.
 * summary:
 *   This is a one-line wrapper that forwards param_1+8 to dispatch_single_subobj, which is
 *   verified as virtual method slot 2 of class cls_1059e408. It likely acts as a virtual
 *   method slot 4 of class cls_105a2388 (given its position between slot 3 at 0x10452078
 *   and the next function), delegating to a member object of type cls_1059e408. No other
 *   side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_1045207e(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
