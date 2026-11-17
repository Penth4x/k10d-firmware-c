/* @k10d save_settings_with_lock @ 0x1046d876
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Saves camera settings to flash by acquiring a lock, writing two settings blocks, and
 *   releasing the lock.
 * summary:
 *   The function takes a parameter (likely a lock or context handle), calls
 *   post_event_to_subobject with 1 to acquire a lock or enable a state. It then extracts a
 *   pointer from offset 0x14 of the parameter, calls invoke_virtual_methods_on_object_array
 *   on it, and subsequently calls settings_save_block0 and settings_save_block1 to persist
 *   the master and secondary settings blocks to flash. Finally, it calls
 *   post_event_to_subobject with 0 to release the lock or disable the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void save_settings_with_lock(int param_1)

{
  post_event_to_subobject(param_1,1);
  invoke_virtual_methods_on_object_array((void *)(*(uint32_t *)(param_1 + 0x14)));
  settings_save_block0(*(int *)(param_1 + 0x14));
  settings_save_block1(*(int *)(param_1 + 0x14));
  post_event_to_subobject(param_1,0);
  return;
}
