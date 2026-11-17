/* @k10d compute_and_store_setting_value_104d39dc @ 0x104d39dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Computes a derived value from object state and stores it via setting_set.
 * summary:
 *   If param_3 is less than 1, returns 0x83. Otherwise, instantiates a temporary
 *   cls_105a6d8c object, calls copy_status_block_bytes with a field from param_1, and
 *   retrieves two values via virtual slot 2 (extract_field_from_struct_1045ff0e) with
 *   indices 0x2b and 3. It calls find_exposure_value_index with these values and
 *   param_2/param_3 to produce a result. It then calculates an index based on the first
 *   retrieved value (clamped to 0x68 if <1, otherwise (val-1)*0x80 + 0x178) and calls
 *   setting_set to store the result at that index. Finally, it deletes the temporary object
 *   and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_setting_value_104d39dc(int param_1,short param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  if (param_3 < 1) {
    uVar2 = 0x83;
  }
  else {
    cls_105a6d8c_new(auStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
    iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
    uVar2 = get_or_init_heap_block();
    uVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,3);
    uVar3 = find_exposure_value_index(uVar2,param_2,(int)(short)param_3,uVar3 & 0xff);
    if (iVar1 < 1) {
      iVar1 = 0x68;
    }
    else {
      iVar1 = (iVar1 + -1) * 0x80 + 0x178;
    }
    setting_set(*(int *)(param_1 + 0x14),iVar1,uVar3);
    cls_105a6d8c_delete(auStack_24,2);
    uVar2 = 0;
  }
  return uVar2;
}
