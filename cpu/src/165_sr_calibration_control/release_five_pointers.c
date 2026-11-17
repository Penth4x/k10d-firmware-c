/* @k10d release_five_pointers @ 0x104719c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions on five pointers stored at offsets 0x30-0x40 of the input
 *   object.
 * summary:
 *   The function iterates over five pointer-sized fields (0x30, 0x34, 0x38, 0x3c, 0x40) of
 *   the object pointed to by param_1. For each pointer, it first calls
 *   set_flag2_with_notify and then clear_flag3_with_notify. The specific roles of these
 *   callees are unknown, but the pattern suggests a cleanup or release operation on a set
 *   of five associated resources or sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_five_pointers(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x30));
  set_flag2_with_notify(*(void **)(param_1 + 0x34));
  set_flag2_with_notify(*(void **)(param_1 + 0x38));
  set_flag2_with_notify(*(void **)(param_1 + 0x3c));
  set_flag2_with_notify(*(void **)(param_1 + 0x40));
  clear_flag3_with_notify(*(void **)(param_1 + 0x30));
  clear_flag3_with_notify(*(void **)(param_1 + 0x34));
  clear_flag3_with_notify(*(void **)(param_1 + 0x38));
  clear_flag3_with_notify(*(void **)(param_1 + 0x3c));
  clear_flag3_with_notify(*(void **)(param_1 + 0x40));
  return;
}
