/* @k10d call_helper_with_0x4000_104453da @ 0x104453da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the input argument and the constant 0x4000 to a single callee.
 * summary:
 *   This function is a thin wrapper that forwards its single parameter and the constant
 *   0x4000 to write_high_bits_to_mmio. It performs no other operations, local variable
 *   manipulation, or state changes. The specific role of the callee is unknown, so the
 *   wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x4000_104453da(uint32_t param_1)

{
  write_high_bits_to_mmio(param_1,0x4000);
  return;
}
