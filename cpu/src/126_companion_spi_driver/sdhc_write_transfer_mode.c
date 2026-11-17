/* @k10d sdhc_write_transfer_mode @ 0x1044aa88
 * name: verified (structural evidence: decomp: *(u16*)(regs+0xc) = param_2 & 0x37)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the SDHCI transfer-mode register (+0x0C), masked to 0x37.
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0xc) = param_2 & 0x37
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_write_transfer_mode(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0xc) = param_2 & 0x37;
  return;
}
