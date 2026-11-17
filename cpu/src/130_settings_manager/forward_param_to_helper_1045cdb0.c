/* @k10d forward_param_to_helper_1045cdb0 @ 0x1045cdb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the second argument to a single helper function and returns.
 * summary:
 *   This function is a thin wrapper that calls heap_free_2 with param_2 as its sole
 *   argument. It ignores param_1 entirely. It is virtual method slot 3 of class
 *   cls_105a5c3c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1045cdb0(uint32_t param_1,int param_2)

{
  heap_free_2(param_2);
  return;
}
