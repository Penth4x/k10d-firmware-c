/* @k10d call_helper_fifteen_times @ 0x10469f52
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Invokes dispatch_virtual_sequence_on_object with param_1 and constant 10 fifteen times
 *   in a loop.
 * summary:
 *   The function executes a do-while loop that iterates three times, calling the callee
 *   dispatch_virtual_sequence_on_object five times per iteration with the same arguments
 *   (param_1, 10). This results in a total of 15 sequential calls to the helper function.
 *   No other side effects or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_fifteen_times(void *param_1)

{
  int iVar1;
  
  iVar1 = 3;
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
