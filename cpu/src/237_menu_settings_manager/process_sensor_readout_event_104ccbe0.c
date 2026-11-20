/* @k10d process_sensor_readout_event_104ccbe0 @ 0x104ccbe0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Handles a sensor readout event by validating state, configuring readout parameters, and
 *   updating the status field at offset 0x214.
 * summary:
 *   The function checks the event type from a linked object (offset 0x1e0) and proceeds if
 *   it is 2 or 3. It initializes a local object, reads configuration values, and calls
 *   initialize_sensor_object_from_config to process the event. Depending on the result and
 *   flags at offsets 0x218/0x219, it updates the status word at offset 0x214 to 0, 1, 2, or
 *   3. It also performs arithmetic on 16-bit values (likely sensor timing or gain) using
 *   helpers like abs_uint32.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_sensor_readout_event_104ccbe0(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t *puVar5;
  char cVar9;
  int iVar6;
  uint uVar7;
  bool bVar10;
  uint extraout_r4;
  uint uVar8;
  uint extraout_r5;
  void **ppuVar11;
  uintptr_t sp;
  int *piVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint8_t auStack_540 [4];
  int iStack_514;
  cls_105b9458 cStack_4e0;
  uint32_t uStack_2cc;
  uint32_t uStack_2c8;
  uint32_t uStack_2c4;
  uint32_t uStack_2c0;
  uint16_t uStack_2bc;
  uint16_t uStack_2ba;
  uint16_t uStack_2b8;
  uint16_t uStack_2b6;
  uint16_t uStack_2b4;
  uint8_t auStack_2b0 [92];
  cls_105b9458 cStack_254;
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
  ushort uStack_e;
  uint16_t uStack_c;
  
  piVar12 = (int *)auStack_540;
  *(uint32_t *)(param_1 + 0x210) = 0xc0015;
  puVar5 = (uint32_t *)(*(code *)0x1052d61a/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
  iVar4 = puVar5[2];
  if ((iVar4 == 2) || (iVar4 == 3)) {
    cVar9 = read_byte_at_offset_104c2842(puVar5,3);
    if (cVar9 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar6 = (*(code *)0x1052d61c/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
      if ((*(int *)(iVar6 + 4) == 0) && (iVar6 = process_sensor_readout_status(param_1), iVar6 == 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x218) == '\0') {
        process_three_string_slots_per_entry(*(int *)(param_1 + 0x48));
        cls_105b9458_new(&cStack_4e0);
        iVar6 = compute_buffer_size_and_init(&cStack_4e0,(uint32_t *)(param_1 + 0x1e8),2);
        if (iVar6 == 0) {
          uVar3 = 3;
          if (cStack_4e0.field_0x10 != 2) {
            uVar3 = 0;
          }
          *(uint32_t *)(param_1 + 0x214) = uVar3;
        }
        else {
          uStack_2bc = 0;
          uStack_2ba = 0;
          uStack_2b8 = 0;
          uStack_2b6 = 0;
          uStack_2b4 = 0;
          uStack_2c8 = cStack_4e0.field_0x20;
          uStack_2c4 = cStack_4e0.field_0x24;
          uStack_2c0 = cStack_4e0.field_0x28;
          ppuVar11 = &cStack_4e0.field_0x2c;
          uStack_2cc = cStack_4e0.field_0x1c;
          uVar3 = return_first_word_1045c514(ppuVar11);
          uStack_2b8 = (short)uVar3;
          uVar3 = return_first_word_1045c514(ppuVar11);
          uStack_2bc = (short)uVar3;
          uVar3 = read_struct_field_at_offset_4(ppuVar11);
          uStack_2b6 = 0;
          uStack_2b4 = 0;
          iStack_514 = 0;
          uStack_2ba = (short)uVar3;
          if (iVar4 == 3) {
            iStack_514 = 4;
          }
          else {
            iVar4 = (*(code *)0x104c284c/*ROM*/)(puVar5,3);
            if (*(int *)(iVar4 + 0x1c) == 2) {
              iStack_514 = 2;
            }
          }
          write_struct_fields_to_target_1052d6d8(*(uint32_t *)(param_1 + 0x1e0));
          iVar4 = get_or_create_singleton_object_1050b118();
          iVar6 = (*(code *)0x1052d61c/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
          uVar7 = get_aligned_next_pointer(iVar6);
          uVar3 = (*(code *)0x1052d626/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
          *piVar12 = uVar3;
          bVar10 = initialize_sensor_object_from_config(iVar4,iStack_514,uVar7,(int)&uStack_2cc,*piVar12);
          if (bVar10) {
            if (*(char *)(param_1 + 500) == '\0') {
              iVar4 = compare_two_structs_by_mode(param_1,0,&cStack_4e0,*(void **)(param_1 + 0x1e4));
            }
            else {
              cStack_4e0.field_0x210 = 1;
              copy_large_struct((uint32_t *)&cStack_4e0.field_0x34,puVar5);
              cStack_4e0.field_0x18 = 3;
              alloc_and_zero_struct_104bb416(auStack_2b0);
              read_struct_field_at_index_104c2890(puVar5,0);
              iVar4 = map_mode_code_to_index_104bb5c4(__frv_reg_unset(4));
              if ((iVar4 == 0) || (iVar4 == 2)) {
                iVar4 = compare_two_structs_by_mode(param_1,iVar4,&cStack_4e0,*(void **)(param_1 + 0x1e4));
              }
              else {
                cls_105b9458_new(&cStack_254);
                iVar4 = compare_two_structs_by_mode(param_1,iVar4,&cStack_4e0,&cStack_254);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = compute_buffer_size_and_init(*(void **)(param_1 + 0x1e4),(uint32_t *)(param_1 + 0x1e8),2
                                      );
                  if (iVar4 == 0) {
                    if (*(int *)(*(int *)(param_1 + 0x1e4) + 0x10) == 2) {
                      *(uint32_t *)(param_1 + 0x214) = 3;
                    }
                    else {
                      *(uint32_t *)(param_1 + 0x214) = 0;
                    }
                    cls_105b9458_delete(&cStack_254,2);
                    destroy_five_member_objects(auStack_2b0,2);
                    goto LAB_104cd368;
                  }
                  uStack_40 = 1;
                  uStack_3c = 0;
                  uStack_38 = 0;
                  uStack_34 = 0;
                  uStack_30 = 0;
                  uStack_2e = 0;
                  uStack_2c = 0;
                  uStack_2a = 0;
                  uStack_28 = 0;
                  uStack_14 = 0;
                  uStack_12 = 0;
                  uStack_10 = 0;
                  uStack_e = 0;
                  uStack_c = 0;
                  uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x20);
                  uStack_1c = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x24);
                  uStack_18 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x28);
                  uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x1c);
                  uVar3 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_10 = (short)uVar3;
                  uVar3 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_14 = (short)uVar3;
                  uVar3 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_12 = (short)uVar3;
                  uStack_e = 0;
                  uStack_c = 0;
                  uVar3 = *(uint32_t *)(param_1 + 0x4c);
                  iVar4 = *(int *)(param_1 + 0x1f0) * 3;
                  bVar1 = (&DAT_105b94e0/*ROM*/)[iVar4];
                  bVar2 = (&DAT_105b94e1/*ROM*/)[iVar4];
                  *(ushort *)((int)piVar12 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[iVar4];
                  forward_event_with_payload(uVar3,&uStack_24,(ushort)bVar1,(ushort)bVar2,
                               *(uint16_t *)((int)piVar12 + 2));
                  uStack_3c = cStack_254.field_0x20;
                  uStack_38 = cStack_254.field_0x24;
                  uStack_34 = cStack_254.field_0x28;
                  uStack_40 = cStack_254.field_0x1c;
                  ppuVar11 = &cStack_254.field_0x2c;
                  uVar3 = return_first_word_1045c514(ppuVar11);
                  uStack_2c = (short)uVar3;
                  uVar3 = return_first_word_1045c514(ppuVar11);
                  uStack_30 = (short)uVar3;
                  uVar3 = read_struct_field_at_offset_4(ppuVar11);
                  uStack_2a = 0;
                  uStack_28 = 0;
                  uStack_2e = (short)uVar3;
                  uVar7 = read_struct_field_at_offset_4(ppuVar11);
                  uVar13 = abs_uint32(uVar7 & 0xffff);
                  uVar7 = return_first_word_1045c514(ppuVar11);
                  uVar14 = abs_uint32(uVar7 & 0xffff);
                  uVar7 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uVar15 = abs_uint32(uVar7 & 0xffff);
                  uVar13 = multiply_fixed_point_values_105445a2((int)((ulonglong)uVar15 >> 0x20),(int)uVar15,
                                        (int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
                  multiply_two_floats((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13,
                               (uint)((ulonglong)uVar14 >> 0x20),(uint)uVar14);
                  uVar7 = normalize_fixed_point_value_105448ac(extraout_r4,extraout_r5);
                  uVar8 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x20);
                  uStack_1c = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x24);
                  uStack_18 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x28);
                  uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x1c);
                  uVar3 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_14 = (uint16_t)(uVar7 & 0xfffe);
                  uStack_10 = (short)uVar3;
                  uVar3 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0x1e4) + 0x2c));
                  uStack_c = 0;
                  uStack_12 = (short)uVar3;
                  uStack_e = (ushort)((int)((uVar8 & 0xffff) - (uVar7 & 0xfffe)) / 2) & 0xfffe;
                  iVar4 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
                  if (iVar4 != 0) {
                    *(uint8_t *)(*(int *)(param_1 + 0x1e4) + 0x210) = 1;
                    copy_large_struct((uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x34),puVar5);
                    *(uint32_t *)(*(int *)(param_1 + 0x1e4) + 0x18) = 3;
                  }
                }
                cls_105b9458_delete(&cStack_254,2);
              }
              destroy_five_member_objects(auStack_2b0,2);
            }
            if (iVar4 != 0) {
              *(uint32_t *)(param_1 + 0x214) = 1;
              goto LAB_104cd368;
            }
          }
          if (*(char *)(param_1 + 0x219) == '\0') {
            *(uint32_t *)(param_1 + 0x214) = 0;
          }
          else {
            *(uint32_t *)(param_1 + 0x214) = 3;
          }
        }
LAB_104cd368:
        cls_105b9458_delete(&cStack_4e0,2);
        return;
      }
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  *(uint32_t *)(param_1 + 0x214) = uVar3;
  return;
}
