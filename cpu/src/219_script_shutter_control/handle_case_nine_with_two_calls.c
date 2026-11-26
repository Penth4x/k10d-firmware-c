/* @k10d handle_case_nine_with_two_calls @ 0x104b70c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   If the second argument equals 9, calls two helper functions with the first argument and
 *   a constant 500.
 * summary:
 *   The function checks if param_2 is 9. If true, it calls poll_until_bit16_clear with
 *   param_1 and then calls check_kernel_call_success_10459fea with the constant 500. The
 *   callees' roles are unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_case_nine_with_two_calls(uint32_t *param_1,int param_2)

{
  if (param_2 == 9) {
    poll_until_bit16_clear(param_1);
    check_kernel_call_success_10459fea(0x1f4);
  }
  return;
}
