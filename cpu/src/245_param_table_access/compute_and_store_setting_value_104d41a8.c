/* @k10d compute_and_store_setting_value_104d41a8 @ 0x104d41a8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a value from a virtual method call and stores it via setting_set.
 * summary:
 *   Instantiates a temporary object of class cls_105a6d8c, calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 0x2b. If the result is less than 1,
 *   it uses 0x52; otherwise it computes (result - 1) * 0x80 + 0x162. The computed value and
 *   the low byte of param_3 are passed to setting_set using the pointer at param_1 + 0x14.
 *   The temporary object is then deleted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d41a8(int param_1,uint32_t param_2,uint param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  if (iVar1 < 1) {
    iVar1 = 0x52;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80 + 0x162;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_3 & 0xff);
  cls_105a6d8c_delete(acStack_24,2);
  return 0;
}
