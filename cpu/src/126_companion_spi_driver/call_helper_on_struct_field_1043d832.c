/* @k10d call_helper_on_struct_field_1043d832 @ 0x1043d832
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x128 of param_1 to
 *   check_kernel_call_success_10459d88.
 * summary:
 *   The function dereferences param_1, reads the 4-byte value at offset 0x128, and passes
 *   it as the sole argument to check_kernel_call_success_10459d88. It acts as a thin
 *   wrapper or thunk that forwards a specific member of a structure to another routine. No
 *   other side effects or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_1043d832(void *param_1)

{
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x128));
  return;
}
