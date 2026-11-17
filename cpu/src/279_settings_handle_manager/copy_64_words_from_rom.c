/* @k10d copy_64_words_from_rom @ 0x10520aae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_64_words_from_rom(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x108;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffa5d48) = *(uint32_t *)(iVar2 + 0x10004ffc/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
