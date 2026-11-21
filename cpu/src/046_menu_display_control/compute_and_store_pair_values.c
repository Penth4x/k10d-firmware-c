/* @k10d compute_and_store_pair_values @ 0x103a72ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from source objects and stores them into a target struct via
 *   a helper.
 * summary:
 *   The function branches on param_2 to select between one or four source objects
 *   (param_1[0x1a] vs 0x1d-0x20). For each, it calls copy_virtual_result_to_buffer_10493ea4
 *   to prepare a local buffer, then read_struct_field_at_offset_4 and
 *   return_first_word_1045c514 to extract two short values. These are packed into a struct
 *   and passed to resample_histogram_to_bars_1052c3a4, which writes to memory addresses like 0x8001acbc.
 *   It also updates global pointers (DAT_8001a78c, etc.) and calls
 *   copy_four_words_and_call_helper to finalize. The pattern suggests updating status or
 *   configuration fields in a data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a79fc) overlaps instruction at (ram,0x103a79fa)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_store_pair_values(int *param_1,int param_2)

{
  struct {
    int iStack_18;
    uint uStack_14;
    int iStack_10;
    int iStack_c;
  } _cfg_18;
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint8_t *puVar6;
  uint32_t *puVar7;
  int iVar8;
  uintptr_t sp;
  int *piVar9;
  uint32_t *puVar10;
  uint8_t local_d4 [12];
  uint32_t uStack_60;
  uint8_t local_5c [4];
  uint32_t uStack_58;
  uint8_t local_54 [4];
  uint32_t auStack_50 [3];
  uint8_t local_44 [4];
  uint32_t uStack_40;
  uint8_t local_3c [4];
  uint32_t uStack_38;
  uint8_t local_34 [4];
  uint32_t uStack_30;
  uint8_t auStack_2c [8];
  uint32_t auStack_24 [2];
  uint8_t uStack_19;
  piVar9 = (int *)local_d4;
  puVar10 = (uint32_t *)local_d4;
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  if (param_2 == 0) {
    iVar1 = dispatch_event_with_payload_1050c0e0(param_1[0xe],0x8001acbc/*SDRAM*/,&_cfg_18.iStack_18);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1[0x1a] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1a] + (int)*(short *)(iVar1 + 8),0);
      (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
      return;
    }
    uVar5 = *(uint *)(_cfg_18.iStack_18 * 4 + -0x7ffe5344);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1a]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)(auStack_2c + iVar1 + -4) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(auStack_2c);
    copy_virtual_result_to_buffer_10493ea4(auStack_24,(int *)param_1[0x1a]);
    uVar3 = return_first_word_1045c514(auStack_24);
    *puVar10 = 0x8001a7ac/*SDRAM*/;
    *(short *)((int)puVar10 + 6) = (short)uVar2;
    *(short *)((int)puVar10 + 10) = (short)uVar3;
    resample_histogram_to_bars_1052c3a4(&uStack_19,(int *)0x8001acbc/*SDRAM*/,uVar5,0x4b000,(uint8_t *)*puVar10,
                 *(ushort *)((int)puVar10 + 6),*(ushort *)((int)puVar10 + 10));
    free_heap_if_flagged_1045c402(auStack_24,2);
    free_heap_if_flagged_1045c402(auStack_2c,2);
    puVar6 = &DAT_8001a78c/*SDRAM*/;
    _DAT_8001a78c/*SDRAM*/ = 0x8001a7ac/*SDRAM*/;
    copy_virtual_result_to_buffer_10493ea4(auStack_24,(int *)param_1[0x1a]);
    uVar2 = return_first_word_1045c514(auStack_24);
    _DAT_8001a792/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(auStack_24,2);
    copy_virtual_result_to_buffer_10493ea4(auStack_24,(int *)param_1[0x1a]);
    uVar2 = read_struct_field_at_offset_4(auStack_24);
    _DAT_8001a790/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(auStack_24,2);
    iVar1 = 0x68;
  }
  else {
    iVar1 = dispatch_event_with_payload_1050c0e0(param_1[0xe],0x8001acbc/*SDRAM*/,&_cfg_18.iStack_18);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1[0x1d] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1d] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x1e] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1e] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x1f] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1f] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x20] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x20] + (int)*(short *)(iVar1 + 8),0);
      (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
      return;
    }
    uVar5 = *(uint *)(_cfg_18.iStack_18 * 4 + -0x7ffe5344);
    copy_virtual_result_to_buffer_10493ea4(local_54,(int *)param_1[0x1d]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)(local_5c + iVar1 + -4) = *(uint32_t *)((int)&uStack_58 + iVar1);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(local_5c);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1d]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)auStack_50 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    puVar7 = auStack_50 + 1;
    uVar3 = return_first_word_1045c514(puVar7);
    *piVar9 = 0x8001a7ac/*SDRAM*/;
    *(short *)((int)piVar9 + 6) = (short)uVar2;
    *(short *)((int)piVar9 + 10) = (short)uVar3;
    resample_histogram_to_bars_1052c3a4(&uStack_19,(int *)0x8001acbc/*SDRAM*/,uVar5,0x4b000,(uint8_t *)*piVar9,
                 *(ushort *)((int)piVar9 + 6),*(ushort *)((int)piVar9 + 10));
    free_heap_if_flagged_1045c402(puVar7,2);
    free_heap_if_flagged_1045c402(local_5c,2);
    _DAT_8001a78c/*SDRAM*/ = 0x8001a7ac/*SDRAM*/;
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1d]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)auStack_50 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = return_first_word_1045c514(puVar7);
    _DAT_8001a792/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(puVar7,2);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1d]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)auStack_50 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(puVar7);
    _DAT_8001a790/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(puVar7,2);
    copy_four_words_and_call_helper((int *)param_1[0x1d],&DAT_8001a78c/*SDRAM*/);
    iVar1 = param_1[0xe];
    *piVar9 = (int)&_cfg_18.iStack_10;
    piVar9[1] = -0x7ffe4744;
    piVar9[2] = (int)&_cfg_18.iStack_c;
    uVar5 = configure_four_dma_channels(iVar1,0x8001b0bc/*SDRAM*/,&_cfg_18.uStack_14,0x8001b4bc/*SDRAM*/,(uint *)*piVar9,piVar9[1],
                         (uint *)piVar9[2]);
    if (uVar5 == 0) {
      iVar1 = *(int *)(param_1[0x1d] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1d] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x1e] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1e] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x1f] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x1f] + (int)*(short *)(iVar1 + 8),0);
      iVar1 = *(int *)(param_1[0x20] + 0xc);
      (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x20] + (int)*(short *)(iVar1 + 8),0);
      (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
      return;
    }
    uVar5 = *(uint *)(_cfg_18.uStack_14 * 4 + -0x7ffe4f44);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    uVar4 = *(uint *)(_cfg_18.iStack_10 * 4 + -0x7ffe4b44);
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = *(uint *)(_cfg_18.iStack_c * 4 + -0x7ffe4744);
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1e]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_40 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(local_3c);
    copy_virtual_result_to_buffer_10493ea4(local_54,(int *)param_1[0x1e]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)&uStack_58 + iVar1);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar3 = return_first_word_1045c514((uint32_t *)local_34);
    *piVar9 = 0x8001a974/*SDRAM*/;
    *(short *)((int)piVar9 + 6) = (short)uVar2;
    *(short *)((int)piVar9 + 10) = (short)uVar3;
    resample_histogram_to_bars_1052c3a4(&uStack_19,(int *)0x8001b0bc/*SDRAM*/,uVar5,0x4b000,(uint8_t *)*piVar9,
                 *(ushort *)((int)piVar9 + 6),*(ushort *)((int)piVar9 + 10));
    free_heap_if_flagged_1045c402(local_34,2);
    free_heap_if_flagged_1045c402(local_3c,2);
    _DAT_8001a794/*SDRAM*/ = 0x8001a974/*SDRAM*/;
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1e]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = return_first_word_1045c514((uint32_t *)local_34);
    _DAT_8001a79a/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1e]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(local_34);
    _DAT_8001a798/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    copy_four_words_and_call_helper((int *)param_1[0x1e],&DAT_8001a794/*SDRAM*/);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1f]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uStack_60 = read_struct_field_at_offset_4(local_34);
    copy_virtual_result_to_buffer_10493ea4(local_3c,(int *)param_1[0x1f]);
    uVar2 = return_first_word_1045c514((uint32_t *)local_3c);
    *piVar9 = 0x8001aa8c/*SDRAM*/;
    *(short *)((int)piVar9 + 6) = (short)uStack_60;
    *(short *)((int)piVar9 + 10) = (short)uVar2;
    resample_histogram_to_bars_1052c3a4(&uStack_19,(int *)0x8001b4bc/*SDRAM*/,uVar5,0x4b000,(uint8_t *)*piVar9,
                 *(ushort *)((int)piVar9 + 6),*(ushort *)((int)piVar9 + 10));
    free_heap_if_flagged_1045c402(local_3c,2);
    free_heap_if_flagged_1045c402(local_34,2);
    _DAT_8001a79c/*SDRAM*/ = 0x8001aa8c/*SDRAM*/;
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1f]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = return_first_word_1045c514((uint32_t *)local_34);
    _DAT_8001a7a2/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x1f]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(local_34);
    _DAT_8001a7a0/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    copy_four_words_and_call_helper((int *)param_1[0x1f],&DAT_8001a79c/*SDRAM*/);
    copy_virtual_result_to_buffer_10493ea4(local_44,(int *)param_1[0x20]);
    iVar1 = 8;
    do {
      iVar8 = iVar1 + -4;
      *(uint32_t *)((int)&uStack_38 + iVar1) = *(uint32_t *)((int)auStack_50 + iVar1 + 8);
      iVar1 = iVar8;
    } while (iVar8 != 0);
    uVar2 = read_struct_field_at_offset_4(local_34);
    copy_virtual_result_to_buffer_10493ea4(local_3c,(int *)param_1[0x20]);
    uVar3 = return_first_word_1045c514((uint32_t *)local_3c);
    *piVar9 = 0x8001aba4/*SDRAM*/;
    *(short *)((int)piVar9 + 6) = (short)uVar2;
    *(short *)((int)piVar9 + 10) = (short)uVar3;
    resample_histogram_to_bars_1052c3a4(&uStack_19,(int *)0x8001b8bc/*SDRAM*/,uVar5,0x4b000,(uint8_t *)*piVar9,
                 *(ushort *)((int)piVar9 + 6),*(ushort *)((int)piVar9 + 10));
    free_heap_if_flagged_1045c402(local_3c,2);
    free_heap_if_flagged_1045c402(local_34,2);
    puVar6 = &DAT_8001a7a4/*SDRAM*/;
    _DAT_8001a7a4/*SDRAM*/ = 0x8001aba4/*SDRAM*/;
    copy_virtual_result_to_buffer_10493ea4(local_34,(int *)param_1[0x20]);
    uVar2 = return_first_word_1045c514((uint32_t *)local_34);
    _DAT_8001a7aa/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    copy_virtual_result_to_buffer_10493ea4(local_34,(int *)param_1[0x20]);
    uVar2 = read_struct_field_at_offset_4(local_34);
    _DAT_8001a7a8/*SDRAM*/ = (short)uVar2;
    free_heap_if_flagged_1045c402(local_34,2);
    iVar1 = 0x80;
  }
  copy_four_words_and_call_helper(*(int **)(iVar1 + (int)param_1),puVar6);
  return;
}
