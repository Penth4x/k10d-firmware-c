/* @k10d call_helper_forty_five_times @ 0x10469f84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls dispatch_virtual_sequence_on_object with param_1 and constant 10 in a loop that
 *   executes 45 times.
 * summary:
 *   The function initializes a counter to 9 and loops while the counter is non-negative,
 *   calling dispatch_virtual_sequence_on_object five times per iteration with the same
 *   arguments (param_1, 10). This results in 45 total calls to the callee. No other side
 *   effects or global state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_forty_five_times(void *param_1)

{
  int iVar1;
  
  iVar1 = 9;
  do {
    dispatch_virtual_sequence_on_object(param_1,10);
    dispatch_virtual_sequence_on_object(param_1,10);
    dispatch_virtual_sequence_on_object(param_1,10);
    dispatch_virtual_sequence_on_object(param_1,10);
    dispatch_virtual_sequence_on_object(param_1,10);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}
