/* @k10d release_object_at_offset_0x2c_104718be @ 0x104718be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the pointer stored at offset 0x2c of the object passed in param_1.
 * summary:
 *   The function dereferences param_1 + 0x2c and passes that pointer to test_flag_set. The
 *   callee's role is unknown, so the specific operation (free, close, deactivate, etc.)
 *   cannot be determined. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x2c_104718be(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x2c));
  return;
}
