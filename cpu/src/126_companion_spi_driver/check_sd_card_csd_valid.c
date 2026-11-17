/* @k10d check_sd_card_csd_valid @ 0x1044a6cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Validates SD card CSD data and extracts capacity if the card is present and C_SIZE is
 *   valid.
 * summary:
 *   Calls an unknown function (0x104486ba) to check card status. If successful and a flag
 *   at offset 0xf6 is set, it calls sd_csd_c_size to extract the C_SIZE field. If C_SIZE is
 *   not 0xfff (invalid), it retrieves a value via a function pointer at 0x10447378 and
 *   stores it at offset 0x14. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_sd_card_csd_valid(int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  
  puVar1 = (uint32_t *)(*(code *)0x1044736e/*ROM*/)(param_1 + 0x1b4);
  iVar2 = sdhc_read_512_byte_block(param_1,puVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    if ((*(char *)(param_1 + 0xf6) == '\x01') &&
       (iVar2 = sd_csd_c_size(param_1 + 0x1a4), iVar2 == 0xfff)) {
      uVar3 = (*(code *)0x10447378/*ROM*/)(param_1 + 0x1b4);
      *(uint32_t *)(param_1 + 0x14) = uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}
