/* @k10d invoke_virtual_slot_13_10367a9a @ 0x10367a9a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 13 of an object referenced at offset 0x18 of param_1.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x18 to get a vtable, then calls the function pointer at vtable offset 100
 *   (slot 13). The 'this' pointer is adjusted by adding the short value at vtable offset
 *   0x60 to the base object pointer. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_10367a9a(cls_105579a8 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[12].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[12].adj);
  return;
}
