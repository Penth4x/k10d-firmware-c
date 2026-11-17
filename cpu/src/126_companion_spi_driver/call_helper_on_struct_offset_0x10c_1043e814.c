/* @k10d call_helper_on_struct_offset_0x10c_1043e814 @ 0x1043e814
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the address of a field at offset 0x10c in the object pointed to by param_1 to a
 *   single callee.
 * summary:
 *   The function takes a pointer (param_1), computes the address of the member at offset
 *   0x10c, and passes that address as the sole argument to
 *   check_kernel_call_success_10459d88. It performs no other operations and returns void.
 *   The role of check_kernel_call_success_10459d88 and the specific data at offset 0x10c
 *   are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_offset_0x10c_1043e814(int param_1)

{
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x10c));
  return;
}
