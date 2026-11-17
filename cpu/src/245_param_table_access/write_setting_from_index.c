/* @k10d write_setting_from_index @ 0x104d3e78
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a setting ID from a base index and a 1-4 selector, then writes it via
 *   setting_set.
 * summary:
 *   Creates a temporary cls_105a6d8c object, calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 0x2b to obtain an index. If the
 *   index is <1, it uses a fixed ID (0x5c-0x5f) based on param_2; otherwise it computes
 *   (index-1)*0x80 + offset (0x16c-0x16f). It then calls setting_set with the target
 *   pointer from param_1+0x14, the computed ID, and param_3 & 0xff. Returns 0 on success,
 *   0x83 on invalid param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_setting_from_index(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t auStack_24 [7];
  
  uStack_28 = 0;
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (iVar1 < 1) {
    if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x5c;
    }
    else if (param_2 == 2) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x5d;
    }
    else if (param_2 == 3) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x5e;
    }
    else {
      if (param_2 != 4) goto LAB_104d3f54;
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x5f;
    }
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x16c;
    }
    else if (param_2 == 2) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x16d;
    }
    else if (param_2 == 3) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x16e;
    }
    else {
      if (param_2 != 4) {
LAB_104d3f54:
        uStack_28 = 0x83;
        goto LAB_104d3f56;
      }
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x16f;
    }
  }
  setting_set(iVar2,iVar1,param_3 & 0xff);
LAB_104d3f56:
  cls_105a6d8c_delete(auStack_24,2);
  return uStack_28;
}
