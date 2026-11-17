/* @k10d sdhc_command_response_bits @ 0x1044aafa
 * name: verified (structural evidence: decomp: *(u16*)(regs+0xe) & 0xf)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the low 4 bits of the SDHCI command register (+0x0E): response-type/CRC-check
 *   flags of the command just issued (nonzero = a response is expected).
 * summary:
 *   VERIFIED: decomp: *(u16*)(regs+0xe) & 0xf
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort sdhc_command_response_bits(void *param_1)

{
  _DAT_00000300 = 0;
  return *(ushort *)(*(int *)((int)param_1 + 8) + 0xe) & 0xf;
}
