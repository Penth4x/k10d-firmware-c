/* @k10d save_settings_block0 @ 0x1046d848
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Saves the camera settings block to flash by enabling a flag, writing the block, and
 *   clearing the flag.
 * summary:
 *   Calls post_event_to_subobject with param_1 and 1 to set a state flag, then calls
 *   settings_save_block0 with the value at param_1+0x14 to persist the master settings
 *   block to flash. Finally calls post_event_to_subobject with param_1 and 0 to clear the
 *   flag. The function acts as a wrapper that manages the save state around the actual
 *   flash write operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void save_settings_block0(int param_1)

{
  post_event_to_subobject(param_1,1);
  settings_save_block0(*(int *)(param_1 + 0x14));
  post_event_to_subobject(param_1,0);
  return;
}
