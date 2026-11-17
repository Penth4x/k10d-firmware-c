/* @k10d set_setting_by_index_and_flag @ 0x104d462e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a setting index based on a count and flag, then writes a derived value to the
 *   settings block.
 * summary:
 *   Creates a temporary cls_105a6d8c object and populates it via copy_status_block_bytes
 *   using a pointer from param_1. It queries the object's size/count via virtual slot 2
 *   (extract_field_from_struct_1045ff0e) and selects a base index (0x2b/0x2e/0x31 or
 *   0x153/0x156/0x159) based on param_2 and whether the count is less than 1. If the count
 *   is >= 1, it adjusts the index by (count-1)*0x80. Finally, it calls setting_set with the
 *   computed index and a value derived from get_or_init_heap_block and param_3, then cleans
 *   up the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_setting_by_index_and_flag(int param_1,int param_2,uint16_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  iVar4 = 0;
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  iVar3 = 0;
  if (iVar1 < 1) {
    if (param_2 == 0) {
      iVar3 = 0x2b;
    }
    else if (param_2 == 1) {
      iVar3 = 0x2e;
    }
    else {
      if (param_2 != 2) {
        iVar4 = 0x83;
        goto LAB_104d46dc;
      }
      iVar3 = 0x31;
    }
  }
  else {
    if (param_2 == 0) {
      iVar3 = 0x153;
    }
    else if (param_2 == 1) {
      iVar3 = 0x156;
    }
    else {
      if (param_2 != 2) {
        iVar4 = 0x83;
        goto LAB_104d46b0;
      }
      iVar3 = 0x159;
    }
    iVar3 = iVar3 + (iVar1 + -1) * 0x80;
  }
LAB_104d46b0:
  if (iVar4 == 0) {
    uVar2 = get_or_init_heap_block();
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = find_index_in_sorted_table(uVar2,param_3);
    setting_set(iVar1,iVar3,uVar2);
  }
LAB_104d46dc:
  cls_105a6d8c_delete(auStack_24,2);
  return iVar4;
}
