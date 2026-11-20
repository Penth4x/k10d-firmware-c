/* @k10d invoke_virtual_slot_7_10369348 @ 0x10369348
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at param_1+0x14 with a zero argument.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x14 to get the vtable, reads the function pointer at offset 0x3c (slot 7), and
 *   applies the this-adjustment from the short at offset 0x38. The call passes the adjusted
 *   object pointer and the integer 0. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_10369348(cls_10557b38 *param_1)

{
  (((vtbl_entry*)(*(int *)&param_1->field_0x14))[7].fn)
            (&param_1->field_0x14 + ((vtbl_entry*)(*(int *)&param_1->field_0x14))[7].adj,0);
  return;
}
