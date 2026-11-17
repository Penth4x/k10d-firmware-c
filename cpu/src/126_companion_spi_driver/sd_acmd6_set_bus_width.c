/* @k10d sd_acmd6_set_bus_width @ 0x104484a2
 * name: verified (structural evidence: decomp: command word 0x61a, R1 status host+0x3c8 & 0xfdf90008 == 0)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   SD ACMD6 SET_BUS_WIDTH (argument 0 = 1-bit, 2 = 4-bit); succeeds when the R1 card
 *   status has no error bits (mask 0xfdf90008).
 * summary:
 *   VERIFIED: decomp: command word 0x61a, R1 status host+0x3c8 & 0xfdf90008 == 0
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_acmd6_set_bus_width(void *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0x61a,param_2,0);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
