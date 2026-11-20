/* @k10d call_virtual_slot_two_on_member_104581dc @ 0x104581dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object at offset 8 of the given pointer.
 * summary:
 *   Takes a pointer in param_1, adds 8 to it, and passes the result to
 *   dispatch_single_subobj, which is verified as virtual method slot 2 of class
 *   cls_1059e408. This is a one-line wrapper that forwards to a virtual call on a member
 *   object. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_104581dc(cls_105a2928 *param_1)

{
  dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
  return;
}
