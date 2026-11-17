/* @k10d sdhc_error_interrupt_pending @ 0x1044b35e
 * name: verified (structural evidence: decomp: *(u16*)(regs+0x30) & 0x8000)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   True when the SDHCI normal-interrupt-status register (+0x30) has bit 15 (error
 *   interrupt) set.
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0x30) & 0x8000
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool sdhc_error_interrupt_pending(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(ushort *)(*(int *)((int)param_1 + 8) + 0x30) & 0x8000) != 0;
}
