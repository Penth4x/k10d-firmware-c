/* @k10d call_subroutine_with_offset_104b746c @ 0x104b746c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Calls a single subroutine with the first argument offset by 0x10.
 * summary:
 *   The function takes a single integer parameter and immediately calls
 *   zero_out_struct_array with the value of param_1 plus 0x10. It acts as a thin wrapper or
 *   thunk that adjusts the pointer or value before delegating to the callee. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_104b746c(int param_1)

{
  zero_out_struct_array(param_1 + 0x10);
  return;
}
