/* @k10d call_helper_on_field_0x58_1043ef48 @ 0x1043ef48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x58 of the object in param_1 and passes it to
 *   check_kernel_call_success_10459d88.
 * summary:
 *   The function dereferences param_1 at offset 0x58 to obtain a 32-bit value and forwards
 *   it as the sole argument to check_kernel_call_success_10459d88. It performs no other
 *   operations and returns void. The role of check_kernel_call_success_10459d88 is unknown,
 *   so the specific subsystem effect cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x58_1043ef48(void *param_1)

{
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x58));
  return;
}
