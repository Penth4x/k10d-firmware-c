/* @k10d call_subroutine_with_0x8000 @ 0x104453ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls write_high_bits_to_mmio with the input parameter and the constant 0x8000.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   write_high_bits_to_mmio, appending the constant 0x8000 as a second parameter. No other
 *   operations or side effects are visible in the pseudocode. The specific role of
 *   write_high_bits_to_mmio is unknown, so the camera subsystem context cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x8000(uint32_t param_1)

{
  write_high_bits_to_mmio(param_1,0x8000);
  return;
}
