/* @k10d call_helper_on_fetched_object @ 0x1049209c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Fetches an object pointer from get_ui_root_object and passes it with param_2 to
 *   remove_entry_from_array_1052b11c.
 * summary:
 *   The function ignores param_1. It calls get_ui_root_object to obtain a pointer, then
 *   calls remove_entry_from_array_1052b11c with that pointer and param_2. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_fetched_object(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_ui_root_object();
  remove_entry_from_array_1052b11c(pvVar1,param_2);
  return;
}
