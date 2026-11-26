/* @k10d process_sensor_readout_buffer_1036457e @ 0x1036457e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a buffer of sensor data entries, dispatching virtual calls and
 *   processing each item with retry logic.
 * summary:
 *   The function checks the count of items in a buffer (via
 *   read_byte_at_offset_four_1051e508) and loops through them. For each item, it performs
 *   virtual dispatches on four global objects, reads data via
 *   read_table_entry_at_offset/542, and calls dispatch_event_with_payload_1036b92c with
 *   retry logic (up to 2 attempts). It updates state in param_1 (offsets 0x214-0x21a) and
 *   calls dispatch_event_to_handler_103653a0. Finally, it performs cleanup virtual calls
 *   and verifies the buffer count.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10364672) overlaps instruction at (ram,0x10364670)
    */

uint32_t process_sensor_readout_buffer_1036457e(void *param_1)

{
  short sVar1;
  int iVar2;
  char cVar8;
  uint32_t uVar3;
  byte bVar9;
  ushort uVar5;
  ushort uVar6;
  uint16_t uVar7;
  byte bVar10;
  uint32_t uVar4;
  uint8_t uVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uintptr_t sp;
  uint32_t *puVar17;
  uint8_t auStack_70 [20];
  int iStack_28;
  uint uStack_1c;
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  puVar17 = (uint32_t *)auStack_70;
  iVar2 = (int)param_1 + 0x1c;
  cVar8 = read_byte_at_offset_four_1051e508(iVar2);
  if (cVar8 == '\0') {
    uVar3 = 0;
  }
  else {
    iStack_28 = 3;
    iVar14 = 0;
    do {
      (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].adj + iVar14 + -0x7ffea0e8);
      (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9ec0)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9ec0)))[2].adj + iVar14 + -0x7ffe9ed4);
      (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9cac)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9cac)))[2].adj + iVar14 + -0x7ffe9cc0);
      (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9a98)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffe9a98)))[2].adj + iVar14 + -0x7ffe9aac);
      iVar14 = iVar14 + 0x850;
      iStack_28 = iStack_28 + -1;
    } while (-1 < iStack_28);
    iVar14 = **(int **)((int)param_1 + 0x70);
    (((vtbl_entry*)(iVar14))[17].fn)
              ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar14))[17].adj);
    release_object_at_offset_0x70(param_1);
    bVar9 = read_byte_at_offset_five_1051e50e(iVar2);
    uStack_1c = (uint)bVar9;
    cVar8 = read_byte_at_offset_four_1051e508(iVar2);
    if (cVar8 != '\0') {
      uVar15 = 0;
      do {
        if (*(char *)((int)param_1 + 0x14) != '\0') {
          pvVar12 = (void *)((int)param_1 + 0x1c);
          uVar5 = read_table_entry_at_offset((int)pvVar12,uStack_1c);
          uVar6 = read_second_word_from_pointer_array((int)pvVar12,uStack_1c);
          dispatch_three_params_and_return_offset(param_1,(uint)uVar5,(uint)uVar6);
          dispatch_event_with_buffer_lock(param_1,1,pvVar12);
          iVar14 = 3;
          iVar2 = 0;
          do {
            (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffea0d4)))[2].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffea0d4)))[2].adj + iVar2 + -0x7ffea0e8);
            (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9ec0)))[2].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9ec0)))[2].adj + iVar2 + -0x7ffe9ed4);
            (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9cac)))[2].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9cac)))[2].adj + iVar2 + -0x7ffe9cc0);
            (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9a98)))[2].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9a98)))[2].adj + iVar2 + -0x7ffe9aac);
            iVar2 = iVar2 + 0x850;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          return 1;
        }
        pvVar12 = (void *)((int)param_1 + 0x1c);
        *(uint *)((int)param_1 + 0x214) = uVar15;
        set_byte_at_offset_five((int)pvVar12,(char)uVar15);
        dispatch_event_with_buffer_lock(param_1,2,pvVar12);
        iVar14 = **(int **)((int)param_1 + 0x70);
        (((vtbl_entry*)(iVar14))[18].fn)
                  (auStack_10,(int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar14))[18].adj);
        iVar14 = 8;
        do {
          iVar16 = iVar14 + -4;
          *(uint32_t *)(auStack_18 + iVar14 + -4) = *(uint32_t *)((int)&uStack_14 + iVar14);
          iVar14 = iVar16;
        } while (iVar16 != 0);
        iVar14 = uVar15 * 0x214;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0xffffffff;
        puVar17[3] = 3;
        *(uint8_t *)((int)puVar17 + 0x13) = DAT_800043a0/*SDRAM*/;
        iVar16 = dispatch_event_with_payload_1036b92c(param_1,1,auStack_18,iVar14 + -0x7ffea0e8,*puVar17,puVar17[1],
                              puVar17[2],puVar17[3],*(uint8_t *)((int)puVar17 + 0x13));
        if (iVar16 == 1) {
code_r0x1036486a:
          dispatch_event_with_payload_103649e6((int)param_1);
        }
        else {
          (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].adj + iVar14 + -0x7ffea0e8);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0xffffffff;
          puVar17[3] = 3;
          *(uint8_t *)((int)puVar17 + 0x13) = DAT_800043a0/*SDRAM*/;
          iVar16 = dispatch_event_with_payload_1036b92c(param_1,2,auStack_18,iVar14 + -0x7ffea0e8,*puVar17,puVar17[1],
                                puVar17[2],puVar17[3],*(uint8_t *)((int)puVar17 + 0x13));
          if (iVar16 == 1) goto code_r0x1036486a;
          (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar14 + -0x7ffea0d4)))[2].adj + iVar14 + -0x7ffea0e8);
          iVar14 = **(int **)((int)param_1 + 0x70);
          (((vtbl_entry*)(iVar14))[20].fn)
                    ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar14))[20].adj,
                     *(uint32_t *)((int)param_1 + 0x214));
        }
        set_byte_at_offset_five((int)pvVar12,(char)uVar15);
        call_single_argument_helper_1036bd60((uint32_t)(param_1),(uint32_t)(pvVar12));
        uVar7 = read_table_entry_at_offset((int)pvVar12,uVar15);
        *(uint16_t *)((int)param_1 + 0x218) = uVar7;
        uVar7 = read_second_word_from_pointer_array((int)pvVar12,uVar15);
        *(uint16_t *)((int)param_1 + 0x21a) = uVar7;
        empty_noop_function_10364aa0((uint32_t)(param_1));
        dispatch_event_to_handler_103653a0((int)param_1,uVar15,(uint)*(ushort *)((int)param_1 + 0x218),
                     (uint)*(ushort *)((int)param_1 + 0x21a));
        request_ui_sync_code_4(*(void **)((int)param_1 + 0x70));
        free_heap_if_flagged_1045c402(auStack_18,2);
        uVar15 = uVar15 + 1 & 0xff;
        bVar9 = read_byte_at_offset_four_1051e508((int)pvVar12);
      } while (uVar15 < bVar9);
    }
    cVar8 = read_byte_at_offset_four_1051e508(iVar2);
    bVar9 = 0;
    if (cVar8 != '\0') {
      do {
        iVar2 = **(int **)((int)param_1 + 0x70);
        (((vtbl_entry*)(iVar2))[21].fn)
                  ((int)*(int **)((int)param_1 + 0x70) + (int)((vtbl_entry*)(iVar2))[21].adj,bVar9);
        bVar9 = bVar9 + 1;
        bVar10 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
      } while (bVar9 < bVar10);
    }
    iVar2 = (int)param_1 + 0x1c;
    set_byte_at_offset_five(iVar2,(char)uStack_1c);
    forward_two_args_to_helper_1036bd4a(param_1,iVar2);
    piVar13 = *(int **)((int)param_1 + 0x70);
    iVar14 = *piVar13;
    sVar1 = *(short *)(iVar14 + 0xb0);
    uVar3 = read_offset_six_word_1051e514(iVar2);
    uVar4 = read_offset_8_word(iVar2);
    (((vtbl_entry*)(iVar14))[22].fn)((int)piVar13 + (int)sVar1,uVar3,uVar4);
    piVar13 = *(int **)((int)param_1 + 0x70);
    iVar14 = *piVar13;
    sVar1 = *(short *)(iVar14 + 0xb8);
    uVar11 = read_byte_at_offset_five_1051e50e(iVar2);
    (((vtbl_entry*)(iVar14))[23].fn)((int)piVar13 + (int)sVar1,uVar11);
    release_object_at_offset_0x70(param_1);
    bVar9 = read_byte_at_offset_four_1051e508(iVar2);
    uVar15 = read_byte_at_offset_one_1051e4f6(iVar2);
    if (bVar9 != uVar15) {
      check_kernel_call_success_10459fea(0x64);
    }
    uVar3 = 1;
  }
  return uVar3;
}
