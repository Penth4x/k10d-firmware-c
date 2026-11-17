/* @k10d sdhc_send_command_with_flag_10448392 @ 0x10448392
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Wraps sdhc_send_command with a specific command index and a conditional flag derived
 *   from host state.
 * summary:
 *   Selects a command index (0x26 or 0x22) based on param_3, stores it in a global if
 *   uninitialized, and calls sdhc_send_command with a fixed argument 0x193a. The final flag
 *   passed to sdhc_send_command is the OR of the stored index and a bit from the host
 *   structure at offset 0x160. Returns 1 if the command succeeded and a specific status
 *   mask at host+0x3c8 is clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_with_flag_10448392(void *param_1,uint32_t param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (param_3 == 0) {
    uVar1 = 0x26;
  }
  else {
    uVar1 = 0x22;
  }
  if (iRam8002efe0 == 0) {
    iRam8002efe0 = 1;
    uRam8002efda = uVar1;
  }
  iVar2 = sdhc_send_command(param_1,0x193a,param_2,
                       (uint)(ushort)(uRam8002efda | *(char *)((int)param_1 + 0x160) != '\0'));
  uVar3 = 0;
  if ((iVar2 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar3 = 1;
  }
  return uVar3;
}
