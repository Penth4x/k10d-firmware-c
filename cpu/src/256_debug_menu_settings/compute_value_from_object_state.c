/* @k10d compute_value_from_object_state @ 0x104effda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes a byte value from param_1 state, either via a temporary cls_105a6d8c object or
 *   a direct helper call.
 * summary:
 *   If param_2 is 0, it instantiates a cls_105a6d8c object, calls virtual slot 3 with 0x2a,
 *   and if successful, retrieves two values via virtual slot 2 (indices 0 and 0xb). It then
 *   calls get_or_init_heap_block, classify_state_by_two_checks, and get_setting_0xb2 on
 *   param_1, and finally calls lookup_two_byte_table_entry_1045a74a with these values to
 *   produce the result. If param_2 is non-zero, it calls classify_state_by_two_checks and
 *   then get_mode_dependent_setting_104efe82 with param_1 and the result of
 *   classify_state_by_two_checks. The function returns the computed byte value in uVar6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_value_from_object_state(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_40 [4];
  uint32_t auStack_24 [7];
  
  puVar7 = auStack_40;
  uVar6 = 0;
  if (param_2 == 0) {
    cls_105a6d8c_new(auStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
    iVar1 = check_field_bit_or_string(auStack_24,0x2a);
    if (iVar1 == 0) {
      iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0);
      uVar6 = extract_field_from_struct_1045ff0e((int)auStack_24,0xb);
      uVar2 = get_or_init_heap_block();
      iVar3 = classify_state_by_two_checks(param_1);
      iVar4 = get_setting_0xb2(param_1);
      puVar7[3] = (char)iVar1;
      uVar5 = lookup_two_byte_table_entry_1045a74a(uVar2,uVar6 & 0xff,iVar3,iVar4,puVar7[3]);
      uVar6 = uVar5 & 0xff;
    }
    cls_105a6d8c_delete(auStack_24,2);
  }
  else {
    iVar1 = classify_state_by_two_checks(param_1);
    uVar6 = get_mode_dependent_setting_104efe82(param_1,iVar1);
  }
  return uVar6;
}
