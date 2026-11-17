/* @k10d call_single_helper_10395f4e @ 0x10395f4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function contains no logic of its own; it simply calls
 *   read_two_shorts_and_store_10395f56 and returns. It is called from two other functions
 *   (0x10395c48 and 0x10395cd4). Without knowledge of the callee's behavior, the specific
 *   subsystem or role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_10395f4e(uint32_t param_x0)

{
  read_two_shorts_and_store_10395f56(__frv_reg_unset(4));
  return;
}
