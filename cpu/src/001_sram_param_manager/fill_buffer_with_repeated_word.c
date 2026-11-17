/* @k10d fill_buffer_with_repeated_word @ 0x100f1aa6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fill_buffer_with_repeated_word(uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_800480cd/*SDRAM*/ == '\x01') {
    dispatch_aligned_or_copy(param_1);
  }
  else {
    puVar5 = (uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x20);
    if ((param_1 & 3) == 0) {
      iVar1 = 0x1f;
      iVar7 = 0;
      do {
        *(uint32_t *)(iVar7 + param_1) = *puVar5;
        *(uint32_t *)(iVar7 + 4 + param_1) = *puVar5;
        *(uint32_t *)(iVar7 + 8 + param_1) = *puVar5;
        *(uint32_t *)(iVar7 + 0xc + param_1) = *puVar5;
        iVar1 = iVar1 + -1;
        iVar7 = iVar7 + 0x10;
      } while (-1 < iVar1);
    }
    else if ((param_1 & 1) == 0) {
      iVar1 = 0;
      iVar7 = 0x1f;
      do {
        uVar2 = *puVar5;
        *(short *)(iVar1 * 4 + param_1) = (short)((uint)uVar2 >> 0x10);
        *(short *)(iVar1 * 4 + param_1 + 2) = (short)uVar2;
        uVar2 = *puVar5;
        iVar3 = (iVar1 + 1) * 4;
        *(short *)(iVar3 + param_1) = (short)((uint)uVar2 >> 0x10);
        *(short *)(iVar3 + param_1 + 2) = (short)uVar2;
        uVar2 = *puVar5;
        iVar3 = (iVar1 + 2) * 4;
        *(short *)(iVar3 + param_1) = (short)((uint)uVar2 >> 0x10);
        *(short *)(iVar3 + param_1 + 2) = (short)uVar2;
        uVar2 = *puVar5;
        iVar3 = (iVar1 + 3) * 4;
        *(short *)(iVar3 + param_1) = (short)((uint)uVar2 >> 0x10);
        *(short *)(iVar3 + param_1 + 2) = (short)uVar2;
        iVar7 = iVar7 + -1;
        iVar1 = iVar1 + 4;
      } while (-1 < iVar7);
    }
    else {
      iVar4 = 0;
      iVar6 = 0x1f;
      iVar7 = param_1 + 1;
      iVar1 = param_1 + 2;
      iVar3 = param_1 + 3;
      do {
        uVar2 = *puVar5;
        iVar8 = iVar4 * 4;
        *(char *)(iVar8 + param_1) = (char)((uint)uVar2 >> 0x18);
        *(char *)(iVar8 + iVar7) = (char)((uint)uVar2 >> 0x10);
        *(char *)(iVar8 + iVar1) = (char)((uint)uVar2 >> 8);
        *(char *)(iVar8 + iVar3) = (char)uVar2;
        uVar2 = *puVar5;
        iVar8 = (iVar4 + 1) * 4;
        *(char *)(iVar8 + param_1) = (char)((uint)uVar2 >> 0x18);
        *(char *)(iVar8 + iVar7) = (char)((uint)uVar2 >> 0x10);
        *(char *)(iVar8 + iVar1) = (char)((uint)uVar2 >> 8);
        *(char *)(iVar8 + iVar3) = (char)uVar2;
        uVar2 = *puVar5;
        iVar8 = (iVar4 + 2) * 4;
        *(char *)(iVar8 + param_1) = (char)((uint)uVar2 >> 0x18);
        *(char *)(iVar8 + iVar7) = (char)((uint)uVar2 >> 0x10);
        *(char *)(iVar8 + iVar1) = (char)((uint)uVar2 >> 8);
        *(char *)(iVar8 + iVar3) = (char)uVar2;
        uVar2 = *puVar5;
        iVar8 = (iVar4 + 3) * 4;
        *(char *)(iVar8 + param_1) = (char)((uint)uVar2 >> 0x18);
        *(char *)(iVar8 + iVar7) = (char)((uint)uVar2 >> 0x10);
        *(char *)(iVar8 + iVar1) = (char)((uint)uVar2 >> 8);
        *(char *)(iVar8 + iVar3) = (char)uVar2;
        iVar6 = iVar6 + -1;
        iVar4 = iVar4 + 4;
      } while (-1 < iVar6);
    }
  }
  return;
}
