/* @k10d call_helper_with_flag @ 0x10498460
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Selects a flag value (1 or 2) based on param_2 and passes it to a helper function.
 * summary:
 *   The function sets a local variable to 1, or 2 if param_2 is zero. It then calls
 *   invoke_handler_by_index with param_1, param_3, and this selected flag. The specific
 *   role of the flag and the helper is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  invoke_handler_by_index(param_1,param_3,uVar1);
  return;
}
