/* @k10d call_two_helpers_with_param_10393d66 @ 0x10393d66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions, passing the input argument to the second one.
 * summary:
 *   The function takes a single 32-bit parameter. It first calls
 *   call_two_unnamed_helpers_10394af0 with no arguments, then calls
 *   call_single_helper_10393dd6 passing the original parameter. No local state is modified
 *   and no return value is produced. The specific roles of the callees are unknown, so the
 *   overall subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_10393d66(cls_10562a24 *param_1)

{
  call_two_unnamed_helpers_10394af0();
  call_single_helper_10393dd6((uint)param_1);
  return;
}
