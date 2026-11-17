/* @k10d call_subroutine_with_zero @ 0x10445e4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls write_high_bits_to_40040004 with the first argument and a zero second argument.
 * summary:
 *   This function is a thin wrapper that forwards its single parameter to
 *   write_high_bits_to_40040004, passing 0 as the second argument. It is invoked by several
 *   callers, including a virtual method slot 4 of class cls_105b3fbc. No other side effects
 *   or state changes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_zero(uint32_t param_1)

{
  write_high_bits_to_40040004(param_1,0);
  return;
}
