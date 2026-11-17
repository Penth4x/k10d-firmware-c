/* @k10d strip_matching_pairs_from_buffer @ 0x1053b836
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates a byte buffer, removes 16-bit entries matching a target value, and reports the
 *   count of removed pairs.
 * summary:
 *   The function reads a pointer and length from a structure (param_2 + 0x24) and a target
 *   16-bit value from a stack variable. It scans the buffer in 2-byte steps, comparing each
 *   16-bit value to the target. When a match is found, it calls insert_lens_fw_block with
 *   the start index of the preceding non-matching sequence and resets the matched bytes to
 *   zero. It tracks the total number of matches and updates the structure's length field
 *   (param_2 + 0x18) and a stack field (in_stack_00000010 + 0x74) with the match count and
 *   adjusted length.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t strip_matching_pairs_from_buffer(uint32_t param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int in_stack_00000010;
  
  iVar6 = *(int *)(param_2 + 0x24);
  *(uint32_t *)(iVar6 + 0xc) = 1;
  pbVar7 = *(byte **)(iVar6 + 8);
  uVar2 = *(uint *)(in_stack_00000010 + 0x50);
  iVar10 = 0;
  *pbVar7 = 0xf8;
  pbVar7[1] = 0xff;
  pbVar7[2] = 0xff;
  uVar3 = *(uint *)(in_stack_00000010 + 0x4c);
  uVar5 = 0;
  iVar6 = 2;
  for (uVar9 = 2; uVar9 < uVar3; uVar9 = uVar9 + 2) {
    pbVar8 = pbVar7 + 3;
    uVar1 = (ushort)*pbVar8 | (pbVar7[4] & 0xf) << 8;
    if (uVar1 == (ushort)uVar2) {
      iVar10 = iVar10 + 1;
      if (uVar5 != 0) {
        insert_lens_fw_block(param_2,iVar6,uVar5);
      }
      iVar6 = uVar9 + 1;
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 + 1;
      if (uVar1 != 0) {
        *pbVar8 = 0;
        pbVar7[4] = pbVar7[4] & 0xf0;
      }
    }
    if (uVar3 <= uVar9 + 1) break;
    uVar4 = (uint)pbVar7[5] << 4 | (int)(pbVar7[4] & 0xf0) >> 4;
    if (uVar4 == (uVar2 & 0xffff)) {
      iVar10 = iVar10 + 1;
      if (uVar5 != 0) {
        insert_lens_fw_block(param_2,iVar6,uVar5);
      }
      iVar6 = uVar9 + 2;
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 + 1;
      if (uVar4 != 0) {
        pbVar7[4] = pbVar7[4] & 0xf;
        pbVar7[5] = 0;
      }
    }
    pbVar7 = pbVar8;
  }
  if (uVar5 != 0) {
    insert_lens_fw_block(param_2,iVar6,uVar5);
  }
  *(int *)(param_2 + 0x18) = (*(int *)(in_stack_00000010 + 0x4c) - iVar10) + -2;
  *(int *)(in_stack_00000010 + 0x74) = iVar10;
  return 0;
}
