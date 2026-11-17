/* @k10d set_flag_on_param_0x80 @ 0x104af836
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the first word of param_1 to 1 and calls two helpers on param_1[3] when param_2
 *   equals 0x80.
 * summary:
 *   Checks if param_2 is 0x80. If so, it calls release_system_parameter_entries and
 *   invoke_virtual_update_callback with param_1[3] as the argument, then sets *param_1 to
 *   1. Returns true if param_2 was 0x80, false otherwise. The specific roles of the callees
 *   and the data structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_flag_on_param_0x80(uint32_t *param_1,int param_2)

{
  if (param_2 == 0x80) {
    release_system_parameter_entries(param_1[3]);
    invoke_virtual_update_callback(param_1[3]);
    *param_1 = 1;
  }
  return param_2 == 0x80;
}
