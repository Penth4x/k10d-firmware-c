/* @k10d call_helper_with_offset_pointer_10395dc4 @ 0x10395dc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to param_1+8 and param_2 to a single helper function.
 * summary:
 *   This function is a thin wrapper that computes an offset (param_1 + 8) and forwards it
 *   along with param_2 to select_one_of_four_slots_1039b712. It performs no other
 *   operations, checks, or state modifications. The specific role of the helper and the
 *   data structure at param_1+8 are not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_10395dc4(int param_1,int param_2)

{
  select_one_of_four_slots_1039b712((void *)(param_1 + 8),param_2);
  return;
}
