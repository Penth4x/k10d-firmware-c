/* @k10d forward_params_to_helper_1049207a @ 0x1049207a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from get_ui_root_object and passes it with two parameters to
 *   update_or_add_entry_in_table.
 * summary:
 *   This function acts as a thin wrapper. It calls get_ui_root_object to obtain a void
 *   pointer, then immediately calls update_or_add_entry_in_table with that pointer along
 *   with the original integer and unsigned integer parameters. No other logic or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_to_helper_1049207a(void *param_1,int param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_ui_root_object();
  update_or_add_entry_in_table(pvVar1,param_2,param_3);
  return;
}
