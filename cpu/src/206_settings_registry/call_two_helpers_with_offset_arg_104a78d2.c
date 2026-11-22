/* @k10d call_two_helpers_with_offset_arg_104a78d2 @ 0x104a78d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing a value from the object at offset 8 to the
 *   second.
 * summary:
 *   This is virtual slot 6 of cls_105b6938. It first calls ensure_subobject_initialized
 *   with no arguments, then calls invoke_virtual_slot_7_on_object with the 4-byte value at
 *   (param_1 + 8) and param_2. The specific roles of the callees are unknown, so the
 *   function acts as a simple dispatcher or wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_offset_arg_104a78d2(cls_105b6938 *param_1,uint32_t param_2)

{
  ensure_subobject_initialized((int)(param_1)/* B-3: stock r4 = param_1 */);
  invoke_virtual_slot_7_on_object(param_1->field_0x8,param_2);
  return;
}
