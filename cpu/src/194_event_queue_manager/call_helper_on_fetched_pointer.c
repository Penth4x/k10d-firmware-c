/* @k10d call_helper_on_fetched_pointer @ 0x104920ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from an unknown helper and passes it to a second unknown helper.
 * summary:
 *   The function calls get_ui_root_object to obtain a pointer, then immediately passes that
 *   pointer as the sole argument to process_two_entry_state_array. Both callees are
 *   unnamed, so the specific subsystem or data being manipulated cannot be determined from
 *   the pseudocode alone. It acts as a thin wrapper or trampoline between these two
 *   operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_fetched_pointer(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_ui_root_object();
  process_two_entry_state_array(pvVar1);
  return;
}
