/* @k10d check_sdhc_command_success @ 0x104481f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends an SDHC command and returns 1 if it completed without an error flag in the host
 *   status.
 * summary:
 *   Calls sdhc_send_command with the given host pointer and command code 0xcdb. It then
 *   inspects the host status word at offset 0x3c8, masking with 0xfdf90008, and returns 1
 *   only if the command call succeeded and none of the masked status bits are set. The
 *   function acts as a small success predicate around a single SDHC command transaction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_sdhc_command_success(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command(param_1,0xcdb,0,0);
  uVar2 = 0;
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
