/* @k10d reset_state_and_invoke_virtual_10521dd6 @ 0x10521dd6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state field, resets it, invokes a virtual method on a sub-object, and clears
 *   the object header.
 * summary:
 *   The function checks if the second field (param_1[1]) equals 4. If so, it sets this
 *   field to 1, then performs a virtual call on the object pointed to by param_1[3] using
 *   slot 9 (offset 0x74 in the vtable). Finally, it sets the first field (param_1[0]) to 0.
 *   This appears to be a state transition or cleanup routine for a class object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_invoke_virtual_10521dd6(cls_105d86e0 *param_1)

{
  if (param_1->field_0x4 == 4) {
    param_1->field_0x4 = 1;
    (((vtbl_entry*)(param_1->field_0xc))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[14].adj);
    param_1->field_0x0 = 0;
  }
  return;
}
