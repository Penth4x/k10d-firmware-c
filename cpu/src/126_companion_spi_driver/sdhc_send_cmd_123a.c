/* @k10d sdhc_send_cmd_123a @ 0x104482da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues SD command 0x123a via sdhc_send_command with a flag derived from a one-time
 *   initialized state byte.
 * summary:
 *   Selects a 16-bit value (0x36 or 0x32) based on param_3 and stores it in uRam8002efd8 if
 *   iRam8002efdc is zero. Calls sdhc_send_command with command 0x123a, passing a boolean
 *   flag computed from the stored value ORed with a byte at param_1+0x160. Returns 1 if the
 *   command succeeded and a specific bit pattern at param_1+0x3c8 is zero, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_cmd_123a(void *param_1,uint32_t param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (param_3 == 0) {
    uVar1 = 0x36;
  }
  else {
    uVar1 = 0x32;
  }
  if (iRam8002efdc == 0) {
    iRam8002efdc = 1;
    uRam8002efd8 = uVar1;
  }
  iVar2 = sdhc_send_command(param_1,0x123a,param_2,
                       (uint)(ushort)(uRam8002efd8 | *(char *)((int)param_1 + 0x160) != '\0'));
  uVar3 = 0;
  if ((iVar2 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar3 = 1;
  }
  return uVar3;
}
