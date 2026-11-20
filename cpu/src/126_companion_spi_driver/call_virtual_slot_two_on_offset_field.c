/* @k10d call_virtual_slot_two_on_offset_field @ 0x1044d582
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 on the object pointer stored at param_1+8.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   dispatch_single_subobj with the value at offset 8 of that argument.
 *   dispatch_single_subobj is a verified virtual method slot 2 of class cls_1059e408. No
 *   other operations, side effects, or state modifications are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_offset_field(cls_105a1f0c *param_1)

{
  dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
  return;
}
