/* @k10d call_helper_on_field_16_10440694 @ 0x10440694
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 0x10 of the object pointed to by param_1 to
 *   set_bit_in_mmio_register.
 * summary:
 *   The function dereferences param_1, reads the 32-bit field at offset 0x10, and forwards
 *   it as the sole argument to set_bit_in_mmio_register. No other operations or side
 *   effects are visible in this function. The role of the field and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_16_10440694(int param_1)

{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x10), __frv_reg_unset(5));
  return;
}
