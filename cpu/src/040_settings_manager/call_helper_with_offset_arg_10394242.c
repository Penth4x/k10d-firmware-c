/* @k10d call_helper_with_offset_arg_10394242 @ 0x10394242
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 4 to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 4 to it, and forwards the result to
 *   create_seven_channel_handles. No other operations, globals, or side effects are
 *   visible. The role of the callee is unknown, so the wrapper's purpose is purely
 *   mechanical argument adjustment and delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_10394242(cls_10562b1c *param_1)

{
  uint32_t r5_in;
  void *r6_in;
  void *r7_in;
  
  create_seven_channel_handles((cls_10563750 *)&param_1->field_0x4,r5_in,r6_in,r7_in);
  return;
}
