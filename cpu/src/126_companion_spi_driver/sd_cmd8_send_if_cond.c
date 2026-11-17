/* @k10d sd_cmd8_send_if_cond @ 0x10448158
 * name: verified (structural evidence: decomp: command word 0x802, arg param_2<<8|0xaa, response byte0 compared to 0xaa)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   SD CMD8 SEND_IF_COND with argument (voltage<<8 | 0xAA); succeeds when the R7 response
 *   echoes the 0xAA check pattern, returns the accepted-voltage nibble in *param_3.
 * summary:
 *   VERIFIED: decomp: command word 0x802, arg param_2<<8|0xaa, response byte0 compared to
 *   0xaa
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_cmd8_send_if_cond(void *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t uStack_a;
  
  iVar1 = sdhc_send_command(param_1,0x802,param_2 << 8 | 0xaa,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((*(uint *)((int)param_1 + 0x3b4) & 0xff) == 0xaa) {
      uStack_a = (byte)(*(uint *)((int)param_1 + 0x3b4) >> 8);
      *param_3 = uStack_a & 0xf;
      uVar2 = 1;
    }
  }
  return uVar2;
}
