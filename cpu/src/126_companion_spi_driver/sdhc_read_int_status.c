/* @k10d sdhc_read_int_status @ 0x1044b32c
 * name: verified (structural evidence: decomp: *(u16*)(regs+0x30) & 0x81ff)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the SDHCI normal interrupt status register (+0x30), masked 0x81ff.
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0x30) & 0x81ff
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort sdhc_read_int_status(void *param_1)

{
  _DAT_00000300 = 0;
  return *(ushort *)(*(int *)((int)param_1 + 8) + 0x30) & 0x81ff;
}
