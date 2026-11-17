/* @k10d copy_16_words_from_rom_to_sram_104357a8 @ 0x104357a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_16_words_from_rom_to_sram_104357a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x40;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&DAT_8001e29c/*SDRAM*/ + iVar2) = *(uint32_t *)(iVar2 + 0x1000c694/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
