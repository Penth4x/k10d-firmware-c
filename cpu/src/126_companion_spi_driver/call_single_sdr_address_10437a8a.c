/* @k10d call_single_sdr_address_10437a8a @ 0x10437a8a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with a fixed SDRAM address argument.
 * summary:
 *   The function makes one call to collect_four_status_values, passing the constant
 *   0x8001e9a0, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or side effects are visible in this function itself. The role of the
 *   callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_sdr_address_10437a8a(void)

{
  collect_four_status_values(0x8001e9a0/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
