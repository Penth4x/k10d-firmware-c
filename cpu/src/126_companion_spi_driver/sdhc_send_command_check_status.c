/* @k10d sdhc_send_command_check_status @ 0x1044825c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends an SDHC command and returns success only if the command completes without error
 *   and specific status bits are clear.
 * summary:
 *   Calls sdhc_send_command with a fixed command code 0x101a and the provided argument.
 *   Checks the return value and inspects bits in the host structure at offset 0x3c8.
 *   Returns 1 if the command succeeded and the status mask (0xfdf90008) is zero, otherwise
 *   returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_check_status(void *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0x101a,param_2,0);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
