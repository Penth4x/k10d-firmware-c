/* @k10d sdhc_write_argument @ 0x1044aa68
 * name: verified (structural evidence: decomp: *(u32*)(regs+8) = param_2)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the 32-bit SD command argument register (SDHCI +0x08).
 * summary:
 *   VERIFIED: decomp: *(u32*)(regs+8) = param_2
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_write_argument(void *param_1,uint32_t param_2)

{
  _DAT_00000300 = 0;
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 8) = param_2;
  return;
}
