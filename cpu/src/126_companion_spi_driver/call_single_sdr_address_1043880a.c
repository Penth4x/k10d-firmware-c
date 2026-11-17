/* @k10d call_single_sdr_address_1043880a @ 0x1043880a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs one call to check_magic_value_104384cc, passing the constant
 *   0x800f3848, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or state changes are visible in this function itself. The role of
 *   the callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_sdr_address_1043880a(void)

{
  check_magic_value_104384cc((void *)0x800f3848/*SDRAM*/);
  return;
}
