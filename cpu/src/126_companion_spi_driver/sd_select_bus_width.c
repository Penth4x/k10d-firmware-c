/* @k10d sd_select_bus_width @ 0x1044a2cc
 * name: verified (structural evidence: decomp: bit2 -> ACMD6(2) + host control bit 1 set; else bit0 -> ACMD6(0) + bit cleared; returns 0 if the card reports neither)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Card-init step: picks the data bus width from the SCR SD_BUS_WIDTHS nibble (SCR byte 1
 *   low nibble: bit 2 = 4-bit supported, bit 0 = 1-bit); sends CMD55+ACMD6 and sets the
 *   host's 4-bit mode bit to match.
 * summary:
 *   VERIFIED: decomp: bit2 -> ACMD6(2) + host control bit 1 set; else bit0 -> ACMD6(0) +
 *   bit cleared; returns 0 if the card reports neither
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_select_bus_width(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = gate176_bit2((void *)((int)param_1 + 0x175));
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = gate176_bit0((void *)((int)param_1 + 0x175));
    if (((iVar1 != 0) &&
        (iVar1 = sd_cmd55_app_cmd(param_1,(uint)*(ushort *)((int)param_1 + 0xe0)), iVar1 != 0)) &&
       (iVar1 = sd_acmd6_set_bus_width(param_1,0), iVar1 != 0)) {
      sdhc_set_data_width((void *)(*(uint32_t *)((int)param_1 + 0x110)),0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = sd_cmd55_app_cmd(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
    if ((iVar1 != 0) && (iVar1 = sd_acmd6_set_bus_width(param_1,2), iVar1 != 0)) {
      sdhc_set_data_width((void *)(*(uint32_t *)((int)param_1 + 0x110)),2);
      uVar2 = 1;
    }
  }
  return uVar2;
}
