/* @k10d call_helper_with_offset_eight_10395c28 @ 0x10395c28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   init_object_with_seventeen_subcalls. No other operations, side effects, or state
 *   changes are visible in the pseudocode. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10395c28(cls_10562e10 *param_1)

{
  uint32_t r5_in;
  void *r6_in;
  void *r7_in;
  
  init_object_with_seventeen_subcalls((cls_105639fc *)&param_1->field_0x8,r5_in,r6_in,r7_in);
  return;
}
