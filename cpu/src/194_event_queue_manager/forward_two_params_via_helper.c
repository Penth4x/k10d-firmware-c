/* @k10d forward_two_params_via_helper @ 0x104920d0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed getter then forwards its result plus two parameters to another unnamed
 *   function.
 * summary:
 *   The function takes three parameters (param_1, param_2, param_3). It calls
 *   get_ui_root_object with no arguments to obtain a value, then calls
 *   upsert_key_value_pair passing that value along with param_2 and param_3. param_1 is not
 *   used in the visible pseudocode. Both callees are unnamed, so the specific subsystem or
 *   behavior cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_params_via_helper(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = get_ui_root_object();
  upsert_key_value_pair(uVar1,param_2,param_3);
  return;
}
