/* @k10d call_virtual_slot_two_on_offset_1044cf36 @ 0x1044cf36
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 on an object located at param_1 + 8.
 * summary:
 *   The function takes a single pointer argument, adds an offset of 8 bytes, and passes the
 *   result to dispatch_single_subobj. dispatch_single_subobj is a verified virtual method
 *   slot 2 of class cls_1059e408. This function acts as a thin wrapper or thunk to dispatch
 *   a virtual call on a sub-object or member at offset 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_offset_1044cf36(cls_105a1e3c *param_1)

{
  dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
  return;
}
