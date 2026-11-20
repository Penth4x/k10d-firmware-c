/* @k10d compute_and_store_setting_value_104d3a8a @ 0x104d3a8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Computes a value from a virtual method call and stores it via setting_set.
 * summary:
 *   Creates a temporary object of class cls_105a6d8c, passes it to copy_status_block_bytes
 *   along with a field from param_1. Calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with argument 0x2b. If the result is
 *   less than 1, uses 0; otherwise computes (result-1)*0x80 + 0x128. Stores this computed
 *   value and the low byte of param_2 into the settings block using setting_set. Cleans up
 *   the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d3a8a(int param_1,uint param_2)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80 + 0x128;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_2 & 0xff);
  cls_105a6d8c_delete(acStack_24,2);
  return 0;
}
