/* @k10d configure_three_object_regions @ 0x103a843a
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Computes geometry for three local region descriptors and writes them to three objects
 *   via virtual calls.
 * summary:
 *   The function builds three local descriptor structures using helpers
 *   (alloc_two_word_pair_1045c3dc, alloc_two_word_pair_1045bc2e) and computes their
 *   positions/sizes from fields at param_1+0x110..0x11a and fixed constants. It then writes
 *   each descriptor to the objects at param_1+0xb0, +0xb4, and +0xb8 via virtual calls,
 *   toggles their state (0 then 1), and releases the local descriptors. No display-specific
 *   evidence is present in the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_three_object_regions(void *param_1)

{
  short sVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int iVar4;
  uint32_t *puVar5;
  uint uVar6;
  uint32_t uVar7;
  int iVar8;
  uint32_t uVar9;
  uint uVar10;
  int iVar11;
  uint32_t *puVar12;
  int iVar13;
  uintptr_t sp;
  int iStack_3c;
  uint8_t local_38 [4];
  uint32_t uStack_34;
  uint8_t local_30 [4];
  uint32_t auStack_2c [9];
  
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb4) + (int)*(short *)(iVar11 + 8),0);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb0) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb0) + (int)*(short *)(iVar11 + 8),0);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb8) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb8) + (int)*(short *)(iVar11 + 8),0);
  puVar5 = auStack_2c + 1;
  alloc_two_word_pair_1045c3dc(puVar5,0,0);
  puVar12 = auStack_2c + 3;
  alloc_two_word_pair_1045c3dc(puVar12,(int)((uint)*(ushort *)((int)param_1 + 0x114) * 0x280) >> 8,
               (int)((uint)*(ushort *)((int)param_1 + 0x114) * 0x1e0) >> 8);
  puVar2 = auStack_2c + 5;
  alloc_two_word_pair_1045bc2e(puVar2,0,0);
  puVar3 = auStack_2c + 7;
  alloc_two_word_pair_1045bc2e(puVar3,0,0);
  uVar6 = negate_signed_integer((uint)*(ushort *)((int)param_1 + 0x118));
  uVar7 = compute_float_division(uVar6,0x3c088889);
  uVar6 = negate_signed_integer((uint)*(ushort *)((int)param_1 + 0x11a));
  uVar6 = compare_version_fields(uVar6,uVar7);
  iVar11 = count_leading_zeros(uVar6);
  uVar6 = iVar11 + 1U & 0xfffffffe;
  store_word_to_pointer_1045bd48(puVar2,0x20);
  write_field_at_offset_four_1045bd50(puVar2,0x1c8 - uVar6);
  store_value_to_pointer_1045c510(puVar5,0x78);
  write_field_at_offset_four_1045c518(puVar5,uVar6);
  call_helper_and_set_flag_104cf6c8((int *)(*(uint32_t *)((int)param_1 + 0xb4)),(uint16_t)(2));
  iVar8 = *(int *)((int)param_1 + 0xb4);
  iVar4 = *(int *)(iVar8 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar11 = 8;
  do {
    iVar13 = iVar11 + -4;
    *(uint32_t *)(local_38 + iVar11 + -4) = *(uint32_t *)((int)auStack_2c + iVar11 + 0x10);
    iVar11 = iVar13;
  } while (iVar13 != 0);
  (((vtbl_entry*)(iVar4))[2].fn)(iVar8 + sVar1,local_38);
  free_heap_block_if_flagged_1045bc54(local_38,2);
  uVar9 = *(uint32_t *)((int)param_1 + 0xb4);
  iVar11 = 8;
  do {
    iVar4 = iVar11 + -4;
    *(uint32_t *)((int)&uStack_34 + iVar11) = *(uint32_t *)((int)auStack_2c + iVar11);
    iVar11 = iVar4;
  } while (iVar4 != 0);
  dispatch_two_word_event((uint32_t *)(uVar9),(uint32_t *)(local_30));
  free_heap_if_flagged_1045c402(local_30,2);
  iVar8 = *(int *)((int)param_1 + 0xb0);
  iVar4 = *(int *)(iVar8 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar11 = 8;
  do {
    iVar13 = iVar11 + -4;
    *(uint32_t *)(local_38 + iVar11 + -4) = *(uint32_t *)((int)auStack_2c + iVar11 + 0x10);
    iVar11 = iVar13;
  } while (iVar13 != 0);
  (((vtbl_entry*)(iVar4))[2].fn)(iVar8 + sVar1,local_38);
  free_heap_block_if_flagged_1045bc54(local_38,2);
  uVar9 = *(uint32_t *)((int)param_1 + 0xb0);
  iVar11 = 8;
  do {
    iVar4 = iVar11 + -4;
    *(uint32_t *)((int)&uStack_34 + iVar11) = *(uint32_t *)((int)auStack_2c + iVar11);
    iVar11 = iVar4;
  } while (iVar4 != 0);
  dispatch_two_word_event((uint32_t *)(uVar9),(uint32_t *)(local_30));
  free_heap_if_flagged_1045c402(local_30,2);
  uVar6 = return_first_word_1045c514(puVar12);
  iVar11 = compute_log2_index(uVar6);
  uVar6 = compare_version_fields(iVar11,uVar7);
  uVar6 = count_leading_zeros(uVar6);
  uVar10 = read_struct_field_at_offset_4(puVar12);
  iVar11 = compute_log2_index(uVar10);
  uVar10 = compare_version_fields(iVar11,uVar7);
  iVar11 = count_leading_zeros(uVar10);
  store_value_to_pointer_1045c510(puVar12,uVar6);
  write_field_at_offset_four_1045c518(puVar12,iVar11 + 1U & 0xfffffffe);
  uVar10 = negate_signed_integer((uint)*(ushort *)((int)param_1 + 0x110));
  uVar10 = compare_version_fields(uVar10,uVar7);
  iVar4 = count_leading_zeros(uVar10);
  iVar8 = read_first_word_1045bd4c(puVar2);
  uVar10 = negate_signed_integer((uint)*(ushort *)((int)param_1 + 0x112));
  uVar10 = compare_version_fields(uVar10,uVar7);
  iStack_3c = count_leading_zeros(uVar10);
  iVar13 = get_second_word_of_struct(puVar2);
  uVar10 = iVar13 + 1 + iStack_3c;
  store_word_to_pointer_1045bd48(puVar3,(iVar4 + iVar8) - (uVar6 >> 1));
  write_field_at_offset_four_1045bd50(puVar3,(uVar10 & 0xfffffffe) - (iVar11 + 1U >> 1));
  call_helper_and_set_flag_104cf6c8((int *)(*(uint32_t *)((int)param_1 + 0xb8)),(uint16_t)(4));
  iVar8 = *(int *)((int)param_1 + 0xb8);
  iVar4 = *(int *)(iVar8 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar11 = 8;
  do {
    iVar13 = iVar11 + -4;
    *(uint32_t *)(local_38 + iVar11 + -4) = *(uint32_t *)((int)auStack_2c + iVar11 + 0x18);
    iVar11 = iVar13;
  } while (iVar13 != 0);
  (((vtbl_entry*)(iVar4))[2].fn)(iVar8 + sVar1,local_38);
  free_heap_block_if_flagged_1045bc54(local_38,2);
  uVar7 = *(uint32_t *)((int)param_1 + 0xb8);
  iVar11 = 8;
  do {
    iVar4 = iVar11 + -4;
    *(uint32_t *)((int)&uStack_34 + iVar11) = *(uint32_t *)((int)auStack_2c + iVar11 + 8);
    iVar11 = iVar4;
  } while (iVar4 != 0);
  dispatch_two_word_event((uint32_t *)(uVar7),(uint32_t *)(local_30));
  free_heap_if_flagged_1045c402(local_30,2);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb4) + (int)*(short *)(iVar11 + 8),1);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb0) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb0) + (int)*(short *)(iVar11 + 8),1);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xb8) + 0xc);
  (((vtbl_entry*)(iVar11))[1].fn)(*(int *)((int)param_1 + 0xb8) + (int)*(short *)(iVar11 + 8),1);
  free_heap_block_if_flagged_1045bc54(puVar3,2);
  free_heap_block_if_flagged_1045bc54(puVar2,2);
  free_heap_if_flagged_1045c402(puVar12,2);
  free_heap_if_flagged_1045c402(puVar5,2);
  return;
}
