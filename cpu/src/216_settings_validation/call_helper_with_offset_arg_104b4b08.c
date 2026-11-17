/* @k10d call_helper_with_offset_arg_104b4b08 @ 0x104b4b08
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 0x40 to a single callee and returns.
 * summary:
 *   One-line wrapper that forwards its argument (offset by 0x40) to
 *   check_kernel_object_id_valid. No other operations, no globals touched. The callee's
 *   role is unknown, so no subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_104b4b08(int param_1)

{
  check_kernel_object_id_valid((void *)(param_1 + 0x40));
  return;
}
