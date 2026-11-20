/* @k10d invoke_virtual_slot_3_1036ab88 @ 0x1036ab88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 of an object via a Cfront-style virtual call.
 * summary:
 *   The function performs a single virtual method call on the object pointed to by param_1.
 *   It reads the vtable pointer from offset 0x14, adds 100 (0x64) to select the function
 *   pointer for slot 3, and applies a this-adjustment read from offset 0x60 of the vtable.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_1036ab88(cls_10557ba8 *param_1)

{
  (((vtbl_entry*)(*(int *)&param_1->field_0x14))[12].fn)
            (&param_1->field_0x14 + ((vtbl_entry*)(*(int *)&param_1->field_0x14))[12].adj);
  return;
}
