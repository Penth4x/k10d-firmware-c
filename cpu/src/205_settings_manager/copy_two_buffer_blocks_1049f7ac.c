/* @k10d copy_two_buffer_blocks_1049f7ac @ 0x1049f7ac
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies two variable-length byte blocks from objects retrieved via
 *   read_struct_field_by_index_104a2a78 into a destination buffer.
 * summary:
 *   The function calls read_struct_field_by_index_104a2a78 with indices 1 and 0 to retrieve
 *   source objects, then copies byte arrays defined by offsets 0x18 (length), 0x2c
 *   (source), and 0x30 (destination offset) into a buffer at param_1+0x14. It subsequently
 *   calls read_struct_field_by_index_104a2a78 with index 2 to retrieve a third object and
 *   stores its fields at offsets 0x2c and 0x18 into param_1+0x50 and 0x54, along with
 *   calculated length/offset values in other fields of param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_buffer_blocks_1049f7ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),1);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(iVar3 + 0x30);
  iVar2 = *(int *)(iVar3 + 0x2c);
  iVar3 = *(int *)(iVar3 + 0x18);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + iVar1 + 0xc + iVar6) = *(uint8_t *)(iVar3 + iVar2);
  }
  iVar6 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),0);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(iVar6 + 0x30);
  iVar2 = *(int *)(iVar6 + 0x2c);
  iVar3 = *(int *)(iVar6 + 0x18);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + iVar1 + 0xc + iVar7) = *(uint8_t *)(iVar3 + iVar2);
  }
  uVar4 = *(int *)(iVar6 + 0x30) + 0xc + (*(int *)(iVar6 + 0x18) + 3U & 0xfffffffc);
  *(uint32_t *)(param_1 + 0x40) = 0;
  *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(param_1 + 0x14);
  uVar5 = uVar4 & 0xffff;
  *(uint *)(param_1 + 0x48) = uVar5;
  iVar3 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),2);
  *(uint *)(param_1 + 0x4c) = uVar5;
  *(uint32_t *)(param_1 + 0x50) = *(uint32_t *)(iVar3 + 0x2c);
  *(uint32_t *)(param_1 + 0x54) = *(uint32_t *)(iVar3 + 0x18);
  *(short *)(param_1 + 0x3c) = (short)uVar4 + -2;
  return;
}
