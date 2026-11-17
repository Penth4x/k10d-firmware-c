/* @k10d call_single_argument_helper_10502aa4 @ 0x10502aa4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Invokes a single function pointer at 0x10456ee6 with param_2 as its argument.
 * summary:
 *   This function acts as a thin wrapper or thunk. It takes two parameters but only
 *   forwards the second one (param_2) to a function located at 0x10456ee6. The first
 *   parameter (param_1) is unused. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_helper_10502aa4(uint32_t param_1,uint32_t param_2)

{
  (*(code *)0x10456ee6/*ROM*/)(param_2);
  return;
}
