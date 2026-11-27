/* @k10d call_helper_on_field_0x18_104407fc @ 0x104407fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x18 of the object pointed to by param_1 to
 *   set_bit_in_mmio_register.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the word at offset 0x18,
 *   and forwards it as the sole argument to set_bit_in_mmio_register. No other side effects
 *   or state changes are visible in this function. The role of set_bit_in_mmio_register is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104407fc(int param_1, uint32_t param_2)
{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x18), (uint32_t)param_2);
  return;
}
