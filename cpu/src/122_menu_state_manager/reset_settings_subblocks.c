/* @k10d reset_settings_subblocks @ 0x10434912
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 122_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed, then calls three reset functions for two
 *   parameter sets.
 * summary:
 *   The function takes an object pointer, dereferences the pointer at offset 0xc to get a
 *   settings object. It calls check_object_field_via_helper to check a condition; if true,
 *   it calls settings_refresh_working_copy to update the working copy. It then calls
 *   call_helper_on_two_pointers_10484a28, call_helper_on_two_pointers_10484a54, and
 *   forward_params_to_two_objects twice, each time with the settings object and parameters
 *   (0,0) followed by (0,1). This pattern suggests resetting or initializing two distinct
 *   sub-blocks or channels of the settings.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_settings_subblocks(int param_1)

{
  bool bVar1;
  
  bVar1 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar1) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  call_helper_on_two_pointers_10484a28(*(uint32_t *)(param_1 + 0xc),0,0);
  call_helper_on_two_pointers_10484a54(*(uint32_t *)(param_1 + 0xc),0,0);
  forward_params_to_two_objects(*(uint32_t *)(param_1 + 0xc),0,0);
  call_helper_on_two_pointers_10484a28(*(uint32_t *)(param_1 + 0xc),0,1);
  call_helper_on_two_pointers_10484a54(*(uint32_t *)(param_1 + 0xc),0,1);
  forward_params_to_two_objects(*(uint32_t *)(param_1 + 0xc),0,1);
  return;
}
