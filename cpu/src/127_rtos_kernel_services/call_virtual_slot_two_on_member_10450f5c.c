/* @k10d call_virtual_slot_two_on_member_10450f5c @ 0x10450f5c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object at offset 8 of the given pointer.
 * summary:
 *   Takes a pointer in param_1, adds 8 to reach a member object, and calls its virtual
 *   method slot 2 (class cls_1059e408). The function is a thin one-line wrapper with no
 *   other side effects. The camera subsystem role of the target member is not determinable
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_10450f5c(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
