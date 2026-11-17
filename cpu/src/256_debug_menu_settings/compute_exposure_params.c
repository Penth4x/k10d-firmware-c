/* @k10d compute_exposure_params @ 0x104eff00
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Derives exposure-related values from object state and calls a helper to process them.
 * summary:
 *   The function initializes a temporary object (cls_105a6d8c) and queries it via virtual
 *   method slot 2. Depending on param_2, it either re-queries the same object or
 *   initializes a second object (cls_105a6abc) and queries its slot 2. It then gathers four
 *   additional values from param_1 and a global state function, passes them to
 *   lookup_two_byte_table_entry_1045a6c0, and finally calls map_iso_to_index with the
 *   result. The pattern of querying multiple state objects and combining them suggests a
 *   calculation or state update routine, likely related to exposure or metering given the
 *   camera context, but the specific subsystem is not definitively proven by the callees
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_exposure_params(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uint16_t uVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_54 [4];
  uint32_t auStack_38 [7];
  uint8_t auStack_1c [20];
  
  puVar7 = auStack_54;
  cls_105a6d8c_new(auStack_38);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_38);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_38,0);
  if (param_2 == 0) {
    uVar2 = extract_field_from_struct_1045ff0e((int)auStack_38,0x30);
  }
  else {
    cls_105a6abc_new((void *)auStack_1c);
    copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),auStack_1c);
    uVar2 = extract_bitfield_from_byte_array(auStack_1c,2);
    cls_105a6abc_delete((void *)auStack_1c,2);
  }
  uVar3 = get_or_init_heap_block();
  iVar4 = classify_state_by_two_checks(param_1);
  iVar5 = get_setting_0xb2(param_1);
  puVar7[3] = (char)iVar1;
  uVar6 = lookup_two_byte_table_entry_1045a6c0(uVar3,uVar2 & 0xff,iVar4,iVar5,puVar7[3]);
  uVar3 = map_iso_to_index(param_1,uVar6);
  cls_105a6d8c_delete(auStack_38,2);
  return uVar3;
}
