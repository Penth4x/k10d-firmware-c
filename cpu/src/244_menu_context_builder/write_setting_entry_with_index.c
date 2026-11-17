/* @k10d write_setting_entry_with_index @ 0x104d3b6a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Computes a setting index from a class object and writes three byte values to the
 *   settings block.
 * summary:
 *   Instantiates a temporary cls_105a6d8c object, initializes it via
 *   copy_status_block_bytes, and queries two virtual slots (0x2b and 3) to derive an index.
 *   It calls quantize_exposure_value to compute a value, then uses setting_set to write
 *   param_2, the computed value, and param_5 to the settings block at an offset determined
 *   by the index (either fixed 0x6a-0x6c or calculated as (index-1)*0x80 + 0x17a-0x17c).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_setting_entry_with_index(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  uVar2 = get_or_init_heap_block();
  uVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,3);
  uVar2 = quantize_exposure_value(uVar2,param_3,param_4,uVar3 & 0xff);
  if (iVar1 < 1) {
    setting_set(*(int *)(param_1 + 0x14),0x6a,param_2 & 0xff);
    setting_set(*(int *)(param_1 + 0x14),0x6b,uVar2);
    iVar1 = 0x6c;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x17a,param_2 & 0xff);
    setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x17b,uVar2);
    iVar1 = iVar1 + 0x17c;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,param_5 & 0xff);
  cls_105a6d8c_delete(auStack_24,2);
  return 0;
}
