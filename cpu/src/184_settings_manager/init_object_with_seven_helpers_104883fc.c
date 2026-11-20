/* @k10d init_object_with_seven_helpers_104883fc @ 0x104883fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling seven helper functions and clearing a byte at offset
 *   0x53.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls a sequence of seven
 *   functions: set_two_fields_to_four, set_byte_at_offset_0x52 (with second arg 0),
 *   store_four_status_bytes, enable_display_output, clear_flag_at_offset_0x4c_104888d2,
 *   clear_byte_at_offset_0x4d_104888fe, and dispatch_mode_transition_104884a8. It also
 *   writes 0 to the byte at offset 0x53 of the object. The function returns the input
 *   pointer. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a multi-step initialization or setup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_seven_helpers_104883fc(cls_105b3370 *param_1)

{
  set_two_fields_to_four((int)param_1);
  set_byte_at_offset_0x52(param_1,0);
  store_four_status_bytes(param_1);
  param_1->field_0x53 = 0;
  enable_display_output(param_1);
  clear_flag_at_offset_0x4c_104888d2(param_1);
  clear_byte_at_offset_0x4d_104888fe(param_1);
  dispatch_mode_transition_104884a8(param_1);
  return (int)param_1;
}
