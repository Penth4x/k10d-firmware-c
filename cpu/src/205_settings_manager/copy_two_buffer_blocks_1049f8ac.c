/* @k10d copy_two_buffer_blocks_1049f8ac @ 0x1049f8ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies two byte blocks from source structures into a destination buffer and stores
 *   their sizes and pointers.
 * summary:
 *   The function reads two source pointers from param_1+0x8 (offsets 0x10 and 0x0c). For
 *   each, it reads a length (offset 0x18) and source pointer (offset 0x2c) from the source
 *   structure, then copies that many bytes to a destination calculated from param_1+0x14
 *   plus an offset (0x30). It then writes the length, source pointer, and a calculated size
 *   value into fields at param_1+0x40 through 0x54. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_buffer_blocks_1049f8ac(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(iVar6 + 0x30);
  iVar5 = *(int *)(iVar6 + 0x2c);
  iVar6 = *(int *)(iVar6 + 0x18);
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    *(uint8_t *)(iVar6 + iVar4 + 0xc + iVar1) = *(uint8_t *)(iVar6 + iVar5);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  iVar7 = *(int *)(iVar5 + 0x30);
  iVar4 = *(int *)(iVar5 + 0x2c);
  iVar6 = *(int *)(iVar5 + 0x18);
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    *(uint8_t *)(iVar6 + iVar1 + 0xc + iVar7) = *(uint8_t *)(iVar6 + iVar4);
  }
  uVar2 = *(int *)(iVar5 + 0x30) + 0xc + (*(int *)(iVar5 + 0x18) + 3U & 0xfffffffc);
  *(uint32_t *)(param_1 + 0x40) = 0;
  *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(param_1 + 0x14);
  uVar3 = uVar2 & 0xffff;
  *(uint *)(param_1 + 0x48) = uVar3;
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  *(uint *)(param_1 + 0x4c) = uVar3;
  *(uint32_t *)(param_1 + 0x50) = *(uint32_t *)(iVar6 + 0x2c);
  *(uint32_t *)(param_1 + 0x54) = *(uint32_t *)(iVar6 + 0x18);
  *(short *)(param_1 + 0x3c) = (short)uVar2 + -2;
  return;
}
