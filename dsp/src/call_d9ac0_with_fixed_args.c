/* @k10d call_d9ac0_with_fixed_args @ 0x000c7b72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls clamp_value_to_range_000d9ac0 with param_1, -4, and 4 as arguments.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   clamp_value_to_range_000d9ac0 along with the constants 0xfffffffc (-4) and 4. No other
 *   operations or side effects are visible in the pseudocode. The role of
 *   clamp_value_to_range_000d9ac0 is unknown, so the specific behavior of this wrapper
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_d9ac0_with_fixed_args(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = clamp_value_to_range_000d9ac0(param_1,0xfffffffc,4);
  return uVar1;
}
