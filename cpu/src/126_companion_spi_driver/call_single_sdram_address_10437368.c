/* @k10d call_single_sdram_address_10437368 @ 0x10437368
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs one call to write_fill_pattern_word_10436f20, passing the
 *   constant 0x8001e820 (within the SDRAM region 0x80000000..0x8fffffff). No other
 *   operations, loops, or side effects are visible in this function itself. The role of the
 *   callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_sdram_address_10437368(void)

{
  write_fill_pattern_word_10436f20((void *)0x8001e820/*SDRAM*/, __frv_reg_unset(5));
  return;
}
