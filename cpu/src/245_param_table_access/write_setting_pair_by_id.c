/* @k10d write_setting_pair_by_id @ 0x104d3d26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_setting_pair_by_id(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_34;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar3 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  uVar4 = 0x83;
  if (iVar3 < 1) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = (iVar3 + -1) * 0x80;
  }
  if (param_2 == 0xff) {
    param_2 = extract_field_from_struct_1045ff0e(acStack_24,0x15);
  }
  iVar1 = 0;
  iVar2 = (uint)(0 < iVar3) * 0xb4;
  iVar5 = iVar2 + 0xb4;
  do {
    if (*(int *)(&DAT_105b9d04/*ROM*/ + iVar2) == param_2) {
      iVar3 = iVar1 * 0xc + (uint)(0 < iVar3) * 0xb4;
      setting_set(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9d08/*ROM*/ + iVar3) + iStack_34,
                   param_3 & 0xff);
      setting_set(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9d0c/*ROM*/ + iVar3) + iStack_34,
                   param_4 & 0xff);
      uVar4 = 0;
      break;
    }
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 1;
  } while (iVar2 < iVar5);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar4;
}
