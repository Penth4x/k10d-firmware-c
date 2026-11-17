/* @k10d forward_params_via_helper_10394686 @ 0x10394686
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to obtain a value and forwards it with the given parameters to another
 *   function.
 * summary:
 *   The function calls get_value_from_object to retrieve a value, then passes that value
 *   along with param_2, the constant 1, and param_3 to check_event_state_flags. It acts as
 *   a thin wrapper or dispatcher that combines the result of one call with external
 *   arguments for a second call. No direct memory operations or camera-specific logic are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_via_helper_10394686(void *param_1,int *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = get_value_from_object();
  check_event_state_flags(uVar1,param_2,1,param_3);
  return;
}
