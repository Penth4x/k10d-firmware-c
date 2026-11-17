/* @k10d sdhc_send_command_with_flag_10448290 @ 0x10448290
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues an SD command with a flag derived from a host field and returns success if no
 *   error bit is set.
 * summary:
 *   Calls sdhc_send_command with a fixed command index 0x113a and a flag that ORs 0x10 with
 *   a bit from host+0x160. It then checks the host status word at +0x3c8 against a mask to
 *   determine if an error occurred, returning 1 on success and 0 on failure. The specific
 *   SD command type is not identifiable from the index alone without the SDHCI command
 *   table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_with_flag_10448290(void *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0x113a,param_2,*(char *)((int)param_1 + 0x160) != '\0' | 0x10);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
