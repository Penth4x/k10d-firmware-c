/* @k10d sdhc_send_command_183a @ 0x1044834e
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SD command 0x183a via sdhc_send_command and returns 1 on success with a clean
 *   status word.
 * summary:
 *   Calls sdhc_send_command with a fixed command code 0x183a, passing param_2 as the
 *   argument and a boolean derived from byte param_1+0x160 as the transfer-mode flag. It
 *   then checks the host status word at param_1+0x3c8 against mask 0xfdf90008; if the
 *   command succeeded and those status bits are clear, it returns 1, otherwise 0. The
 *   specific SD command 0x183a is not identified in the brief, so the higher-level camera
 *   role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_183a(void *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0x183a,param_2,(uint)(*(char *)((int)param_1 + 0x160) != '\0'));
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
