/* @k10d call_helper_if_two_fields_set @ 0x1048d844
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Invokes a helper when two non-zero fields at offsets 4 and 0x24 of the object are both
 *   set.
 * summary:
 *   Checks that the int at param_1+4 and the int at param_1+0x24 are both non-zero. If so,
 *   it calls issue_three_region_commands with no arguments. This is virtual slot 2 of
 *   cls_105b3e0c. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_two_fields_set(cls_105b3e0c *param_1)

{
  if ((param_1->field_0x4 != 0) && (*(int *)&param_1->field_0x24 != 0)) {
    issue_three_region_commands((ushort *)__frv_reg_unset(4));
  }
  return;
}
