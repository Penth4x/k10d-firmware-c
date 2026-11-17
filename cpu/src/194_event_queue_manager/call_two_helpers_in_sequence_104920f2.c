/* @k10d call_two_helpers_in_sequence_104920f2 @ 0x104920f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper and passes its return value to a second unnamed helper.
 * summary:
 *   The function invokes get_ui_root_object, captures its return value in r4, and
 *   immediately passes that value as the sole argument to clear_pair_array. No other
 *   operations, memory accesses, or state changes are visible in the pseudocode. The
 *   specific roles of the two callees are unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_in_sequence_104920f2(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = get_ui_root_object();
  clear_pair_array(iVar1);
  return;
}
