/* @k10d invoke_callback_if_param2_set @ 0x104d06e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_to_dynamic_array with param_2 and a value from a nested pointer chain if
 *   param_2 is non-zero.
 * summary:
 *   The function checks if param_2 is non-zero. If so, it dereferences a chain of pointers
 *   starting from param_1+4, then +0x18, then +0x30 to retrieve an argument, and passes it
 *   along with param_2 and 0 to write_to_dynamic_array. It returns true if param_2 was non-
 *   zero, false otherwise. The specific role of write_to_dynamic_array and the data
 *   structure at param_1 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_callback_if_param2_set(int param_1, int param_2, uint32_t param_x2)

{
  if (param_2 != 0) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x30));
  }
  return param_2 != 0;
}
