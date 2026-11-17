/* @k10d sdhc_set_block_size @ 0x1044a9ec
 * name: verified (structural evidence: decomp: *(u16*)(regs+4) = (… & 0xf000) | (param_2 & 0xfff))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets the 12-bit transfer block size field of the SDHCI block-size register (+0x04).
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+4) = (… & 0xf000) | (param_2 & 0xfff)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_set_block_size(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 4) =
       *(ushort *)(*(int *)((int)param_1 + 8) + 4) & 0xf000 | param_2 & 0xfff;
  return;
}
