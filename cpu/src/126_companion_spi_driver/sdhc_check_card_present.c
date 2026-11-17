/* @k10d sdhc_check_card_present @ 0x10448592
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends an SDHC command and checks a host status flag to determine if a card is present.
 * summary:
 *   Calls sdhc_send_command with a specific command code (0x2a1a) and a flag derived from
 *   param_2. It then checks a specific bit in the host status register at offset 0x3c8.
 *   Returns 1 if the command succeeded and the status bit is clear, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_check_card_present(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = sdhc_send_command(param_1,0x2a1a,(uint)(param_2 != 0),0);
  if ((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
