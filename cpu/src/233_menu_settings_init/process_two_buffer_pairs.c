/* @k10d process_two_buffer_pairs @ 0x104c7e6c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Validates and processes two data buffer pairs, extracting fields and calling handlers
 *   based on status codes.
 * summary:
 *   The function initializes a local object and buffer, then calls
 *   compute_buffer_size_and_init to process the first pair (param_4). If successful, it
 *   sets a flag at param_1+0x219. If the first call fails, it extracts fields from param_4
 *   and param_5, calls register_two_pointers_with_flags and forward_event_with_payload with
 *   computed values, and processes the second pair (param_5) via
 *   compute_buffer_size_and_init. It cleans up local resources before returning the result
 *   of the final handler call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
process_two_buffer_pairs(int param_1,uint32_t *param_2,void *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint32_t uVar4;
  void **ppuVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint32_t uVar10;
  uint32_t *puVar11;
  uintptr_t sp;
  uint8_t *puVar12;
  uint8_t auStack_2c0 [4];
  uint32_t auStack_26c [2];
  cls_105b9458 cStack_264;
  uint32_t auStack_50 [2];
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  
  puVar12 = auStack_2c0;
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b9458_new(&cStack_264);
  alloc_two_word_pair_1045c3dc(auStack_50,0x3c0,0x280);
  iVar3 = compute_buffer_size_and_init(&cStack_264,auStack_50,2);
  if (iVar3 == 0) {
    if (cStack_264.field_0x10 == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
  }
  else {
    uStack_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_44 = *(uint32_t *)(param_4 + 0x20);
    uStack_40 = *(uint32_t *)(param_4 + 0x24);
    uStack_3c = *(uint32_t *)(param_4 + 0x28);
    uStack_48 = *(uint32_t *)(param_4 + 0x1c);
    puVar11 = (uint32_t *)(param_4 + 0x2c);
    uVar4 = return_first_word_1045c514(puVar11);
    uStack_34 = (short)uVar4;
    uVar4 = return_first_word_1045c514(puVar11);
    uStack_38 = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(puVar11);
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_1c = 0;
    uStack_1a = 0;
    uStack_18 = 0;
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_28 = cStack_264.field_0x20;
    uStack_24 = cStack_264.field_0x24;
    uStack_20 = cStack_264.field_0x28;
    uStack_2c = cStack_264.field_0x1c;
    ppuVar5 = &cStack_264.field_0x2c;
    uStack_36 = (short)uVar4;
    uVar4 = return_first_word_1045c514(ppuVar5);
    uStack_18 = (short)uVar4;
    uVar4 = return_first_word_1045c514(ppuVar5);
    uStack_1c = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(ppuVar5);
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_1a = (short)uVar4;
    iVar3 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_48,&uStack_2c);
    if (iVar3 != 0) {
      copy_transformed_pair(auStack_26c,param_3);
      uVar6 = return_first_word_1045c514(auStack_26c);
      free_heap_if_flagged_1045c402(auStack_26c,2);
      copy_transformed_pair(auStack_26c,param_3);
      uVar7 = read_struct_field_at_offset_4(auStack_26c);
      free_heap_if_flagged_1045c402(auStack_26c,2);
      iVar3 = return_first_word_1045c514(param_2);
      iVar8 = read_struct_field_at_offset_4(param_2);
      iVar9 = compute_buffer_size_and_init((void *)param_5,param_2,2);
      if (iVar9 != 0) {
        uStack_28 = *(uint32_t *)(param_5 + 0x20);
        uStack_24 = *(uint32_t *)(param_5 + 0x24);
        uStack_20 = *(uint32_t *)(param_5 + 0x28);
        uStack_2c = *(uint32_t *)(param_5 + 0x1c);
        puVar11 = (uint32_t *)(param_5 + 0x2c);
        uVar4 = return_first_word_1045c514(puVar11);
        uStack_18 = (short)uVar4;
        uVar4 = return_first_word_1045c514(puVar11);
        uStack_1c = (short)uVar4;
        uVar4 = read_struct_field_at_offset_4(puVar11);
        uStack_16 = 0;
        uStack_14 = 0;
        uVar10 = *(uint32_t *)(param_1 + 0x4c);
        iVar9 = param_6 * 3;
        bVar2 = (&DAT_105b94e1/*ROM*/)[iVar9];
        bVar1 = (&DAT_105b94e0/*ROM*/)[iVar9];
        uStack_1a = (short)uVar4;
        *(ushort *)(puVar12 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[iVar9];
        forward_event_with_payload(uVar10,&uStack_2c,(ushort)bVar1,(ushort)bVar2,*(uint16_t *)(puVar12 + 2));
        uStack_44 = cStack_264.field_0x20;
        uStack_40 = cStack_264.field_0x24;
        uStack_3c = cStack_264.field_0x28;
        uStack_48 = cStack_264.field_0x1c;
        uVar4 = return_first_word_1045c514(ppuVar5);
        uStack_34 = (short)uVar4;
        uVar4 = return_first_word_1045c514(ppuVar5);
        uStack_38 = (short)uVar4;
        uVar4 = read_struct_field_at_offset_4(ppuVar5);
        uStack_32 = 0;
        uStack_30 = 0;
        uStack_28 = *(uint32_t *)(param_5 + 0x20);
        uStack_24 = *(uint32_t *)(param_5 + 0x24);
        uStack_20 = *(uint32_t *)(param_5 + 0x28);
        uStack_2c = *(uint32_t *)(param_5 + 0x1c);
        uStack_36 = (short)uVar4;
        uVar4 = return_first_word_1045c514(puVar11);
        uStack_1c = (uint16_t)uVar6;
        uStack_1a = (uint16_t)uVar7;
        uStack_16 = (uint16_t)(iVar3 - (uVar6 & 0xffff) >> 1);
        uStack_14 = (uint16_t)(iVar8 - (uVar7 & 0xffff) >> 1);
        uStack_18 = (short)uVar4;
        uVar4 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_48,&uStack_2c);
        free_heap_if_flagged_1045c402(auStack_50,2);
        cls_105b9458_delete(&cStack_264,2);
        return uVar4;
      }
      if (*(int *)(param_5 + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
  }
  free_heap_if_flagged_1045c402(auStack_50,2);
  cls_105b9458_delete(&cStack_264,2);
  return 0;
}
