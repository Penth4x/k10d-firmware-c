/* @k10d sdhc_write_command @ 0x1044aad2
 * name: verified (structural evidence: decomp: *(u16*)(regs+0xe) = param_2)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the SDHCI command register (+0x0E): command index in the high byte, response
 *   type/CRC/index-check flags in the low bits; writing it starts the command.
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0xe) = param_2
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_write_command(void *param_1,uint16_t param_2)

{
  _DAT_00000300 = 0;
  *(uint16_t *)(*(int *)((int)param_1 + 8) + 0xe) = param_2;
  return;
}
