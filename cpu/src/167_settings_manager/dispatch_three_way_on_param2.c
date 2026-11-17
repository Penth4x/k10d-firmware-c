/* @k10d dispatch_three_way_on_param2 @ 0x10474dfa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of three handlers based on the value of param_2, returning the
 *   handler's result.
 * summary:
 *   The function acts as a simple switch on the integer parameter param_2. If param_2 is 0,
 *   1, or 2, it calls query_and_store_pair, validate_and_update_pair, or
 *   update_pair_if_changed respectively, passing param_1 and param_3 as arguments. For any
 *   other value, it returns 0. The specific roles of the callees are unknown, so the
 *   dispatch target's subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_way_on_param2(uint32_t param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = query_and_store_pair(param_1,param_3);
  }
  else if (param_2 == 1) {
    uVar1 = validate_and_update_pair(param_1,param_3);
  }
  else if (param_2 == 2) {
    uVar1 = update_pair_if_changed(param_1,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
