/* @k10d compare_two_sram_blocks @ 0x1046872c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t compare_two_sram_blocks(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 + _DAT_800042c0/*SDRAM*/ + 0x800000) != *(int *)(iVar1 + _DAT_800042c0/*SDRAM*/ + 0x840000)) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (uVar2 < 0x10000);
  return 1;
}
