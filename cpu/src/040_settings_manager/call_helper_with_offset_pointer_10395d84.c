/* @k10d call_helper_with_offset_pointer_10395d84 @ 0x10395d84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the 8th byte of param_1 and param_2 to a single helper function.
 * summary:
 *   This function is a thin wrapper that computes an offset (param_1 + 8) and forwards it
 *   along with param_2 to select_one_of_twelve_slots_1039b56c. It performs no other
 *   operations, checks, or state modifications. The specific role of the helper and the
 *   data structure at param_1 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_10395d84(int param_1,uint32_t param_2)

{
  select_one_of_twelve_slots_1039b56c((void *)(param_1 + 8),param_2);
  return;
}
