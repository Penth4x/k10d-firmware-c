/* @k10d call_single_helper_with_sram_arg_104387fc @ 0x104387fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address argument.
 * summary:
 *   The function makes one call to write_fill_pattern_to_word_104384b8, passing the
 *   constant 0x800f3848 (within the SDRAM region 0x80000000..0x8fffffff). No other
 *   operations, loops, or state changes are visible in this function itself. The role of
 *   the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_104387fc(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_to_word_104384b8((void *)0x800f3848/*SDRAM*/, (uint32_t)param_x1);
  return;
}
