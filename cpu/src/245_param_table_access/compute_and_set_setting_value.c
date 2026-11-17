/* @k10d compute_and_set_setting_value @ 0x104d4406
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calculates a setting ID and value based on a mode parameter and writes it via
 *   setting_set.
 * summary:
 *   The function initializes a temporary object, queries a virtual method (slot 2) to
 *   retrieve a count or index. It then selects a specific setting ID (e.g., 0x59, 0x56, or
 *   a calculated offset) based on param_2 and the result of the query. Finally, it calls
 *   setting_set to store the value (param_3) into the selected setting ID and cleans up the
 *   temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_set_setting_value(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t auStack_24 [7];
  
  uStack_28 = 0;
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (iVar1 < 1) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x59;
    }
    else if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x56;
    }
    else {
      if (param_2 != 0xff) {
        uStack_28 = 0x83;
        goto LAB_104d4506;
      }
      iVar1 = setting_get(*(int *)(param_1 + 0x14),0x50);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        iVar1 = 0x59;
      }
      else {
        iVar1 = 0x56;
      }
    }
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x169;
    }
    else if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x166;
    }
    else {
      if (param_2 != 0xff) {
        uStack_28 = 0x83;
        goto LAB_104d4506;
      }
      iVar3 = setting_get(*(int *)(param_1 + 0x14),iVar1 + 0x160);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        iVar1 = iVar1 + 0x169;
      }
      else {
        iVar1 = iVar1 + 0x166;
      }
    }
  }
  setting_set(iVar2,iVar1,param_3 & 0xff);
LAB_104d4506:
  cls_105a6d8c_delete(auStack_24,2);
  return uStack_28;
}
