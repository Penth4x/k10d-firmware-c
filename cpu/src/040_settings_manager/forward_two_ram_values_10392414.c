/* @k10d forward_two_ram_values_10392414 @ 0x10392414
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit values from fixed RAM and passes them to two helper functions.
 * summary:
 *   The function loads two 16-bit values from uRam8001a0b8 and uRam8001a0ba. It calls
 *   store_two_params_and_notify with param_1+0xc and the two values, then calls
 *   call_function_via_two_helpers with param_1 and the same two values. The specific roles
 *   of the RAM locations and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_ram_values_10392414(int param_1)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  uVar2 = uRam8001a0ba;
  uVar1 = uRam8001a0b8;
  store_two_params_and_notify((void *)(param_1 + 0xc),uRam8001a0b8,uRam8001a0ba);
  call_function_via_two_helpers(param_1,uVar1,uVar2);
  return;
}
