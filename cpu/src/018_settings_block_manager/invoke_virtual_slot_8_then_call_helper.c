/* @k10d invoke_virtual_slot_8_then_call_helper @ 0x1036b134
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 8 of an object via its vtable, then calls a helper on the same
 *   object.
 * summary:
 *   Reads the vtable pointer from *param_1, fetches the function pointer at offset 0x44
 *   (slot 8), and calls it with a this-adjustment read from offset 0x40 added to param_1.
 *   After the virtual call returns, it calls init_object_with_two_calls with param_1 and
 *   returns param_1. The role of the virtual method and the helper is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c18 * invoke_virtual_slot_8_then_call_helper(cls_10557c18 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x0))[8].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
  init_object_with_two_calls(param_1);
  return param_1;
}
