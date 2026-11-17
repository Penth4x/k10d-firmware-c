/* @k10d compute_and_store_setting_value_104d4284 @ 0x104d4284
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes a value from a virtual method call and stores it via setting_set.
 * summary:
 *   Creates a temporary object of class cls_105a6d8c, calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 0x2b to retrieve a value. If the
 *   result is less than 1, it defaults to 0x50; otherwise it scales the result using the
 *   formula (result - 1) * 0x80 + 0x160. The computed value and the lower byte of param_2
 *   are written to the settings block at offset 0x14 of param_1 using setting_set. The
 *   temporary object is then deleted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d4284(int param_1,uint param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (iVar1 < 1) {
    iVar1 = 0x50;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80 + 0x160;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_2 & 0xff);
  cls_105a6d8c_delete(auStack_24,2);
  return 0;
}
