/* @k10d invoke_virtual_slot_9_1036aa2a @ 0x1036aa2a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 9 of an object referenced at offset 0x14 of param_1.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x14 to get a vtable, reads the function pointer at vtable offset 0x4c (slot
 *   9), and calls it with an adjusted 'this' pointer computed from the this-adjustment
 *   short at vtable offset 0x48. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_1036aa2a(cls_10557ba8 *param_1)

{
  (((vtbl_entry*)(*(int *)&param_1->field_0x14))[9].fn)
            (&param_1->field_0x14 + ((vtbl_entry*)(*(int *)&param_1->field_0x14))[9].adj);
  return;
}
