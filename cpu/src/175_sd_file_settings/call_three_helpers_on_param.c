/* @k10d call_three_helpers_on_param @ 0x1048118e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing param_1+0xc and param_1/param_2 to
 *   them.
 * summary:
 *   The function takes two parameters and calls call_kernel_with_short_id with a pointer to
 *   param_1+0xc, then calls clear_pointer_if_set with both original parameters, and finally
 *   calls check_kernel_call_success_10459d88 with the same pointer to param_1+0xc. The
 *   specific roles of the callees are unknown, so the overall purpose is a sequence of
 *   three helper invocations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_param(int param_1,void *param_2)

{
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  clear_pointer_if_set(param_1,param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return;
}
