/* @k10d process_buffered_data_entries_1036d692 @ 0x1036d692
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a count of data entries, processing each with a helper function and
 *   updating object state.
 * summary:
 *   The function checks a count from read_byte_at_offset_four_1051e508 and loops through
 *   that many entries. For each entry, it calls dispatch_event_with_payload_1036b92c with
 *   parameters derived from the entry index and object state. It updates fields at offsets
 *   0x24c, 0x250, and 0x252 in the object. It also calls virtual methods on an object
 *   pointer at offset 0x70 and invokes several other helpers like
 *   call_single_argument_helper_1036bd60 and invoke_virtual_method_on_subobject_1036dae4.
 *   The function returns 1 on success or 0 if the initial count is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1036d786) overlaps instruction at (ram,0x1036d784)
    */

uint32_t process_buffered_data_entries_1036d692(void *param_1)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  char cVar7;
  uint32_t uVar4;
  uint8_t uVar8;
  int iVar5;
  uint16_t uVar6;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uintptr_t sp;
  uint32_t *puVar14;
  uint8_t auStack_70 [20];
  int iStack_28;
  uint32_t uStack_1c;
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  puVar14 = (uint32_t *)auStack_70;
  iVar2 = (int)param_1 + 0x1c;
  cVar7 = read_byte_at_offset_four_1051e508(iVar2);
  if (cVar7 == '\0') {
    uVar4 = 0;
  }
  else {
    iStack_28 = 3;
    iVar11 = 0;
    do {
      (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].adj + iVar11 + -0x7ffea0e8);
      (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9ec0)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9ec0)))[2].adj + iVar11 + -0x7ffe9ed4);
      (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9cac)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9cac)))[2].adj + iVar11 + -0x7ffe9cc0);
      (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9a98)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffe9a98)))[2].adj + iVar11 + -0x7ffe9aac);
      iVar11 = iVar11 + 0x850;
      iStack_28 = iStack_28 + -1;
    } while (-1 < iStack_28);
    iVar11 = **(int **)((int)param_1 + 0x70);
    (((vtbl_entry*)(iVar11))[17].fn)
              ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar11))[17].adj);
    release_object_field_0x70(param_1);
    uVar8 = read_byte_at_offset_five_1051e50e(iVar2);
    cVar7 = read_byte_at_offset_four_1051e508(iVar2);
    if (cVar7 != '\0') {
      uVar13 = 0;
      do {
        if (*(char *)((int)param_1 + 0x14) != '\0') {
          set_byte_at_offset_five((int)param_1 + 0x1c,uVar8);
          return 1;
        }
        *(uint *)((int)param_1 + 0x24c) = uVar13;
        pvVar3 = (void *)((int)param_1 + 0x1c);
        set_byte_at_offset_five((int)pvVar3,(char)uVar13);
        dispatch_event_with_buffer_lock(param_1,2,pvVar3);
        iVar11 = **(int **)((int)param_1 + 0x70);
        (((vtbl_entry*)(iVar11))[18].fn)
                  (auStack_10,(int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar11))[18].adj);
        iVar11 = 8;
        do {
          iVar11 = iVar11 + -4;
          *(uint32_t *)(auStack_18 + iVar11) = *(uint32_t *)(auStack_10 + iVar11);
        } while (iVar11 != 0);
        iVar11 = uVar13 * 0x214;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0xffffffff;
        puVar14[3] = 3;
        *(uint8_t *)((int)puVar14 + 0x13) = DAT_800043a0/*SDRAM*/;
        iVar5 = dispatch_event_with_payload_1036b92c(param_1,1,auStack_18,iVar11 + -0x7ffea0e8,*puVar14,puVar14[1], puVar14[2],puVar14[3],*(uint8_t *)((int)puVar14 + 0x13));
        if (iVar5 == 1) {
code_r0x1036d8cc:
          dispatch_virtual_event_with_payload((int)param_1);
        }
        else {
          (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].adj + iVar11 + -0x7ffea0e8);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0xffffffff;
          puVar14[3] = 3;
          *(uint8_t *)((int)puVar14 + 0x13) = DAT_800043a0/*SDRAM*/;
          iVar5 = dispatch_event_with_payload_1036b92c(param_1,2,auStack_18,iVar11 + -0x7ffea0e8,*puVar14,puVar14[1], puVar14[2],puVar14[3],*(uint8_t *)((int)puVar14 + 0x13));
          if (iVar5 == 1) goto code_r0x1036d8cc;
          (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar11 + -0x7ffea0d4)))[2].adj + iVar11 + -0x7ffea0e8);
          iVar11 = **(int **)((int)param_1 + 0x70);
          (((vtbl_entry*)(iVar11))[20].fn)
                    ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar11))[20].adj, *(uint32_t *)((int)param_1 + 0x24c));
        }
        set_byte_at_offset_five((int)pvVar3,(char)uVar13);
        call_single_argument_helper_1036bd60((uint32_t)(param_1),(uint32_t)(pvVar3));
        uVar6 = read_table_entry_at_offset((int)pvVar3,uVar13);
        *(uint16_t *)((int)param_1 + 0x250) = uVar6;
        uVar6 = read_second_word_from_pointer_array((int)pvVar3,uVar13);
        *(uint16_t *)((int)param_1 + 0x252) = uVar6;
        invoke_virtual_method_on_subobject_1036dae4((int)param_1);
        request_ui_sync_code_4(*(void **)((int)param_1 + 0x70));
        free_heap_if_flagged_1045c402(auStack_18,2);
        uVar13 = uVar13 + 1 & 0xff;
        bVar9 = read_byte_at_offset_four_1051e508((int)pvVar3);
      } while (uVar13 < bVar9);
    }
    cVar7 = read_byte_at_offset_four_1051e508(iVar2);
    bVar9 = 0;
    if (cVar7 != '\0') {
      do {
        iVar2 = **(int **)((int)param_1 + 0x70);
        (((vtbl_entry*)(iVar2))[21].fn)
                  ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar2))[21].adj,bVar9);
        bVar9 = bVar9 + 1;
        bVar10 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
      } while (bVar9 < bVar10);
    }
    iVar11 = (int)param_1 + 0x1c;
    set_byte_at_offset_five(iVar11,uVar8);
    forward_two_args_to_helper_1036bd4a(param_1,iVar11);
    piVar12 = *(int **)((int)param_1 + 0x70);
    iVar2 = *piVar12;
    sVar1 = *(short *)(iVar2 + 0xb0);
    uStack_1c = read_offset_six_word_1051e514(iVar11);
    uVar4 = read_offset_8_word(iVar11);
    (((vtbl_entry*)(iVar2))[22].fn)((int)piVar12 + (int)sVar1,uStack_1c,uVar4);
    piVar12 = *(int **)((int)param_1 + 0x70);
    iVar2 = *piVar12;
    sVar1 = *(short *)(iVar2 + 0xb8);
    uVar8 = read_byte_at_offset_five_1051e50e(iVar11);
    (((vtbl_entry*)(iVar2))[23].fn)((int)piVar12 + (int)sVar1,uVar8);
    release_object_field_0x70(param_1);
    bVar9 = read_byte_at_offset_four_1051e508(iVar11);
    uVar13 = read_byte_at_offset_one_1051e4f6(iVar11);
    if (bVar9 != uVar13) {
      check_kernel_call_success_10459fea(0x64);
    }
    uVar4 = 1;
  }
  return uVar4;
}
