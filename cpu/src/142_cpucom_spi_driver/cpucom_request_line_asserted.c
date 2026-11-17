/* @k10d cpucom_request_line_asserted @ 0x1046614c
 * name: verified (structural evidence: decomp + runtime: flag object reg 0x50000106 mask 0x02)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   True when the companion CPU's request line (GPIO 0x50000106 bit 0x02, flag object chain
 *   obj+0x14 -> +0x10c) is set; gates the poll started from the vector-31 handler.
 * summary:
 *   VERIFIED: decomp + runtime: flag object reg 0x50000106 mask 0x02
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint cpucom_request_line_asserted(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_set_if_active(*(void **)(param_1 + 0x14));
  return (uint)bVar1;
}
