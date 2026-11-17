/* @k10d write_setting_pair_from_object @ 0x104d3f6a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Computes two derived values from a temporary object and writes them to consecutive
 *   setting slots.
 * summary:
 *   If param_3 < 1, returns 0x83. Otherwise, it instantiates a temporary cls_105a6d8c
 *   object, initializes it via copy_status_block_bytes using a pointer from param_1+8, and
 *   queries two properties (indices 0x2b and 3) via the virtual method
 *   extract_field_from_struct_1045ff0e. It then calls compute_complement_of_helper_result
 *   with these values and param_2 to generate a handle, and derives two final values using
 *   map_event_code_to_value and map_mode_code_to_index_1045b126. These values are written
 *   to the settings block (pointed to by param_1+0x14) at indices determined by the first
 *   property value (either 2 and 3, or 0x12a+offset and 0x12b+offset). The temporary object
 *   is deleted, and 0 is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_setting_pair_from_object(int param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  if (param_3 < 1) {
    uVar4 = 0x83;
  }
  else {
    cls_105a6d8c_new(auStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
    iVar2 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
    uVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,3);
    uVar4 = get_or_init_heap_block();
    uVar5 = compute_complement_of_helper_result(uVar4,(int)param_2,(int)(short)param_3,uVar3 & 0xff);
    if (iVar2 < 1) {
      iVar2 = *(int *)(param_1 + 0x14);
      uVar6 = map_event_code_to_value(uVar4,uVar5);
      setting_set(iVar2,2,uVar6);
      iVar2 = *(int *)(param_1 + 0x14);
      uVar4 = map_mode_code_to_index_1045b126(uVar4,uVar5);
      iVar7 = 3;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar7 = (iVar2 + -1) * 0x80;
      uVar6 = map_event_code_to_value(uVar4,uVar5);
      setting_set(iVar1,iVar7 + 0x12a,uVar6);
      iVar2 = *(int *)(param_1 + 0x14);
      iVar7 = iVar7 + 299;
      uVar4 = map_mode_code_to_index_1045b126(uVar4,uVar5);
    }
    setting_set(iVar2,iVar7,uVar4);
    cls_105a6d8c_delete(auStack_24,2);
    uVar4 = 0;
  }
  return uVar4;
}
