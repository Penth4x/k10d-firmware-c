/* @k10d copy_table_entry_by_id @ 0x104ad99c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a fixed-size data block from a 4-entry table in SDRAM to a destination buffer if
 *   the entry ID matches.
 * summary:
 *   Iterates through a 4-entry table located at 0x80010660, where each entry consists of a
 *   1-byte ID and a 1-byte length. If the ID matches param_2, it copies (length + 3) / 4
 *   words from the entry's data pointer (param_1) to param_3, provided param_4 is not less
 *   than the stored length. The function returns void and performs no other side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_table_entry_by_id(uint32_t param_1,uint param_2,uint32_t *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  byte bVar4;
  uint uVar3;
  uint32_t *puVar5;
  uint uVar6;
  uint32_t uVar7;
  bool bVar8;
  
  puVar5 = (uint32_t *)0x0;
  piVar1 = (int *)0x80010660/*SDRAM*/;
  bVar4 = 0;
  uVar6 = 0;
  do {
    if (param_2 == *(byte *)*piVar1) {
      puVar5 = (uint32_t *)*piVar1;
      uVar6 = (uint)*(byte *)piVar1[1];
      bVar8 = param_4 < uVar6;
      goto LAB_104ad9c8;
    }
    bVar4 = bVar4 + 1;
    piVar1 = piVar1 + 1;
  } while (bVar4 < 4);
  bVar8 = false;
LAB_104ad9c8:
  if ((!bVar8) && (puVar5 != (uint32_t *)0x0)) {
    uVar2 = uVar6 + 3 >> 2;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        *param_3 = uVar7;
        uVar3 = uVar3 + 1 & 0xff;
        param_3 = param_3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return uVar6;
}
