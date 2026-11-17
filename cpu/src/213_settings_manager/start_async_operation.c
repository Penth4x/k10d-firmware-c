/* @k10d start_async_operation @ 0x104af488
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initiates an asynchronous operation by setting a state flag and calling a helper
 *   function.
 * summary:
 *   The function checks if param_1[4] is non-zero. If so, it sets param_1[4] to 1 and
 *   param_1[3] to 0, then calls invoke_virtual_method_and_store_result. Based on the return
 *   value of invoke_virtual_method_and_store_result and a subsequent virtual call, it
 *   updates param_1[4] to either 2 or 3 and sets a boolean flag at param_1[5]. Returns 0 on
 *   success or 4 if the initial condition was not met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t start_async_operation(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 4;
  if (param_1[4] != 0) {
    param_1[4] = 1;
    param_1[3] = 0;
    iVar1 = invoke_virtual_method_and_store_result(param_1,4);
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = *(int *)(*param_1 + 4);
      iVar1 = (**(code **)(iVar1 + 0x54))(*param_1 + (int)*(short *)(iVar1 + 0x50));
      if (iVar1 == 0) {
        param_1[4] = 3;
        *(uint8_t *)(param_1 + 5) = 0;
      }
      else {
        param_1[4] = 2;
        *(uint8_t *)(param_1 + 5) = 1;
      }
    }
  }
  return uVar2;
}
