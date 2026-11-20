/* @k10d init_object_with_four_helpers_1051f9d2 @ 0x1051f9d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions and zeroing one field.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls four other functions in
 *   sequence: set_two_fields_to_four, enable_display_output,
 *   clear_flag_at_offset_0x58_1051ff7c, and build_exposure_param_table. It also sets the
 *   field at offset 0x44 (param_1[0x11]) to 0. The function returns the original pointer.
 *   The callees are not named, so the specific subsystem or role cannot be determined from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_four_helpers_1051f9d2(cls_105d6fa0 *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_flag_at_offset_0x58_1051ff7c(param_1);
  param_1->field_0x44 = 0;
  build_exposure_param_table((void *)param_1);
  return (int)param_1;
}
