/* @k10d call_helper_and_return_one_1051d74a @ 0x1051d74a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with the object pointer and returns the constant 1.
 * summary:
 *   This is virtual slot 3 of cls_105d6da0. It forwards its sole argument (the object
 *   pointer) to write_structured_data_blocks and then returns 1. No other state is modified
 *   and no camera-specific behavior is visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_and_return_one_1051d74a(void *param_1)

{
  write_structured_data_blocks(param_1);
  return 1;
}
