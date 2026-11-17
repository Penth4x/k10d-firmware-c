/* @k10d process_exposure_sequence @ 0x10368aaa
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Iterates through a list of exposure steps, executing metering and sensor readout
 *   operations for each.
 * summary:
 *   The function retrieves a count from a sub-object at offset 0x1c and loops through that
 *   many entries. For each entry, it calls process_event_and_return_field_1036bc82 and
 *   dispatch_three_params_and_return_offset (likely metering/sensor control), updates state
 *   at offset 0x130, and performs a write operation via
 *   dispatch_event_with_payload_1036b92c with retry logic. It finishes by calling
 *   dispatch_three_params_and_return_offset with values from offsets 0x16/0x18 and updating
 *   the state via write_two_words_to_struct_10381f44. The structure suggests a multi-step
 *   exposure or metering sequence typical of DSLR AE/AF routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10368b6e) overlaps instruction at (ram,0x10368b6c)
    */

uint32_t process_exposure_sequence(void *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  char cVar9;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint16_t uVar8;
  uint32_t uVar7;
  byte bVar10;
  byte bVar11;
  uint extraout_r4;
  int iVar12;
  uint uVar13;
  uintptr_t sp;
  uint32_t *puVar14;
  uint8_t auStack_84 [20];
  int iStack_2c;
  int iStack_1c;
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  puVar14 = (uint32_t *)auStack_84;
  iVar1 = (int)param_1 + 0x1c;
  cVar9 = read_byte_at_offset_four_1051e91e(iVar1);
  if (cVar9 != '\0') {
    iStack_2c = 1;
    iVar12 = 0;
    do {
      (**(code **)(*(int *)(iVar12 + -0x7ffea0d4) + 0x14))
                (*(short *)(*(int *)(iVar12 + -0x7ffea0d4) + 0x10) + iVar12 + -0x7ffea0e8);
      (**(code **)(*(int *)(iVar12 + -0x7ffe9ec0) + 0x14))
                (*(short *)(*(int *)(iVar12 + -0x7ffe9ec0) + 0x10) + iVar12 + -0x7ffe9ed4);
      (**(code **)(*(int *)(iVar12 + -0x7ffe9cac) + 0x14))
                (*(short *)(*(int *)(iVar12 + -0x7ffe9cac) + 0x10) + iVar12 + -0x7ffe9cc0);
      iVar12 = iVar12 + 0x63c;
      iStack_2c = iStack_2c + -1;
    } while (-1 < iStack_2c);
    iStack_1c = (int)param_1 + 0x6c;
    register_menu_item_groups(iStack_1c);
    init_struct_and_set_offset_field(param_1);
    cVar9 = read_byte_at_offset_four_1051e91e(iVar1);
    if (cVar9 != '\0') {
      uVar13 = 0;
      do {
        if (*(char *)((int)param_1 + 0x14) != '\0') {
          return 1;
        }
        *(uint *)((int)param_1 + 0x13c) = uVar13;
        piVar2 = (int *)((int)param_1 + 0x118);
        check_and_zero_two_buffers(piVar2);
        iVar12 = (int)param_1 + 0x1c;
        uVar4 = read_pointer_from_table(iVar12,uVar13);
        iVar5 = process_event_and_return_field_1036bc82(param_1,uVar4,piVar2);
        if (iVar5 != 1) {
          return 0;
        }
        uVar4 = call_helper_with_zero_arg_1047e48c(piVar2);
        *(short *)((int)param_1 + uVar13 * 2 + 0x130) = (short)uVar4;
        uVar4 = read_pointer_from_table(iVar12,uVar13);
        iVar5 = dispatch_three_params_and_return_offset(param_1,uVar4,(uint)*(ushort *)((int)param_1 + uVar13 * 2 + 0x130));
        if (iVar5 != 1) {
          return 0;
        }
        pvVar3 = (void *)((int)param_1 + 0x6c);
        (*(code *)0x10381cd8/*ROM*/)(auStack_10,pvVar3);
        iVar5 = 8;
        do {
          iVar5 = iVar5 + -4;
          *(uint32_t *)(auStack_18 + iVar5) = *(uint32_t *)(auStack_10 + iVar5);
        } while (iVar5 != 0);
        iVar5 = uVar13 * 0x214;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0xffffffff;
        puVar14[3] = 3;
        *(uint8_t *)((int)puVar14 + 0x13) = DAT_800043a0/*SDRAM*/;
        iVar6 = dispatch_event_with_payload_1036b92c(param_1,1,auStack_18,iVar5 + -0x7ffea0e8,*puVar14,puVar14[1],puVar14[2]
                             ,puVar14[3],*(uint8_t *)((int)puVar14 + 0x13));
        if (iVar6 == 1) {
code_r0x10368cf4:
          build_and_send_param_record((int)param_1);
        }
        else {
          (**(code **)(*(int *)(iVar5 + -0x7ffea0d4) + 0x14))
                    (*(short *)(*(int *)(iVar5 + -0x7ffea0d4) + 0x10) + iVar5 + -0x7ffea0e8);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0xffffffff;
          puVar14[3] = 3;
          *(uint8_t *)((int)puVar14 + 0x13) = DAT_800043a0/*SDRAM*/;
          iVar6 = dispatch_event_with_payload_1036b92c(param_1,2,auStack_18,iVar5 + -0x7ffea0e8,*puVar14,puVar14[1],
                               puVar14[2],puVar14[3],*(uint8_t *)((int)puVar14 + 0x13));
          if (iVar6 == 1) goto code_r0x10368cf4;
          (**(code **)(*(int *)(iVar5 + -0x7ffea0d4) + 0x14))
                    (*(short *)(*(int *)(iVar5 + -0x7ffea0d4) + 0x10) + iVar5 + -0x7ffea0e8);
          register_menu_item_and_clear_flag_10381da2((int)pvVar3,*(int *)((int)param_1 + 0x13c));
        }
        iVar5 = *(int *)((int)param_1 + 0x13c);
        uVar8 = read_pointer_from_table(iVar12,uVar13);
        write_word_and_notify((int)pvVar3,iVar5,uVar8);
        uVar4 = *(uint32_t *)((int)param_1 + 0x13c);
        uVar7 = call_function_from_table(iVar12,uVar13);
        (*(code *)0x10381eea/*ROM*/)(pvVar3,uVar4,uVar7);
        request_ui_sync_code_4(pvVar3);
        free_heap_if_flagged_1045c402(auStack_18,2);
        uVar13 = uVar13 + 1 & 0xff;
        bVar10 = read_byte_at_offset_four_1051e91e(iVar12);
      } while (uVar13 < bVar10);
    }
    cVar9 = read_byte_at_offset_four_1051e91e(iVar1);
    bVar10 = 0;
    if (cVar9 != '\0') {
      do {
        invoke_virtual_slot_one_10381e04((int)param_1 + 0x6c,bVar10);
        bVar10 = bVar10 + 1;
        bVar11 = read_byte_at_offset_four_1051e91e((int)param_1 + 0x1c);
      } while (bVar10 < bVar11);
    }
    iVar1 = dispatch_three_params_and_return_offset(param_1,(uint)*(ushort *)((int)param_1 + 0x16),
                         (uint)*(ushort *)((int)param_1 + 0x18));
    if (iVar1 == 1) {
      iVar1 = (int)param_1 + 0x1c;
      uVar4 = read_offset_six_word_1051e92a(iVar1);
      uVar7 = read_offset_8_field(iVar1);
      write_two_words_to_struct_10381f44(iStack_1c,uVar4,uVar7);
      bVar10 = read_byte_at_offset_five_1051e924(iVar1);
      extraout_r4 = (uint)bVar10;
      register_menu_item_with_label_10381f4e(iStack_1c,extraout_r4);
      uVar8 = read_pointer_from_table(iVar1,extraout_r4);
      *(uint16_t *)((int)param_1 + 0x16) = uVar8;
      *(uint16_t *)((int)param_1 + 0x18) = *(uint16_t *)((int)param_1 + extraout_r4 * 2 + 0x130)
      ;
      init_struct_and_set_offset_field(param_1);
      bVar10 = read_byte_at_offset_four_1051e91e(iVar1);
      uVar13 = read_byte_at_offset_one_1051e90c(iVar1);
      if (bVar10 != uVar13) {
        check_kernel_call_success_10459fea();
      }
      return 1;
    }
  }
  return 0;
}
