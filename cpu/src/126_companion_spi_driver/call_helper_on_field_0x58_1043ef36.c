/* @k10d call_helper_on_field_0x58_1043ef36 @ 0x1043ef36
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x58 of param_1 and passes it to call_kernel_with_short_id.
 * summary:
 *   The function dereferences param_1 at offset 0x58 to obtain a 32-bit value and forwards
 *   it as the sole argument to call_kernel_with_short_id. No other operations, loops, or
 *   state modifications are visible. The role of call_kernel_with_short_id is unknown, so
 *   the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x58_1043ef36(void *param_1)

{
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x58));
  return;
}
