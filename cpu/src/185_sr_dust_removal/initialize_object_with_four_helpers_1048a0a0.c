/* @k10d initialize_object_with_four_helpers_1048a0a0 @ 0x1048a0a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions on the object and clears a field at offset 0x44.
 * summary:
 *   This function takes a pointer to an object (param_1) and sequentially calls four other
 *   functions: set_two_fields_to_four, enable_display_output,
 *   clear_flag_at_offset_0x58_1048a71a, and serialize_exposure_params_to_buffer. It also
 *   sets the field at offset 0x44 (param_1[0x11]) to 0. It returns the original pointer.
 *   The callees are not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int initialize_object_with_four_helpers_1048a0a0(int *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_flag_at_offset_0x58_1048a71a(param_1);
  param_1[0x11] = 0;
  serialize_exposure_params_to_buffer(param_1);
  return (int)param_1;
}
