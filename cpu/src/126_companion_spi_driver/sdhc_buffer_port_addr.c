/* @k10d sdhc_buffer_port_addr @ 0x1044ab58
 * name: verified (structural evidence: decomp: return *(host+8)+0x20)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the address of the SDHCI buffer data port (regs+0x20).
 * summary:
 *   VERIFIED: decomp: return *(host+8)+0x20
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sdhc_buffer_port_addr(void *param_1)

{
  _DAT_00000300 = 0;
  return *(int *)((int)param_1 + 8) + 0x20;
}
