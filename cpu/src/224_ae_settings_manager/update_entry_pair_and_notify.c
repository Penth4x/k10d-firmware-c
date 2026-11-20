/* @k10d update_entry_pair_and_notify @ 0x104bd1ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bd234) overlaps instruction at (ram,0x104bd232)
    */

int update_entry_pair_and_notify(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  process_three_string_slots_per_entry(param_1);
  if (*(int *)(param_1 + 0x8d0) == -1) {
    store_clamped_index_at_offset_0x8d0(param_1,0xffffffff);
  }
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  if (param_2 == 0) {
    iVar3 = param_1 + 0x15e4;
    psVar7 = (short *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar3);
    if ((*psVar7 == 0) && (psVar7[1] == 0)) {
      pvVar4 = (void *)(param_1 + 0x8d4);
      iVar5 = poll_until_flag_set(param_1,0,pvVar4,param_3);
      if (iVar5 == 0) {
        return 0;
      }
      copy_three_bytes_to_list_entries(param_1,pvVar4);
      process_three_item_groups(param_1,pvVar4);
      deep_copy_struct_with_subblocks((uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118),(uint16_t *)(pvVar4));
      iVar6 = *(int *)(param_1 + 0x8d0) * 0xb34;
      psVar7 = (short *)(param_1 + 0x2118 + iVar6);
      iVar3 = iVar3 + iVar6;
    }
    else {
      pvVar4 = (void *)(param_1 + 0x8d4);
      iVar5 = poll_until_flag_set(param_1,0,pvVar4,param_3);
      if (iVar5 == 0) {
        return 0;
      }
      copy_three_bytes_to_list_entries(param_1,pvVar4);
      process_three_item_groups(param_1,pvVar4);
      iVar6 = compare_two_short_arrays((int)(param_1),(short *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar3),(short *)(pvVar4));
      if (iVar6 != 0) {
        iVar3 = compare_two_short_arrays((int)(param_1),(short *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34),(short *)(pvVar4));
        if (iVar3 == 0) {
          process_three_string_slots_per_entry(param_1);
        }
        return 1;
      }
      deep_copy_struct_with_subblocks((uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118),(uint16_t *)(pvVar4));
      iVar6 = *(int *)(param_1 + 0x8d0) * 0xb34;
      psVar7 = (short *)(param_1 + 0x2118 + iVar6);
      iVar3 = iVar3 + iVar6;
    }
  }
  else {
    psVar7 = (short *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
    sVar1 = *psVar7;
    sVar2 = psVar7[1];
    write_two_words_to_struct_104c1ff4(param_1,sVar1,sVar2);
    psVar7 = (short *)(param_1 + 0x8d4);
    iVar5 = poll_until_flag_set(param_1,param_2,psVar7,param_3);
    if (iVar5 == 0) {
      return 0;
    }
    if ((sVar1 == *psVar7) && (sVar2 == *(short *)(param_1 + 0x8d6))) {
      return 0;
    }
    copy_three_bytes_to_list_entries(param_1,psVar7);
    process_three_item_groups(param_1,psVar7);
    iVar3 = *(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118;
  }
  deep_copy_struct_with_subblocks((uint16_t *)(iVar3),(uint16_t *)(psVar7));
  return iVar5;
}
