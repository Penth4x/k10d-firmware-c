/* @k10d call_three_unnamed_helpers_1048599c @ 0x1048599c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three adjacent helper functions in sequence, passing param_1 to the middle one.
 * summary:
 *   The function is a thin wrapper that calls init_image_buffer_pools with no arguments,
 *   then dispatch_three_mode_actions with param_1, and finally check_and_dispatch_ram_flag
 *   with no arguments. No local state is modified and no return value is produced. The
 *   specific subsystem or behavior cannot be determined because none of the callees have
 *   verified names or known purposes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_unnamed_helpers_1048599c(uint32_t param_1)

{
  init_image_buffer_pools();
  dispatch_three_mode_actions(param_1);
  check_and_dispatch_ram_flag();
  return;
}
