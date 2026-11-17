/* @k10d copy_16_words_from_rom_to_sram_1052e8a4 @ 0x1052e8a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_16_words_from_rom_to_sram_1052e8a4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x40;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&DAT_8005a8f0/*SDRAM*/ + iVar2) = *(uint32_t *)(iVar2 + 0x1000c954/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
