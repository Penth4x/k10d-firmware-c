/* @k10d process_two_point_event @ 0x104caa7a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event containing two coordinate points, validating them and dispatching to
 *   a handler or fallback routine.
 * summary:
 *   The function extracts two 16-bit coordinate pairs from param_2 and param_3 using helper
 *   functions. It validates these points via test_two_mmio_writes. If valid, it dispatches
 *   the event to param_4 via compute_buffer_size_and_init. If invalid, it constructs a
 *   local event structure and dispatches it via a function pointer at 0x104c6026,
 *   potentially falling back to register_two_pointers_with_flags. It sets a status flag at
 *   param_1+0x219 based on the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_point_event(int param_1,uint32_t *param_2,uint8_t *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int iVar9;
  int iVar10;
  uint32_t *puVar11;
  void **ppuVar12;
  uintptr_t sp;
  cls_105b9458 *pcStack_2d4;
  cls_105b9458 cStack_2ac;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
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
  
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b9458_new(&cStack_2ac);
  uVar1 = return_first_word_1045c514((uint32_t *)(param_3 + 0x2c));
  uVar2 = read_struct_field_at_offset_4(param_3 + 0x2c);
  uVar3 = return_first_word_1045c514(param_2);
  uVar4 = read_struct_field_at_offset_4(param_2);
  uVar5 = negate_signed_integer(uVar3 & 0xffff);
  uVar6 = negate_signed_integer(uVar1 & 0xffff);
  uVar7 = compare_version_fields(uVar5,uVar6);
  uVar5 = negate_signed_integer(uVar4 & 0xffff);
  uVar6 = negate_signed_integer(uVar2 & 0xffff);
  uVar8 = compare_version_fields(uVar5,uVar6);
  iVar9 = test_two_mmio_writes(param_1,uVar7);
  iVar10 = test_two_mmio_writes(param_1,uVar8);
  if ((iVar9 == 0) || (pcStack_2d4 = (cls_105b9458 *)param_3, iVar10 == 0)) {
    alloc_two_word_pair_1045c3dc(auStack_60,uVar1 & 0xffff,uVar2 & 0xffff);
    alloc_two_word_pair_1045c3dc(auStack_58,uVar3 & 0xffff,uVar4 & 0xffff);
    (*(code *)0x104c6026/*ROM*/)(auStack_50,param_1,auStack_60,auStack_58);
    iVar9 = compute_buffer_size_and_init(&cStack_2ac,auStack_50,2);
    if (iVar9 == 0) {
      if (cStack_2ac.field_0x10 == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    else {
      uStack_30 = 0;
      uStack_2e = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_3c = *(uint32_t *)(param_3 + 0x20);
      uStack_38 = *(uint32_t *)(param_3 + 0x24);
      uStack_34 = *(uint32_t *)(param_3 + 0x28);
      uStack_40 = *(uint32_t *)(param_3 + 0x1c);
      puVar11 = (uint32_t *)(param_3 + 0x2c);
      uVar7 = return_first_word_1045c514(puVar11);
      uStack_2c = (short)uVar7;
      uVar7 = return_first_word_1045c514(puVar11);
      uStack_30 = (short)uVar7;
      uVar7 = read_struct_field_at_offset_4(puVar11);
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_14 = 0;
      uStack_12 = 0;
      uStack_10 = 0;
      uStack_e = 0;
      uStack_c = 0;
      uStack_20 = cStack_2ac.field_0x20;
      uStack_1c = cStack_2ac.field_0x24;
      uStack_18 = cStack_2ac.field_0x28;
      uStack_24 = cStack_2ac.field_0x1c;
      ppuVar12 = &cStack_2ac.field_0x2c;
      uStack_2e = (short)uVar7;
      uVar7 = return_first_word_1045c514(ppuVar12);
      uStack_10 = (short)uVar7;
      uVar7 = return_first_word_1045c514(ppuVar12);
      uStack_14 = (short)uVar7;
      uVar7 = read_struct_field_at_offset_4(ppuVar12);
      uStack_e = 0;
      uStack_c = 0;
      uStack_12 = (short)uVar7;
      iVar9 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
      if (iVar9 != 0) {
        pcStack_2d4 = &cStack_2ac;
        free_heap_if_flagged_1045c402(auStack_50,2);
        free_heap_if_flagged_1045c402(auStack_58,2);
        free_heap_if_flagged_1045c402(auStack_60,2);
        goto code_r0x104cadf0;
      }
    }
    free_heap_if_flagged_1045c402(auStack_50,2);
    free_heap_if_flagged_1045c402(auStack_58,2);
    free_heap_if_flagged_1045c402(auStack_60,2);
  }
  else {
code_r0x104cadf0:
    iVar9 = compute_buffer_size_and_init(param_4,param_2,1);
    if (iVar9 != 0) {
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_80 = 0;
      uStack_94 = pcStack_2d4->field_0x20;
      uStack_90 = pcStack_2d4->field_0x24;
      uStack_8c = pcStack_2d4->field_0x28;
      uStack_98 = pcStack_2d4->field_0x1c;
      ppuVar12 = &pcStack_2d4->field_0x2c;
      uVar7 = return_first_word_1045c514(ppuVar12);
      uStack_84 = (short)uVar7;
      uVar7 = return_first_word_1045c514(ppuVar12);
      uStack_88 = (short)uVar7;
      uVar7 = read_struct_field_at_offset_4(ppuVar12);
      uStack_82 = 0;
      uStack_80 = 0;
      uStack_6c = 0;
      uStack_6a = 0;
      uStack_68 = 0;
      uStack_66 = 0;
      uStack_64 = 0;
      uStack_78 = *(uint32_t *)((int)param_4 + 0x20);
      uStack_74 = *(uint32_t *)((int)param_4 + 0x24);
      uStack_70 = *(uint32_t *)((int)param_4 + 0x28);
      uStack_7c = 1;
      puVar11 = (uint32_t *)((int)param_4 + 0x2c);
      uStack_86 = (short)uVar7;
      uVar7 = return_first_word_1045c514(puVar11);
      uStack_68 = (short)uVar7;
      uVar7 = return_first_word_1045c514(puVar11);
      uStack_6c = (short)uVar7;
      uVar7 = read_struct_field_at_offset_4(puVar11);
      uStack_66 = 0;
      uStack_64 = 0;
      uStack_6a = (short)uVar7;
      uVar7 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_98,&uStack_7c);
      cls_105b9458_delete(&cStack_2ac,2);
      return uVar7;
    }
    if (*(int *)((int)param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
  }
  cls_105b9458_delete(&cStack_2ac,2);
  return 0;
}
