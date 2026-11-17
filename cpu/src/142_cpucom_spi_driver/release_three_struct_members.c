/* @k10d release_three_struct_members @ 0x1046610a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions on fields of a struct passed as the first argument.
 * summary:
 *   The function takes a struct pointer (param_1) and invokes three callees:
 *   call_kernel_with_short_id and check_kernel_call_success_10459d88 with the value at
 *   offset 0x24, and set_flag2_with_notify with the value at offset 0x10. The callees are
 *   not named, so their specific roles (e.g., release, reset, or signal) are not
 *   determinable from this code alone. The pattern suggests a cleanup or state-transition
 *   operation on a multi-field object, but the subsystem and exact semantics are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_struct_members(int param_1)

{
  call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x24));
  set_flag2_with_notify(*(void **)(param_1 + 0x10));
  check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x24));
  return;
}
