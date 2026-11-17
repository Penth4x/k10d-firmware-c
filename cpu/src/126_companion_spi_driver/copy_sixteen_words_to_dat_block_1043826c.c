/* @k10d copy_sixteen_words_to_dat_block_1043826c @ 0x1043826c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sixteen_words_to_dat_block_1043826c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x40;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffe14a4) = *(uint32_t *)(iVar2 + 0x1000c494/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
