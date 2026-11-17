/* @k10d call_helper_with_offset_0x14_10440094 @ 0x10440094
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x14 of the object pointed to by param_1 to a single callee.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that 32-bit value as the sole
 *   argument to set_bit_in_mmio_register. It performs no other operations, has no visible
 *   side effects beyond the callee, and returns void. The role of the callee and the
 *   meaning of the offset are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x14_10440094(int param_1)

{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x14), __frv_reg_unset(5));
  return;
}
