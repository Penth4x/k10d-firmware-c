/* @k10d camera_shutter_trigger @ 0x104b7480
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed forward_three_args_with_offset)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Forwards three arguments to a callee, adding 0x10 to the first argument.
 * summary:
 *   This function is a thin wrapper that calls write_word_to_struct_array with param_1 +
 *   0x10, param_2, and param_3. It performs no other operations or side effects. The prior
 *   analysis suggesting this is a shutter trigger is not supported by the pseudocode, which
 *   shows only a single indirect call with an offset adjustment.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* FIRES THE SHUTTER (interval engine core). */

void camera_shutter_trigger(int param_1,uint32_t param_2,int param_3)

{
  write_word_to_struct_array(param_1 + 0x10,param_2,param_3);
  return;
}
