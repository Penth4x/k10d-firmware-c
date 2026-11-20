/* @k10d dispatch_settings_ui_command @ 0x104d0870
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_settings_ui_command(cls_105b9bd0 *param_1,uint32_t param_2,uint32_t *param_3)

{
  uint8_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar13;
  uint16_t *puVar7;
  bool bVar14;
  uint uVar8;
  uint32_t uVar9;
  void *pvVar10;
  int iVar11;
  uint32_t uVar12;
  uint32_t *puVar15;
  int iVar16;
  uintptr_t sp;
  uint8_t *puVar17;
  uint8_t auStack_60 [16];
  int iStack_3c;
  uint32_t uStack_28;
  uint16_t auStack_24 [3];
  uint8_t uStack_1d;
  uint16_t auStack_1c [4];
  uint16_t auStack_14 [4];
  uint32_t uStack_c;
  
  puVar17 = auStack_60;
  uVar1 = *(uint8_t *)((int)param_3 + 0x859);
  set_struct_field_at_offset_4((int)param_3,0);
  iVar2 = read_virtual_property_field((int *)(param_1->field_0x18),(int)(1));
  bVar14 = false;
  if ((iVar2 == 2) || (iVar2 == 3)) {
    bVar14 = true;
  }
  if (!bVar14) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4((int)param_3,0);
    iVar2 = get_or_init_singleton_10433180();
    iVar2 = *(int *)(iVar2 + 4);
    puVar15 = &param_1->field_0x10;
    eventflag_clr_flg(puVar15,1);
    iVar2 = set_mode_flag_and_update_ctrl(iVar2,(int)puVar15,1,4);
    if (iVar2 != 0) {
      twai_flg_obj(puVar15,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      return 0;
    }
    break;
  case 1:
    set_struct_field_at_offset_4((int)param_3,0);
    bVar14 = check_field_at_offset_0x18((int)param_1);
    if (bVar14) {
      iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
      if (iVar2 == 0) {
        pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
        iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,1);
        first_run_set_flag_a((int)(pvVar10),(int)(iVar2 != 0));
        return 0;
      }
      if (iVar2 == 1) {
        pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
        iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,1);
        init_two_magic_fields_10484960((int)(pvVar10),(int)(iVar2 != 0));
        return 0;
      }
      if (iVar2 == 2) {
        pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
        iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,1);
        first_run_set_flag_b((int)(pvVar10),(int)(iVar2 != 0));
        return 0;
      }
      if (iVar2 != 3) {
        return 0x83;
      }
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,1);
      init_two_magic_fields_104849d8((int)(pvVar10),(int)(iVar2 != 0));
      return 0;
    }
    break;
  case 2:
    set_struct_field_at_offset_4((int)param_3,1);
    bVar14 = check_object_field_via_helper((void *)(param_1->field_0x8));
    if (bVar14) {
      settings_refresh_working_copy((void *)(param_1->field_0x8));
    }
    iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
    uVar9 = 0;
    if (iVar2 == 0) {
      iVar2 = first_run_flag_a_done((int)param_1->field_0x8);
      uVar12 = 1;
      if (iVar2 == 0) {
        uVar12 = 0;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = check_init_magic_at_offset_0x14((int)param_1->field_0x8);
      uVar12 = 1;
      if (iVar2 == 0) {
        uVar12 = 0;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = first_run_flag_b_done((int)param_1->field_0x8);
      uVar12 = 1;
      if (iVar2 == 0) {
        uVar12 = 0;
      }
    }
    else if (iVar2 == 3) {
      iVar2 = check_init_magic_at_offset_14((int)param_1->field_0x8);
      uVar12 = 1;
      if (iVar2 == 0) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 0;
      uVar9 = 0x83;
    }
    goto LAB_104d0eca;
  case 3:
    set_struct_field_at_offset_4((int)param_3,0);
    bVar14 = check_field_at_offset_0x18((int)param_1);
    if (bVar14) {
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
      init_two_magic_fields_10484960((int)(pvVar10),(int)(iVar2 != 0));
      return 0;
    }
    break;
  case 4:
    set_struct_field_at_offset_4((int)param_3,1);
    bVar14 = check_object_field_via_helper((void *)(param_1->field_0x8));
    if (bVar14) {
      settings_refresh_working_copy((void *)(param_1->field_0x8));
    }
    iVar2 = check_init_magic_at_offset_0x14((int)param_1->field_0x8);
    write_word_to_struct_array((int)param_3,(uint)(iVar2 != 0),0);
    return 0;
  case 5:
    set_struct_field_at_offset_4((int)param_3,0);
    bVar14 = check_field_at_offset_0x18((int)param_1);
    if (bVar14) {
      uStack_28 = read_struct_field_at_index_1046c7ca((int)param_3,0);
      uStack_28 = uStack_28 & 0xffff;
      uVar8 = read_struct_field_at_index_1046c7ca((int)param_3,1);
      uVar3 = read_struct_field_at_index_1046c7ca((int)param_3,2);
      uVar4 = read_struct_field_at_index_1046c7ca((int)param_3,3);
      uVar5 = read_struct_field_at_index_1046c7ca((int)param_3,4);
      uVar6 = read_struct_field_at_index_1046c7ca((int)param_3,5);
      puVar17[3] = 0;
      puVar17[7] = 0;
      puVar17[0xb] = 0;
      puVar7 = auStack_24;
      puVar17[0xf] = 0;
      alloc_and_init_small_struct_1045c524(puVar7,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar17[3],puVar17[7],puVar17[0xb],puVar17[0xf]);
      store_second_word(puVar7,uStack_28);
      set_clamped_byte_field(puVar7,uVar8 & 0xff);
      clamp_and_store_byte_at_offset3(puVar7,uVar3 & 0xff,0);
      store_capped_byte_at_offset(puVar7,uVar4 & 0xff);
      store_clamped_byte_at_offset_6(puVar7,uVar5 & 0xff);
      store_clamped_byte_at_offset_7(puVar7,uVar6 & 0xff);
      iVar2 = get_or_create_singleton_object_1046d20c();
      iVar16 = *(int *)(iVar2 + 4);
      query_and_apply_param_state(iVar16,puVar7);
      iVar2 = 8;
      do {
        iVar11 = iVar2 + -1;
        *(uint8_t *)((int)auStack_24 + iVar2 + 7) = *(uint8_t *)((int)auStack_24 + iVar2 + -1)
        ;
        iVar2 = iVar11;
      } while (iVar11 != 0);
      forward_param_to_helper_1046c8e8(iVar16,auStack_24 + 4);
      free_heap_if_flag_set_1045c56c(auStack_24 + 4,2);
      goto LAB_104d0da6;
    }
    break;
  case 6:
    set_struct_field_at_offset_4((int)param_3,6);
    iVar2 = get_or_create_singleton_object_1046d20c();
    uVar12 = *(uint32_t *)(iVar2 + 4);
    puVar17[3] = 0;
    puVar17[7] = 0;
    puVar17[0xb] = 0;
    puVar7 = auStack_14;
    puVar17[0xf] = 0;
    alloc_and_init_small_struct_1045c524(puVar7,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar17[3],puVar17[7],puVar17[0xb],puVar17[0xf]);
    collect_and_forward_object_state(uVar12,puVar7);
    uVar12 = read_first_word_1045c66c(puVar7);
    write_word_to_struct_array((int)param_3,uVar12,0);
    bVar13 = read_byte_at_offset_two(puVar7);
    write_word_to_struct_array((int)param_3,(uint)bVar13,1);
    bVar13 = read_byte_at_offset_three(puVar7);
    write_word_to_struct_array((int)param_3,(uint)bVar13,2);
    bVar13 = read_byte_at_offset_5(puVar7);
    write_word_to_struct_array((int)param_3,(uint)bVar13,3);
    bVar13 = read_byte_at_offset_six(puVar7);
    write_word_to_struct_array((int)param_3,(uint)bVar13,4);
    bVar13 = read_byte_at_offset_seven(puVar7);
    write_word_to_struct_array((int)param_3,(uint)bVar13,5);
LAB_104d0da6:
    free_heap_if_flag_set_1045c56c(puVar7,2);
    return 0;
  case 7:
    set_struct_field_at_offset_4((int)param_3,0);
    bVar14 = check_field_at_offset_0x18((int)param_1);
    if (bVar14) {
      iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
      if (iVar2 == 0) {
        apply_settings_update((void *)(param_1->field_0x8));
        return 0;
      }
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
          uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,1);
          update_setting_and_refresh_copy_10485072(pvVar10,uVar12);
          return 0;
        }
        return 0x83;
      }
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,1);
      update_setting_and_refresh_copy_10485050(pvVar10,uVar12);
      return 0;
    }
    break;
  case 8:
    set_struct_field_at_offset_4((int)param_3,0);
    iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca((int)param_3,1);
    uVar12 = validate_and_set_setting((int)param_1,iVar2,uVar8);
    return uVar12;
  case 9:
    set_struct_field_at_offset_4((int)param_3,1);
    iVar2 = read_struct_field_at_index_1046c7ca((int)param_3,0);
    uStack_c = 0;
    uVar9 = read_setting_from_object((int)param_1,iVar2,&uStack_c);
    uVar12 = uStack_c;
LAB_104d0eca:
    write_word_to_struct_array((int)param_3,uVar12,0);
    return uVar9;
  case 10:
    set_struct_field_at_offset_4((int)param_3,0);
    pvVar10 = (void *)read_first_word_1046c7d8(param_3);
    if ((int)pvVar10 < 1) {
      return 0x83;
    }
    if ((int)pvVar10 < 0x29) {
      iVar11 = heap_alloc_2((int)pvVar10);
      iVar16 = 0;
      iVar2 = (int)pvVar10 + -3;
      if (2 < iVar2) {
        do {
          uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,iVar16);
          *(char *)(iVar11 + iVar16) = (char)uVar12;
          uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,iVar16 + 1);
          *(char *)(iVar11 + iVar16 + 1) = (char)uVar12;
          uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,iVar16 + 2);
          *(char *)(iVar11 + iVar16 + 2) = (char)uVar12;
          iVar2 = iVar2 + -3;
          iVar16 = iVar16 + 3;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        uVar12 = read_struct_field_at_index_1046c7ca((int)param_3,iVar16);
        *(char *)(iVar11 + iVar16) = (char)uVar12;
        iVar16 = iVar16 + 1;
      }
      call_helper_on_two_pointers_10484c6c((int)param_1->field_0x8,iVar11,pvVar10,0);
      heap_free_2(iVar11);
      return 0;
    }
    return 0x83;
  case 0xb:
    set_struct_field_at_offset_4((int)param_3,0x28);
    iVar16 = 0;
    iStack_3c = 7;
    iVar2 = 0xb0;
    do {
      uVar12 = allocate_buffer_by_mode(param_1->field_0x8,iVar2,0);
      write_word_to_struct_array((int)param_3,uVar12,iVar16);
      uVar12 = allocate_buffer_by_mode(param_1->field_0x8,iVar2 + 1,0);
      write_word_to_struct_array((int)param_3,uVar12,iVar16 + 1);
      uVar12 = allocate_buffer_by_mode(param_1->field_0x8,iVar2 + 2,0);
      write_word_to_struct_array((int)param_3,uVar12,iVar16 + 2);
      uVar12 = allocate_buffer_by_mode(param_1->field_0x8,iVar2 + 3,0);
      write_word_to_struct_array((int)param_3,uVar12,iVar16 + 3);
      uVar12 = allocate_buffer_by_mode(param_1->field_0x8,iVar2 + 4,0);
      write_word_to_struct_array((int)param_3,uVar12,iVar16 + 4);
      iVar16 = iVar16 + 5;
      iVar2 = iVar2 + 5;
      iStack_3c = iStack_3c + -1;
    } while (-1 < iStack_3c);
    return 0;
  default:
    return 0x81;
  }
  return 0x82;
}
