/* @k10d compute_and_store_setting_value_104d4216 @ 0x104d4216
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a value from a virtual method call and stores it via setting_set.
 * summary:
 *   Creates a temporary object of class cls_105a6d8c, passes it to copy_status_block_bytes
 *   along with a field from param_1. Calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with argument 0x2b. If the result is
 *   less than 1, uses 0x54; otherwise computes (result-1)*0x80 + 0x164. Stores the computed
 *   value and the low byte of param_3 into the settings block via setting_set, using a
 *   field at param_1+0x14 as the setting ID. Cleans up the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d4216(int param_1,uint32_t param_2,uint param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (iVar1 < 1) {
    iVar1 = 0x54;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80 + 0x164;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_3 & 0xff);
  cls_105a6d8c_delete(auStack_24,2);
  return 0;
}
