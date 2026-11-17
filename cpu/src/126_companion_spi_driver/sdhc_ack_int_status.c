/* @k10d sdhc_ack_int_status @ 0x1044b346
 * name: verified (structural evidence: decomp: *(u16*)(regs+0x30) = param_2 & 0x81ff)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Acknowledges (write-1-to-clear) bits of the SDHCI normal interrupt status register
 *   (+0x30).
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0x30) = param_2 & 0x81ff
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_ack_int_status(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x30) = param_2 & 0x81ff;
  return;
}
