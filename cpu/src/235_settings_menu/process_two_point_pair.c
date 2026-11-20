/* @k10d process_two_point_pair @ 0x104c9f18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Processes two coordinate pairs from input structures, performing validation and state
 *   updates based on comparison results.
 * summary:
 *   The function extracts 16-bit coordinate pairs from param_2 and param_3 using helper
 *   functions. It compares these pairs via test_two_mmio_writes and branches into two main
 *   paths: one involving a calculation via compute_buffer_size_and_init and another
 *   involving a complex state update via build_and_send_command_packet_104ca462. It manages
 *   a temporary object (cls_105b9458) and updates fields in param_1 (offsets 0x214, 0x219)
 *   based on the outcome.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_point_pair(int param_1,uint8_t *param_2,uint32_t *param_3,int param_4,int param_5)

{
  uint32_t *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int iVar10;
  int iVar11;
  void **ppuVar12;
  uintptr_t sp;
  cls_105b9458 *pcStack_294;
  cls_105b9458 cStack_274;
  uint32_t auStack_60 [2];
  uint32_t auStack_58 [2];
  uint32_t auStack_50 [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  
  cls_105b9458_new(&cStack_274);
  puVar1 = (uint32_t *)(param_2 + 0x2c);
  uVar2 = return_first_word_1045c514(puVar1);
  uVar3 = read_struct_field_at_offset_4(puVar1);
  uVar4 = return_first_word_1045c514(param_3);
  uVar5 = read_struct_field_at_offset_4(param_3);
  uVar6 = negate_signed_integer(uVar4 & 0xffff);
  uVar7 = negate_signed_integer(uVar2 & 0xffff);
  uVar8 = compare_version_fields(uVar6,uVar7);
  uVar6 = negate_signed_integer(uVar5 & 0xffff);
  uVar7 = negate_signed_integer(uVar3 & 0xffff);
  uVar9 = compare_version_fields(uVar6,uVar7);
  iVar10 = test_two_mmio_writes(param_1,uVar8);
  iVar11 = test_two_mmio_writes(param_1,uVar9);
  if ((iVar10 == 0) || (pcStack_294 = (cls_105b9458 *)param_2, iVar11 == 0)) {
    alloc_two_word_pair_1045c3dc(auStack_60,uVar2 & 0xffff,uVar3 & 0xffff);
    alloc_two_word_pair_1045c3dc(auStack_58,uVar4 & 0xffff,uVar5 & 0xffff);
    (*(code *)0x104c6026/*ROM*/)(auStack_50,param_1,auStack_60,auStack_58);
    iVar10 = compute_buffer_size_and_init(&cStack_274,auStack_50,param_5);
    if (iVar10 == 0) {
      if (cStack_274.field_0x10 == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    else {
      uStack_30 = 0;
      uStack_2e = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_3c = *(uint32_t *)(param_2 + 0x20);
      uStack_38 = *(uint32_t *)(param_2 + 0x24);
      uStack_34 = *(uint32_t *)(param_2 + 0x28);
      uStack_40 = *(uint32_t *)(param_2 + 0x1c);
      uVar8 = return_first_word_1045c514(puVar1);
      uStack_2c = (short)uVar8;
      uVar8 = return_first_word_1045c514(puVar1);
      uStack_30 = (short)uVar8;
      uVar8 = read_struct_field_at_offset_4(puVar1);
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_14 = 0;
      uStack_12 = 0;
      uStack_10 = 0;
      uStack_e = 0;
      uStack_c = 0;
      uStack_20 = cStack_274.field_0x20;
      uStack_1c = cStack_274.field_0x24;
      uStack_18 = cStack_274.field_0x28;
      uStack_24 = cStack_274.field_0x1c;
      ppuVar12 = &cStack_274.field_0x2c;
      uStack_2e = (short)uVar8;
      uVar8 = return_first_word_1045c514(ppuVar12);
      uStack_10 = (short)uVar8;
      uVar8 = return_first_word_1045c514(ppuVar12);
      uStack_14 = (short)uVar8;
      uVar8 = read_struct_field_at_offset_4(ppuVar12);
      uStack_e = 0;
      uStack_c = 0;
      uStack_12 = (short)uVar8;
      iVar10 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
      if (iVar10 != 0) {
        pcStack_294 = &cStack_274;
        free_heap_if_flagged_1045c402(auStack_50,2);
        free_heap_if_flagged_1045c402(auStack_58,2);
        free_heap_if_flagged_1045c402(auStack_60,2);
        goto code_r0x104ca2ce;
      }
      *(uint32_t *)(param_1 + 0x214) = 0;
    }
    free_heap_if_flagged_1045c402(auStack_50,2);
    free_heap_if_flagged_1045c402(auStack_58,2);
    free_heap_if_flagged_1045c402(auStack_60,2);
  }
  else {
code_r0x104ca2ce:
    iVar10 = compute_buffer_size_and_init((void *)param_4,param_3,param_5);
    if (iVar10 == 0) {
      uVar8 = 3;
      if (*(int *)(param_4 + 0x10) != 2) {
        uVar8 = 0;
      }
      *(uint32_t *)(param_1 + 0x214) = uVar8;
    }
    else {
      build_pair_comparison_record(param_1,param_2,param_4);
      iVar10 = build_and_send_command_packet_104ca462(param_1,(int)pcStack_294,param_4,1);
      if (iVar10 != 0) {
        cls_105b9458_delete(&cStack_274,2);
        return 1;
      }
      *(uint32_t *)(param_1 + 0x214) = 0;
    }
  }
  cls_105b9458_delete(&cStack_274,2);
  return 0;
}
