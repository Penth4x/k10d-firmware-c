/* @k10d invoke_virtual_slot_7_1036ab44 @ 0x1036ab44
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at offset 0x14 of param_1 with argument
 *   0.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x14 to get a vtable, then calls the function pointer at vtable offset 0x3c
 *   (slot 7). The 'this' pointer is adjusted by the short value at vtable offset 0x38. No
 *   other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_1036ab44(cls_10557ba8 *param_1)

{
  (((vtbl_entry*)(*(int *)&param_1->field_0x14))[7].fn)
            (&param_1->field_0x14 + ((vtbl_entry*)(*(int *)&param_1->field_0x14))[7].adj,0);
  return;
}
