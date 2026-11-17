/* @k10d call_helper_with_0xc000_104453e6 @ 0x104453e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls write_high_bits_to_mmio with the input parameter and the constant 0xc000.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   write_high_bits_to_mmio along with the constant 0xc000. It performs no other operations
 *   or side effects. The specific role of write_high_bits_to_mmio is unknown, so the camera
 *   subsystem context cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xc000_104453e6(uint32_t param_1)

{
  write_high_bits_to_mmio(param_1,0xc000);
  return;
}
