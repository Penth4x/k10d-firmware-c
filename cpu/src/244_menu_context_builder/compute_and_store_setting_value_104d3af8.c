/* @k10d compute_and_store_setting_value_104d3af8 @ 0x104d3af8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Computes a value from a virtual method call and stores it via setting_set.
 * summary:
 *   Creates a temporary object of class cls_105a6d8c, passes it to copy_status_block_bytes
 *   along with a field from param_1. Calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with argument 0x2b. Clamps the
 *   result to a minimum of 1, then transforms it using the formula (result-1)*0x80 + 0x129
 *   if greater than 1. Finally, calls setting_set to write the computed value and the low
 *   byte of param_2 into the settings block at param_1+0x14. Cleans up the temporary
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d3af8(int param_1,uint param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80 + 0x129;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_2 & 0xff);
  cls_105a6d8c_delete(auStack_24,2);
  return 0;
}
