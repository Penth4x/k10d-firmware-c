/* @k10d sd_send_acmd_after_app_cmd @ 0x1044a222
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends an SD card ACMD by first issuing APP_CMD with the card's RCA, then calling a
 *   follow-up command routine.
 * summary:
 *   Reads a 16-bit value from offset 0xe0 of the SD card context structure and passes it to
 *   sd_cmd55_app_cmd. If that succeeds, it calls sdhc_check_card_present with the context
 *   and argument 1. Returns 1 if both calls succeed, otherwise 0. The specific ACMD number
 *   is determined by the unknown callee sdhc_check_card_present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_send_acmd_after_app_cmd(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sd_cmd55_app_cmd(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = sdhc_check_card_present(param_1,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
