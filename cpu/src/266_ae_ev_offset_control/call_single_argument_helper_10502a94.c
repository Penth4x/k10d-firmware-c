/* @k10d call_single_argument_helper_10502a94 @ 0x10502a94
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Invokes an external function at 0x10456ed6 with the second parameter as its sole
 *   argument.
 * summary:
 *   This function acts as a thin wrapper or trampoline. It takes two parameters but only
 *   forwards the second one (param_2) to the function located at 0x10456ed6. The first
 *   parameter (param_1) is ignored. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_helper_10502a94(uint32_t param_1,uint32_t param_2)

{
  (*(code *)0x10456ed6/*ROM*/)(param_2);
  return;
}
