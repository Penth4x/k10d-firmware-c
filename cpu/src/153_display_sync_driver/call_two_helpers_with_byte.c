/* @k10d call_two_helpers_with_byte @ 0x1046ca80
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value, then passes it with the input parameters to a second
 *   helper.
 * summary:
 *   The function calls call_two_helpers_with_zeroed_struct with param_1 and a local integer
 *   initialized to 0. It then stores param_4 into a local buffer and calls
 *   compute_sensor_readout_timing with param_1, param_2, the result from the first call,
 *   param_3, and param_4. The specific roles of the callees are unknown, so the function
 *   acts as a wrapper or sequencer for these two operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_byte(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint8_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_20 [4];
  int iStack_c;
  
  puVar1 = auStack_20;
  iStack_c = 0;
  call_two_helpers_with_zeroed_struct(param_1,&iStack_c);
  puVar1[3] = param_4;
  compute_sensor_readout_timing(param_1,param_2,iStack_c,param_3,puVar1[3]);
  return;
}
