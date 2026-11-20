/* @k10d invoke_three_helpers_on_object @ 0x1036931a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions on an object pointer, passing a derived offset and a zero
 *   constant.
 * summary:
 *   The function takes a single object pointer (param_1). It first calls
 *   reset_object_fields_and_call_base (virtual slot 2 of cls_105b9458) with an offset of
 *   0x98 into the object. It then calls dispatch_state_update with the object and 0,
 *   followed by write_two_values_to_offset_0x14 with the object. The specific roles of the
 *   callees are unknown, so the operation is described mechanically as a sequence of helper
 *   invocations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_three_helpers_on_object(cls_10557b38 *param_1)

{
  reset_object_fields_and_call_base((cls_105b9458 *)&param_1->field_0x98);
  dispatch_state_update(param_1,0);
  write_two_values_to_offset_0x14((int)param_1);
  return;
}
