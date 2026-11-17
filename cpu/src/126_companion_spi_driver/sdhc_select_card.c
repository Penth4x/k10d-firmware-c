/* @k10d sdhc_select_card @ 0x1044810e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SDHC CMD7 (select/deselect card) with the block address in param_2 and validates
 *   the response.
 * summary:
 *   Selects or deselects an SD card by calling sdhc_send_command with command index 0x700
 *   (CMD7) or 0x71b (CMD7 with response) and the block address shifted left by 16 bits. It
 *   returns 1 on success unless the card is selected (param_2 != 0) and the response word
 *   at host+0x3c8 indicates an error (bits masked by 0xfdf90008). The function is part of
 *   the SDHC/SD card driver stack.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_select_card(void *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0x700;
  }
  else {
    uVar2 = 0x71b;
  }
  uVar1 = sdhc_send_command(param_1,uVar2,param_2 << 0x10,0);
  if ((param_2 != 0) && (uVar1 = 1, (*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}
