/* @k10d sd_cmd55_app_cmd @ 0x10448490
 * name: verified (structural evidence: decomp: command word 0x371a (index 0x37 = 55), arg param_2<<16; callers pass host+0xe0 (RCA))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   SD CMD55 APP_CMD with the card's RCA in the upper 16 bits of the argument (prefix for
 *   the following ACMD).
 * summary:
 *   VERIFIED: decomp: command word 0x371a (index 0x37 = 55), arg param_2<<16; callers pass
 *   host+0xe0 (RCA)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_cmd55_app_cmd(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = sdhc_send_command(param_1,0x371a,param_2 << 0x10,0);
  return uVar1;
}
