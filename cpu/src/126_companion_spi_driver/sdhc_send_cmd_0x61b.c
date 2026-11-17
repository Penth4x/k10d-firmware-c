/* @k10d sdhc_send_cmd_0x61b @ 0x10448680
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SD command 0x61b via sdhc_send_command and conditionally calls
 *   poll_event_until_timeout on success.
 * summary:
 *   Invokes sdhc_send_command with command index 0x61b and argument param_2. If the command
 *   succeeds (return 0) and a specific bit pattern in the host state at offset 0x3c8 is
 *   clear, it calls poll_event_until_timeout with parameters 2 and 100. Returns 0 or the
 *   result of poll_event_until_timeout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_cmd_0x61b(void *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0x61b,param_2,0);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = poll_event_until_timeout(param_1,2,100);
  }
  return uVar2;
}
