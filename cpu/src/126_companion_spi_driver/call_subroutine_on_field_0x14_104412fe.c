/* @k10d call_subroutine_on_field_0x14_104412fe @ 0x104412fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x14 of the object pointed to by param_1 to
 *   set_bit_in_mmio_register.
 * summary:
 *   The function dereferences param_1, reads the 32-bit field at offset 0x14, and passes it
 *   as the sole argument to the callee set_bit_in_mmio_register. No other operations, side
 *   effects, or state modifications are visible in the pseudocode. The role of the callee
 *   and the specific field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x14_104412fe(int param_1, uint32_t param_2)
{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x14), (uint32_t)param_2);
  return;
}
