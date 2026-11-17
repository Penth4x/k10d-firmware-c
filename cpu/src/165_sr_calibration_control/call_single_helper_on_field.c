/* @k10d call_single_helper_on_field @ 0x104717c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x24 of the input object to a single helper
 *   function.
 * summary:
 *   The function dereferences the input pointer, reads the value at offset 0x24, and passes
 *   it as the sole argument to test_flag_set. It performs no other operations or state
 *   modifications. The specific role of the helper and the object field is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_on_field(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x24));
  return;
}
