/* @k10d increment_timeout_counter @ 0x1000d498
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Increments a 32-bit timeout counter stored as two 16-bit words in a kernel timeout
 *   queue node.
 * summary:
 *   The function takes a pointer to a structure where param_1[1] is a 16-bit counter and
 *   *param_1 is a 16-bit high word. It increments the low word and propagates the carry to
 *   the high word if the low word was 0xffff. This is a standard 32-bit increment operation
 *   on a packed 16-bit pair, typical for timeout or tick counters in a µITRON/REALOS kernel
 *   scheduler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_timeout_counter(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  *param_1 = *param_1 + (uint)(0xfffffffe < uVar1);
  return;
}
