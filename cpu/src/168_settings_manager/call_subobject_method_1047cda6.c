/* @k10d call_subobject_method_1047cda6 @ 0x1047cda6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single function on an object field at offset 0x28.
 * summary:
 *   The function dereferences param_1, reads the pointer stored at offset 0x28, and passes
 *   it as the sole argument to clear_flag_and_call_helper_10482dda. It acts as a thin
 *   wrapper or thunk for a specific operation on a sub-object. No other side effects or
 *   state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_1047cda6(cls_105aaa50 *param_1)

{
  clear_flag_and_call_helper_10482dda((char*)(param_1) ->field_0x28);
  return;
}
