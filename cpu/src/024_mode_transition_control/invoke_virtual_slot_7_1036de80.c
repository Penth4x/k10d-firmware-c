/* @k10d invoke_virtual_slot_7_1036de80 @ 0x1036de80
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at param_1+0x18 with a zero argument.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x18 to get the vtable, reads the function pointer at offset 0x3c (slot 7), and
 *   calls it with the this-pointer adjusted by the short at vtable offset 0x38. No other
 *   side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_1036de80(cls_10557ecc *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[7].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[7].adj,0);
  return;
}
