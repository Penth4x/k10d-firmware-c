/* @k10d call_helper_with_offset_0x18_104413b2 @ 0x104413b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at param_1+0x18 and passes it as the sole argument to
 *   set_bit_in_mmio_register.
 * summary:
 *   This is a one-line wrapper that dereferences a field at offset 0x18 of the object
 *   pointed to by param_1 and forwards it to the callee set_bit_in_mmio_register. No other
 *   side effects, loops, or state changes are visible. The role of the callee and the
 *   meaning of the 0x18 field are unknown, so no camera-subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x18_104413b2(int param_1)

{
  set_bit_in_mmio_register(*(uint32_t *)(param_1 + 0x18), __frv_reg_unset(5));
  return;
}
