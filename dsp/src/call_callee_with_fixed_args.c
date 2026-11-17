/* @k10d call_callee_with_fixed_args @ 0x000c6672
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes clamp_value_and_set_flags_000c6682 with param_1 and the constants 0x1c and
 *   0xa4.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   clamp_value_and_set_flags_000c6682 along with two fixed integer constants (0x1c and
 *   0xa4). It performs no other operations and returns immediately. The role of
 *   clamp_value_and_set_flags_000c6682 is unknown, so the specific behavior of this wrapper
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_callee_with_fixed_args(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = clamp_value_and_set_flags_000c6682(param_1,0x1c,0xa4);
  return uVar1;
}
