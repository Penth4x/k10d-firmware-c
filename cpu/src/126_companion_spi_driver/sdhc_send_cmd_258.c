/* @k10d sdhc_send_cmd_258 @ 0x1044863e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SD command 0x102 via sdhc_send_command and copies the latched response word to
 *   host offset 0x190.
 * summary:
 *   Calls sdhc_send_command(param_1, 0x102, param_2, 0). If the command fails (non-zero
 *   return), it reads the response word from host+0x3b4; on success it uses 0. It stores
 *   that value into host+0x190 (400) and returns whether the command failed. The specific
 *   SD command 0x102 is not identified in the brief, so the role is limited to issuing that
 *   command and capturing its response.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool sdhc_send_cmd_258(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = sdhc_send_command(param_1,0x102,param_2,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)((int)param_1 + 0x3b4);
  }
  *(uint32_t *)((int)param_1 + 400) = uVar1;
  return iVar2 != 0;
}
