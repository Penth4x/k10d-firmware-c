/* @k10d call_helper_with_offset_eight_10393934 @ 0x10393934
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the first argument plus an offset of 8.
 * summary:
 *   The function takes a single integer parameter and immediately calls
 *   init_seven_config_blocks with the value of param_1 + 8. It performs no other operations
 *   and returns void. The specific role of the callee is unknown, so the behavior is
 *   described mechanically as a pass-through with an offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10393934(cls_105629a8 *param_1)

{
  uint32_t r5_in;
  void *r6_in;
  void *r7_in;
  
  init_seven_config_blocks((cls_105634f0 *)&param_1->field_0x8,r5_in,r6_in,r7_in);
  return;
}
