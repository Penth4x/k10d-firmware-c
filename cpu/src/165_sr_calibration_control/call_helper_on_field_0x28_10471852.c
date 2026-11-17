/* @k10d call_helper_on_field_0x28_10471852 @ 0x10471852
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x28 of the object in param_1 to
 *   set_flag_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x28 and passes that value as the sole argument to
 *   set_flag_with_notify. It performs no other operations and returns void. The role of
 *   set_flag_with_notify is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x28_10471852(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x28));
  return;
}
