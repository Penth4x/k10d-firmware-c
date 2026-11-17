/* @k10d call_two_unnamed_helpers_103949f6 @ 0x103949f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions in sequence with no arguments.
 * summary:
 *   The function takes no parameters and performs no local computation. It calls
 *   get_or_create_sram_object_1040a240 followed by check_value_in_range_two_to_six, then
 *   returns. Without knowledge of the callees' roles, the specific subsystem or behavior
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_103949f6(void)

{
  get_or_create_sram_object_1040a240();
  check_value_in_range_two_to_six();
  return;
}
