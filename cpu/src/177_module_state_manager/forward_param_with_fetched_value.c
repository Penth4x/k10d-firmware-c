/* @k10d forward_param_with_fetched_value @ 0x1048338c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a field from an object, fetches a value from an unknown helper, and forwards both
 *   to another function.
 * summary:
 *   The function loads a 32-bit value from offset 4 of the object pointed to by param_1. It
 *   calls check_second_param_is_zero to obtain a second value. It then calls
 *   dispatch_two_callbacks with the loaded field, param_3, and the fetched value as
 *   arguments. The specific roles of the callees and the object are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_with_fetched_value(int param_1,uint32_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar2 = *(uint32_t *)(param_1 + 4);
  uVar1 = check_second_param_is_zero((uint32_t)param_1, (uint32_t)param_2);
  dispatch_two_callbacks(uVar2,param_3,uVar1);
  return;
}
