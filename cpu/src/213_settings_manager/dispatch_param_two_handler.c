/* @k10d dispatch_param_two_handler @ 0x104af8c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches on param_2 to call one of two helpers or clear the first argument, returning
 *   a small status code.
 * summary:
 *   Switches on param_2: case 0 zeroes *param_1; cases 1-2 call
 *   check_and_handle_status(param_1); cases 3-4 call call_helper_and_return_three(param_1);
 *   case 0x40 calls invoke_virtual_update_callback(param_1[3]) only when *param_1==1 and
 *   returns 1, else 0. Default returns 2. No camera-specific behavior is evident from the
 *   pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_two_handler(int *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  switch(param_2) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
  case 2:
    uVar1 = check_and_handle_status(param_1);
    break;
  case 3:
  case 4:
    uVar1 = call_helper_and_return_three((int)param_1);
    break;
  case 0x40:
    if (*param_1 == 1) {
      invoke_virtual_update_callback(param_1[3]);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
