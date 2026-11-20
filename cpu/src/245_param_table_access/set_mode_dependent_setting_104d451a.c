/* @k10d set_mode_dependent_setting_104d451a @ 0x104d451a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a setting ID based on a mode parameter and writes a value to it via
 *   setting_set.
 * summary:
 *   The function initializes a temporary object (cls_105a6d8c) and queries a virtual method
 *   (slot 2) to determine a count or index. Based on param_2 (mode) and the result of the
 *   query, it selects a specific setting ID (e.g., 0x57, 0x5a, or a computed offset). It
 *   then calls setting_set to write param_3 to the selected setting ID associated with the
 *   object at param_1+0x14. Finally, it cleans up the temporary object and returns a status
 *   code (0 or 0x83).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_mode_dependent_setting_104d451a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_28;
  cls_105a6d8c acStack_24 [7];
  
  uStack_28 = 0;
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  if (iVar1 < 1) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x5a;
    }
    else if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = 0x57;
    }
    else {
      if (param_2 != 0xff) {
        uStack_28 = 0x83;
        goto LAB_104d461a;
      }
      iVar1 = setting_get(*(int *)(param_1 + 0x14),0x50);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        iVar1 = 0x5a;
      }
      else {
        iVar1 = 0x57;
      }
    }
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x16a;
    }
    else if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = iVar1 + 0x167;
    }
    else {
      if (param_2 != 0xff) {
        uStack_28 = 0x83;
        goto LAB_104d461a;
      }
      iVar3 = setting_get(*(int *)(param_1 + 0x14),iVar1 + 0x160);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        iVar1 = iVar1 + 0x16a;
      }
      else {
        iVar1 = iVar1 + 0x167;
      }
    }
  }
  setting_set(iVar2,iVar1,param_3 & 0xff);
LAB_104d461a:
  cls_105a6d8c_delete(acStack_24,2);
  return uStack_28;
}
