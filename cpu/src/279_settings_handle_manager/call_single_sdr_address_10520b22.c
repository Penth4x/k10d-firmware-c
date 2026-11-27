/* @k10d call_single_sdr_address_10520b22 @ 0x10520b22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with a fixed SDRAM address argument.
 * summary:
 *   The function makes one call to copy_64_bytes_from_words, passing the constant
 *   0x8005a2bc, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or side effects are visible in this function itself. The role of the
 *   callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_sdr_address_10520b22(uint32_t param_x0, uint32_t param_x1)
{
  copy_64_bytes_from_words(0x8005a2bc/*SDRAM*/, (uint32_t)param_x1);
  return;
}
