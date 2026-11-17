/* @k10d call_helper_with_flag_based_on_param @ 0x10498474
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Selects a constant (5 or 6) based on whether param_2 is zero and passes it to a helper
 *   function.
 * summary:
 *   The function checks if the second argument is zero. If it is, it uses the value 6;
 *   otherwise, it uses 5. It then calls invoke_handler_by_index with the first argument,
 *   the third argument, and the selected constant. The specific role of the helper and the
 *   meaning of the constants are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_based_on_param(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 5;
  if (param_2 == 0) {
    uVar1 = 6;
  }
  invoke_handler_by_index(param_1,param_3,uVar1);
  return;
}
