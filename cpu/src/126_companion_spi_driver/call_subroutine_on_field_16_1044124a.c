/* @k10d call_subroutine_on_field_16_1044124a @ 0x1044124a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x10 of the object pointed to by param_1 to
 *   set_bit_in_mmio_register.
 * summary:
 *   The function dereferences param_1, reads the word at offset 0x10, and forwards it as
 *   the sole argument to set_bit_in_mmio_register. No other operations, side effects, or
 *   state changes are visible in the pseudocode. The role of set_bit_in_mmio_register is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_1044124a(int param_1)

{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x10), __frv_reg_unset(5));
  return;
}
