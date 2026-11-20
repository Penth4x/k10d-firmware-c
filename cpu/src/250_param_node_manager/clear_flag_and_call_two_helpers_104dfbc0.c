/* @k10d clear_flag_and_call_two_helpers_104dfbc0 @ 0x104dfbc0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a 4-byte field at offset 0x44 of the object, then calls two helper functions
 *   with the object and a field at offset 0x38.
 * summary:
 *   The function writes 0 to the 4-byte field at param_1+0x44. It then calls
 *   copy_field_and_clear_offset passing the value stored at param_1+0x38, and finally calls
 *   invoke_virtual_method_on_nested_object_104dfc4c passing the object pointer itself. The
 *   callees are not yet named, so the specific subsystem role is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_two_helpers_104dfbc0(cls_105bc1c4 *param_1)

{
  param_1->field_0x44 = 0;
  copy_field_and_clear_offset(param_1->field_0x38);
  invoke_virtual_method_on_nested_object_104dfc4c(param_1);
  return;
}
