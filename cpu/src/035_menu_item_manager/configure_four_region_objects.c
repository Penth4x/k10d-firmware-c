/* @k10d configure_four_region_objects @ 0x103830de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes four local region objects and, when enabled, computes and writes their
 *   offsets and sizes from two source parameters.
 * summary:
 *   The function retrieves three object handles via menu_item_register and invokes a
 *   virtual method on each. It initializes four local structures (apuStack_3c) using
 *   alloc_two_word_pair_1045c3dc and alloc_two_word_pair_1045bc2e. If param_2 is non-zero,
 *   it calculates region offsets and sizes from param_3 and param_5 using helper functions
 *   (compute_log2_index, compare_version_fields, etc.) and writes these values into the
 *   structures via store_word_to_pointer_1045bd48, write_field_at_offset_four_1045bd50,
 *   store_value_to_pointer_1045c510, and write_field_at_offset_four_1045c518. It then
 *   triggers virtual calls on the three handles and cleans up the local objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_four_region_objects(int param_1,int param_2,uint32_t *param_3,uint32_t *param_4,
                 uint32_t *param_5)

{
  short sVar1;
  uint32_t **ppuVar2;
  uint32_t **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t **ppuVar7;
  uint32_t **ppuVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint32_t uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uintptr_t sp;
  byte bVar16;
  byte bVar17;
  uint uStack_70;
  uint uStack_68;
  uint uStack_4c;
  uint uStack_40;
  uint32_t *apuStack_3c [9];
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  apuStack_3c[0] = param_4;
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  ppuVar7 = apuStack_3c + 1;
  alloc_two_word_pair_1045c3dc((uint32_t *)ppuVar7,0,0);
  ppuVar2 = apuStack_3c + 3;
  alloc_two_word_pair_1045c3dc((uint32_t *)ppuVar2,0,0);
  ppuVar8 = apuStack_3c + 5;
  alloc_two_word_pair_1045bc2e((uint32_t *)ppuVar8,0,0);
  ppuVar3 = apuStack_3c + 7;
  alloc_two_word_pair_1045bc2e((uint32_t *)ppuVar3,0,0);
  bVar16 = 0;
  bVar17 = param_2 == 0;
  if (!(bool)bVar17) {
    uVar9 = return_first_word_1045c514(param_3);
    iVar10 = compute_log2_index(uVar9);
    uVar9 = read_struct_field_at_offset_4(param_3);
    iVar11 = compute_log2_index(uVar9);
    uVar12 = compare_version_fields(iVar10,iVar11);
    pack_lens_fw_update_word(uVar12,0x3f800000);
    if ((bVar16 | bVar17) == 1) {
      uVar9 = read_struct_field_at_offset_4(param_3);
      iVar10 = compute_log2_index(uVar9);
      uVar12 = compute_float_division(iVar10,0x3c088889);
      uVar9 = return_first_word_1045c514(param_3);
      iVar10 = compute_log2_index(uVar9);
      uVar9 = compare_version_fields(iVar10,uVar12);
      iVar10 = count_leading_zeros(uVar9);
      uStack_4c = iVar10 + 1U & 0xfffffffe;
      uStack_68 = 0x78;
      uStack_70 = 0x150;
    }
    else {
      uVar9 = return_first_word_1045c514(param_3);
      iVar10 = compute_log2_index(uVar9);
      uVar12 = compute_float_division(iVar10,0x3c088889);
      uStack_4c = 0x78;
      uVar9 = read_struct_field_at_offset_4(param_3);
      iVar10 = compute_log2_index(uVar9);
      uVar9 = compare_version_fields(iVar10,uVar12);
      iVar10 = count_leading_zeros(uVar9);
      uStack_68 = iVar10 + 1U & 0xfffffffe;
      uStack_70 = 0x1c8 - uStack_68;
    }
    uVar9 = read_first_word_1045bd4c(apuStack_3c[0]);
    uVar9 = negate_signed_integer(uVar9);
    uVar9 = compare_version_fields(uVar9,uVar12);
    iVar10 = count_leading_zeros(uVar9);
    uVar9 = get_second_word_of_struct(apuStack_3c[0]);
    uVar9 = negate_signed_integer(uVar9);
    uVar9 = compare_version_fields(uVar9,uVar12);
    iVar11 = count_leading_zeros(uVar9);
    uVar14 = iVar10 + 0x21U & 0xfffffffe;
    uVar13 = iVar11 + uStack_70 + 1 & 0xfffffffe;
    uVar9 = return_first_word_1045c514(param_5);
    iVar10 = compute_log2_index(uVar9);
    uVar9 = compare_version_fields(iVar10,uVar12);
    iVar10 = count_leading_zeros(uVar9);
    uVar9 = read_struct_field_at_offset_4(param_5);
    iVar11 = compute_log2_index(uVar9);
    uVar9 = compare_version_fields(iVar11,uVar12);
    iVar11 = count_leading_zeros(uVar9);
    uStack_40 = iVar10 + 1U & 0xfffffffe;
    uVar9 = iVar11 + 1U & 0xfffffffe;
    if ((uStack_4c + 0x20 < uVar14 + uStack_40) &&
       (uVar14 = ((uStack_4c + 0x20) - (uVar14 + uStack_40)) + uVar14, uVar14 < 0x20)) {
      uStack_40 = uStack_4c;
    }
    if ((uStack_70 + uStack_68 < uVar13 + uVar9) &&
       (uVar13 = ((uStack_70 + uStack_68) - (uVar13 + uVar9)) + uVar13, uVar13 < uStack_70)) {
      uVar9 = uStack_68;
    }
    store_word_to_pointer_1045bd48((uint32_t *)ppuVar8,0x20);
    write_field_at_offset_four_1045bd50(ppuVar8,uStack_70);
    store_value_to_pointer_1045c510((uint32_t *)ppuVar7,uStack_4c);
    write_field_at_offset_four_1045c518(ppuVar7,uStack_68);
    store_word_to_pointer_1045bd48((uint32_t *)ppuVar3,uVar14);
    write_field_at_offset_four_1045bd50(ppuVar3,uVar13);
    store_value_to_pointer_1045c510((uint32_t *)ppuVar2,uStack_40);
    write_field_at_offset_four_1045c518(ppuVar2,uVar9);
    call_helper_and_set_flag_104cf6c8((void *)iVar4,2);
    iVar11 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar11 + 0x10);
    iVar10 = 8;
    do {
      iVar15 = iVar10 + -4;
      *(uint32_t *)((int)apuStack_3c + iVar10 + 0x20) =
           *(uint32_t *)((int)apuStack_3c + iVar10 + 0x10);
      iVar10 = iVar15;
    } while (iVar15 != 0);
    (**(code **)(iVar11 + 0x14))(sVar1 + iVar4,auStack_18);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    iVar10 = 8;
    do {
      iVar11 = iVar10 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar10) = *(uint32_t *)((int)apuStack_3c + iVar10);
      iVar10 = iVar11;
    } while (iVar11 != 0);
    dispatch_two_word_event((void *)iVar4,(void *)auStack_10);
    free_heap_if_flagged_1045c402(auStack_10,2);
    iVar11 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar11 + 0x10);
    iVar10 = 8;
    do {
      iVar15 = iVar10 + -4;
      *(uint32_t *)((int)apuStack_3c + iVar10 + 0x20) =
           *(uint32_t *)((int)apuStack_3c + iVar10 + 0x10);
      iVar10 = iVar15;
    } while (iVar15 != 0);
    (**(code **)(iVar11 + 0x14))(sVar1 + iVar5,auStack_18);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    iVar10 = 8;
    do {
      iVar11 = iVar10 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar10) = *(uint32_t *)((int)apuStack_3c + iVar10);
      iVar10 = iVar11;
    } while (iVar11 != 0);
    dispatch_two_word_event((void *)iVar5,(void *)auStack_10);
    free_heap_if_flagged_1045c402(auStack_10,2);
    call_helper_and_set_flag_104cf6c8((void *)iVar6,4);
    iVar11 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar11 + 0x10);
    iVar10 = 8;
    do {
      iVar15 = iVar10 + -4;
      *(uint32_t *)((int)apuStack_3c + iVar10 + 0x20) =
           *(uint32_t *)((int)apuStack_3c + iVar10 + 0x18);
      iVar10 = iVar15;
    } while (iVar15 != 0);
    (**(code **)(iVar11 + 0x14))(sVar1 + iVar6,auStack_18);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    iVar10 = 8;
    do {
      iVar11 = iVar10 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar10) = *(uint32_t *)((int)apuStack_3c + iVar10 + 8);
      iVar10 = iVar11;
    } while (iVar11 != 0);
    dispatch_two_word_event((void *)iVar6,(void *)auStack_10);
    free_heap_if_flagged_1045c402(auStack_10,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  }
  free_heap_block_if_flagged_1045bc54(ppuVar3,2);
  free_heap_block_if_flagged_1045bc54(ppuVar8,2);
  free_heap_if_flagged_1045c402(ppuVar2,2);
  free_heap_if_flagged_1045c402(ppuVar7,2);
  return;
}
