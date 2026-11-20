/* @k10d invoke_virtual_slot_11_on_subobject @ 0x1036796a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 11 of the object pointer stored at offset 0x18 of the given object.
 * summary:
 *   Reads a pointer from param_1+0x18, then performs a virtual call to slot 11 (offset
 *   0x4c) of that sub-object. The this-pointer is adjusted by the short value at offset
 *   0x48 of the vtable. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_11_on_subobject(cls_105579a8 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[9].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[9].adj);
  return;
}
