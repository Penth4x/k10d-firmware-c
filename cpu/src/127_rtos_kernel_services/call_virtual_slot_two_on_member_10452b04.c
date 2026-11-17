/* @k10d call_virtual_slot_two_on_member_10452b04 @ 0x10452b04
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object stored at offset 8 of the given object
 *   pointer.
 * summary:
 *   Takes an object pointer in param_1, loads the member at offset 8, and dispatches to
 *   virtual slot 2 of class cls_1059e408 via dispatch_single_subobj. No other side effects
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_member_10452b04(int param_1)

{
  dispatch_single_subobj(param_1 + 8);
  return;
}
