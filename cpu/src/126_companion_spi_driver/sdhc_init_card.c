/* @k10d sdhc_init_card @ 0x10448406
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Configures the SDHCI host block size and issues initialization commands to prepare an
 *   SD card for data transfer.
 * summary:
 *   The function reads the block size from the host structure and applies it via
 *   sdhc_set_block_size. It then calls sdhc_virtual_write and sdhc_send_command with a
 *   specific command code (0x2a3a) to initialize the card. Finally, it calls
 *   wait_for_sdhc_data_ready, likely to perform further setup or verification, returning 1
 *   on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_init_card(void *param_1)

{
  ushort uVar3;
  uint32_t uVar1;
  int iVar2;
  void *pvVar4;
  
  pvVar4 = *(void **)((int)param_1 + 0x110);
  uVar3 = (*(code *)0x1044bfc2/*ROM*/)((int)param_1 + 0x138);
  sdhc_set_block_size(pvVar4,uVar3);
  *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x118);
  uVar1 = (*(code *)0x1044bfc0/*ROM*/)((int)param_1 + 0x138);
  iVar2 = sdhc_virtual_write(param_1,uVar1,1);
  uVar1 = 0;
  if ((((iVar2 != 0) && (iVar2 = sdhc_send_command(param_1,0x2a3a,0,1), iVar2 != 0)) &&
      ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) &&
     (iVar2 = wait_for_sdhc_data_ready(param_1,*(int *)((int)param_1 + 0x104)), iVar2 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
