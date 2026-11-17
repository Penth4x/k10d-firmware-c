/* @k10d call_virtual_slot_two_on_member_1045782a @ 0x1045782a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object at offset 8 of the given pointer.
 * summary:
 *   Takes a pointer in param_1, adds 8 to reach a member object, and calls its virtual
 *   method slot 2 (cls_1059e408). No other side effects are visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_1045782a(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
