/* @k10d sdhc_send_cmd_0xd1a @ 0x10448226
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues SD command 0xd1a via sdhc_send_command and returns 1 if it succeeded and a host
 *   status word is clear.
 * summary:
 *   Calls sdhc_send_command(param_1, 0xd1a, param_2<<0x10, 0). If the command returns non-
 *   zero and the 32-bit word at param_1+0x3c8 has no bits set in mask 0xfdf90008, returns
 *   1; otherwise returns 0. The meaning of the 0x3c8 status word is not established by the
 *   given code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_cmd_0xd1a(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0xd1a,param_2 << 0x10,0);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
