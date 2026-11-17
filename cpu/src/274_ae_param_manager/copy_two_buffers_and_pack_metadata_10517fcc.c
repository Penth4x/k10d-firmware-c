/* @k10d copy_two_buffers_and_pack_metadata_10517fcc @ 0x10517fcc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_buffers_and_pack_metadata_10517fcc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),1);
  iVar1 = *(int *)(iVar4 + 0x30);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(iVar4 + 0x2c);
  iVar4 = *(int *)(iVar4 + 0x18);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    *(uint8_t *)(iVar4 + iVar2 + iVar1) = *(uint8_t *)(iVar4 + iVar3);
  }
  iVar5 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),0);
  iVar1 = *(int *)(iVar5 + 0x30);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(iVar5 + 0x2c);
  iVar4 = *(int *)(iVar5 + 0x18);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    *(uint8_t *)(iVar4 + iVar2 + iVar1) = *(uint8_t *)(iVar4 + iVar3);
  }
  iVar4 = *(int *)(iVar5 + 0x30);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(uint32_t *)(param_1 + 0x38) = 0;
  *(uint32_t *)(param_1 + 0x3c) = *(uint32_t *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x40) = iVar4 + (iVar1 + 3U & 0xfffffffc);
  iVar4 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),3);
  *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(iVar4 + 0x30);
  *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(iVar4 + 0x2c);
  *(uint *)(param_1 + 0x4c) = *(int *)(iVar4 + 0x18) + 3U & 0xfffffffc;
  iVar4 = read_struct_field_by_index_104a2a78(*(void **)(param_1 + 4),2);
  *(uint32_t *)(param_1 + 0x50) = *(uint32_t *)(iVar4 + 0x30);
  *(uint32_t *)(param_1 + 0x54) = *(uint32_t *)(iVar4 + 0x2c);
  *(uint32_t *)(param_1 + 0x58) = *(uint32_t *)(iVar4 + 0x18);
  return;
}
