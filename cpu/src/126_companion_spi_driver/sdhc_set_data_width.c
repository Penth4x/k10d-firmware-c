/* @k10d sdhc_set_data_width @ 0x1044add4
 * name: verified (structural evidence: decomp: *(regs+0x28) = (… & 0xfd) | (param_2 & 2); called with 0 or 2 by sd_select_bus_width)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets SDHCI host-control register (+0x28) bit 1 (4-bit data transfer width) from param_2
 *   & 2, under the host lock.
 * summary:
 *   VERIFIED: decomp: *(regs+0x28) = (… & 0xfd) | (param_2 & 2); called with 0 or 2 by
 *   sd_select_bus_width
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sdhc_set_data_width(uint32_t *param_1,byte param_2)

{
  call_kernel_with_short_id(param_1);
  _DAT_00000300 = 0;
  *(byte *)(param_1[2] + 0x28) = *(byte *)(param_1[2] + 0x28) & 0xfd | param_2 & 2;
  check_kernel_call_success_10459d88(param_1);
  return;
}
