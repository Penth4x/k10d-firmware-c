/* @k10d call_helper_with_0x4000_10445e54 @ 0x10445e54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its single argument to write_high_bits_to_40040004 with a second constant
 *   argument of 0x4000.
 * summary:
 *   One-line wrapper that calls write_high_bits_to_40040004(param_1, 0x4000). No local
 *   state is touched and no return value is used. The caller display_output_enable suggests
 *   a display-related context, but the callee's role is unknown, so the subsystem is not
 *   asserted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x4000_10445e54(uint32_t param_1)

{
  write_high_bits_to_40040004(param_1,0x4000);
  return;
}
