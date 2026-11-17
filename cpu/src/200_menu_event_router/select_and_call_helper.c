/* @k10d select_and_call_helper @ 0x10498488
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Selects a constant (3 or 4) based on param_2 and passes it to a helper function.
 * summary:
 *   The function checks if param_2 is zero. If it is, it sets a local variable to 4;
 *   otherwise, it sets it to 3. It then calls invoke_handler_by_index with param_1,
 *   param_3, and the selected constant as arguments. The specific role of the helper and
 *   the meaning of the constants are not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_call_helper(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 3;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  invoke_handler_by_index(param_1,param_3,uVar1);
  return;
}
