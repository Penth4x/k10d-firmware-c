/* @k10d dispatch_command_by_id_1042c170 @ 0x1042c170
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042d1a6) overlaps instruction at (ram,0x1042d1a4)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_command_by_id_1042c170(int param_1,uint32_t param_2,int param_3)

{
  struct {
    byte bStack_8e;
    byte bStack_8d;
    byte bStack_8c;
    byte bStack_8b;
    byte bStack_8a;
    byte bStack_89;
  } _cfg_8e;
  struct {
    byte bStack_b;
    byte bStack_a;
    byte bStack_9;
  } _cfg_b;
  uint8_t uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint8_t *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  int iVar14;
  uint32_t uVar15;
  uintptr_t sp;
  uint8_t *puVar16;
  uint8_t auStack_138 [4];
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  uint8_t auStack_f2 [16];
  byte abStack_e2 [16];
  byte abStack_d2 [32];
  byte bStack_b2;
  byte bStack_b1;
  byte abStack_b0 [32];
  byte bStack_90;
  byte bStack_8f;
  int aiStack_88 [3];
  int aiStack_7c [3];
  uint8_t auStack_70 [36];
  uint8_t auStack_4c [8];
  uint8_t auStack_44 [8];
  uint8_t auStack_3c [8];
  uint8_t auStack_34 [8];
  uint8_t auStack_2c [8];
  uint8_t auStack_24 [8];
  uint8_t auStack_1c [8];
  uint8_t auStack_14 [9];
  puVar16 = auStack_138;
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar6 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x18)),(int)(1));
  bVar4 = false;
  if ((iVar6 == 2) || (iVar6 == 3)) {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4(param_3,3);
    piVar5 = aiStack_88;
    cls_105a6f84_new(piVar5);
    copy_eight_bytes_from_struct(*(int *)(param_1 + 0xc),piVar5);
    uVar12 = invoke_virtual_slot_two_104609e4(piVar5);
    write_word_to_struct_array(param_3,uVar12,0);
    uVar12 = invoke_virtual_slot_two_10460a3e(piVar5);
    write_word_to_struct_array(param_3,uVar12,1);
    uVar12 = invoke_virtual_slot_two_10460a5c(piVar5);
    iVar6 = 2;
    goto LAB_1042c27a;
  case 1:
    set_struct_field_at_offset_4(param_3,1);
    piVar5 = aiStack_7c;
    cls_105a6f84_new(piVar5);
    copy_eight_bytes_from_struct(*(int *)(param_1 + 0xc),piVar5);
    uVar12 = invoke_virtual_slot_two_104609c8(piVar5);
    iVar6 = 0;
LAB_1042c27a:
    write_word_to_struct_array(param_3,uVar12,iVar6);
    cls_105a6f84_delete(piVar5,2);
    iStack_100 = 0;
    break;
  case 2:
    set_struct_field_at_offset_4(param_3,1);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    _cfg_b.bStack_b = 0;
    iVar6 = call_helper_with_stack_arg_1046354a(*(int **)(param_1 + 0x20),uVar11 & 0xff,(int)&_cfg_b.bStack_b);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    uVar11 = (uint)_cfg_b.bStack_b;
    goto LAB_1042c2de;
  case 3:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x18)),(int)(2));
    if (iVar6 == 0) {
      iVar6 = get_or_init_singleton_10433180();
      uVar12 = *(uint32_t *)(iVar6 + 4);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
      uVar9 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,2);
      iVar6 = dispatch_mode_event_locked((void *)(uVar12),(uint32_t)(uVar11 & 0xff),(uint32_t)(uVar9 & 0xff),(uint32_t)(uVar7 & 0xff));
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042c36a;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_cpucom_command_sequence_104611e2((int *)(*(uint32_t *)(param_1 + 0x14)),(void *)(param_1 + 8));
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    goto joined_r0x1042c538;
  case 5:
    set_struct_field_at_offset_4(param_3,0x20);
    cls_105a6c6c_new(auStack_70);
    copy_32_bytes_from_struct_field_1045e39e(*(int *)(param_1 + 0xc),auStack_70);
    uVar11 = 0;
    iStack_108 = 7;
    do {
      uVar12 = (*(code *)0x1045fa7a/*ROM*/)(auStack_70,uVar11 & 0xff,0xff);
      write_word_to_struct_array(param_3,uVar12,uVar11);
      uVar12 = (*(code *)0x1045fa7a/*ROM*/)(auStack_70,uVar11 + 1 & 0xff,0xff);
      write_word_to_struct_array(param_3,uVar12,uVar11 + 1);
      uVar12 = (*(code *)0x1045fa7a/*ROM*/)(auStack_70,uVar11 + 2 & 0xff,0xff);
      write_word_to_struct_array(param_3,uVar12,uVar11 + 2);
      uVar12 = (*(code *)0x1045fa7a/*ROM*/)(auStack_70,uVar11 + 3 & 0xff,0xff);
      write_word_to_struct_array(param_3,uVar12,uVar11 + 3);
      uVar11 = uVar11 + 4;
      iStack_108 = iStack_108 + -1;
    } while (-1 < iStack_108);
    cls_105a6c6c_delete(auStack_70,2);
    iStack_100 = 0;
    break;
  case 6:
    set_struct_field_at_offset_4(param_3,1);
    cls_105a6f3c_new(auStack_4c);
    copy_field_from_struct_1045e622(*(int *)(param_1 + 0xc),auStack_4c);
    iVar6 = read_byte_at_offset_10460694(auStack_4c,0);
    write_word_to_struct_array(param_3,iVar6,0);
    cls_105a6f3c_delete(auStack_4c,2);
    iStack_100 = 0;
    break;
  case 7:
    set_struct_field_at_offset_4(param_3,0);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_cpucom_command_sequence_10461916((int *)(*(uint32_t *)(param_1 + 0x14)),(void *)(param_1 + 8));
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
joined_r0x1042c538:
    if (iStack_100 == 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x2c),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    break;
  case 8:
    set_struct_field_at_offset_4(param_3,0);
    uVar12 = *(uint32_t *)(param_1 + 0x10);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    invoke_virtual_two_byte_write((int *)(uVar12),(uint)(uVar11 & 0xffff));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 9:
    set_struct_field_at_offset_4(param_3,1);
    uVar11 = read_two_virtual_values_and_combine(*(int **)(param_1 + 0x10));
    goto LAB_1042ccc6;
  case 10:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(1),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0xb:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_44;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x15;
    goto LAB_1042c67e;
  case 0xc:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(2),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0xd:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_3c;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x11;
    goto LAB_1042c67e;
  case 0xe:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(3),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0xf:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_34;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x17;
    goto LAB_1042c67e;
  case 0x10:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(7),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x11:
    set_struct_field_at_offset_4(param_3,1);
    iVar6 = read_field_from_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(7));
    uVar11 = (uint)(iVar6 == 1);
    goto LAB_1042ccc6;
  case 0x12:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(8),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x13:
    set_struct_field_at_offset_4(param_3,1);
    iVar6 = read_field_from_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(8));
    if (iVar6 == 1) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    goto LAB_1042ccc6;
  case 0x14:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(9),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x15:
    set_struct_field_at_offset_4(param_3,1);
    iVar6 = read_field_from_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(9));
    if (iVar6 == 1) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    goto LAB_1042ccc6;
  case 0x16:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(10),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x17:
    set_struct_field_at_offset_4(param_3,1);
    iVar6 = read_field_from_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(10));
    if (iVar6 == 1) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    goto LAB_1042ccc6;
  case 0x18:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(4),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x19:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_2c;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x18;
    goto LAB_1042c67e;
  case 0x1a:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(5),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x1b:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_24;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x19;
    goto LAB_1042c67e;
  case 0x1c:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(6),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
    goto joined_r0x1042c78e;
  case 0x1d:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_1c;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = 0x1a;
LAB_1042c67e:
    iVar6 = extract_field_by_index_10460366(puVar8,iVar6);
    write_word_to_struct_array(param_3,iVar6,0);
LAB_1042d008:
    cls_105a6eac_delete(puVar8,2);
    iStack_100 = 0;
    break;
  case 0x1e:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(0xb),(uint)(iVar6 != 0));
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
    iVar6 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 8));
joined_r0x1042c78e:
    if (iVar6 == 0) {
LAB_1042c36a:
      iStack_100 = 0x82;
    }
    else {
      twai_flg_obj((uint32_t *)(param_1 + 0x2c),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
LAB_1042c5c2:
      iStack_100 = 0;
    }
    break;
  case 0x1f:
    set_struct_field_at_offset_4(param_3,1);
    iVar6 = read_field_from_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(0xb));
    if (iVar6 == 1) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
LAB_1042ccc6:
    write_word_to_struct_array(param_3,uVar11,0);
    goto LAB_1042c5c2;
  case 0x20:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = add_eight_to_param(param_3);
    iVar10 = get_or_create_singleton_object_10470d84();
    uVar13 = *(uint32_t *)(iVar10 + 4);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar6 = convert_be32_array_to_le_bytes(uVar13,uVar12,uVar11 & 0xffff,iVar6 + 8);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    break;
  case 0x21:
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    if (uVar11 == (uVar11 & 0xfffffffc)) {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar11 = uVar11 >> 2;
    }
    else {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar11 = (uVar11 >> 2) + 1;
    }
    empty_stub_function_103b76f0();
    empty_noop_stub_103b76f2();
    set_struct_field_at_offset_4(param_3,uVar11);
    iVar6 = get_or_create_singleton_object_10470d84();
    uVar15 = *(uint32_t *)(iVar6 + 4);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar13 = add_eight_to_param(param_3);
    iVar6 = decode_byte_stream_to_words(uVar15,uVar12,uVar11 & 0xffff,uVar13);
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    else {
      iStack_100 = 0;
    }
    break;
  case 0x22:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    if (uVar11 == (uVar11 & 0xfffffffe)) {
      iVar6 = add_eight_to_param(param_3);
      iVar10 = get_or_create_singleton_object_10470d84();
      uVar12 = *(uint32_t *)(iVar10 + 4);
      uVar13 = read_struct_field_at_index_1046c7ca(param_3,0);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      iVar6 = convert_be_words_to_le_bytes(uVar12,uVar13,uVar11 & 0xffff,iVar6 + 8);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x23:
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    if (uVar11 == (uVar11 & 0xfffffffe)) {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      if (uVar11 == (uVar11 & 0xfffffffc)) {
        uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
        uVar11 = uVar11 >> 2;
      }
      else {
        uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
        uVar11 = (uVar11 >> 2) + 1;
      }
      set_struct_field_at_offset_4(param_3,uVar11);
      iVar6 = get_or_create_singleton_object_10470d84();
      uVar15 = *(uint32_t *)(iVar6 + 4);
      uVar12 = read_struct_field_at_index_1046c7ca(param_3,0);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar13 = add_eight_to_param(param_3);
      iVar6 = decode_bytes_to_words(uVar15,uVar12,uVar11 & 0xffff,uVar13);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x24:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = get_or_create_singleton_object_10470d84();
    request_twai_object(*(uint32_t *)(iVar6 + 4));
    goto LAB_1042c5c2;
  case 0x25:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = get_or_create_singleton_object_10470d84();
    initialize_twai_flag_object(*(uint32_t *)(iVar6 + 4));
    goto LAB_1042c5c2;
  case 0x26:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar6 == 0) {
      call_helper_with_self_and_one((int *)(*(uint32_t *)(param_1 + 0x20)));
    }
    else {
      initialize_object_with_defaults((int *)__frv_reg_unset(4));
    }
    goto LAB_1042c5c2;
  case 0x27:
    set_struct_field_at_offset_4(param_3,1);
    puVar8 = auStack_14;
    cls_105a6eac_new(puVar8);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),puVar8);
    iVar6 = extract_field_by_index_10460366(puVar8,8);
    write_word_to_struct_array(param_3,iVar6,0);
    goto LAB_1042d008;
  case 0x28:
    set_struct_field_at_offset_4(param_3,0);
    piVar5 = *(int **)(param_1 + 0x20);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar6 = set_flag_in_struct_10462c64(piVar5,(uint)(iVar6 != 0));
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    else {
      iStack_100 = 0;
    }
    break;
  case 0x29:
    goto LAB_1042ce6c;
  case 0x2a:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if ((4 < uVar11) && (uVar11 < 0x10)) {
      piVar5 = *(int **)(param_1 + 0x20);
      uVar9 = read_struct_field_at_index_1046c7ca(param_3,1);
      iVar6 = send_three_byte_command(piVar5,(char)uVar11,uVar9 & 0xffff);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x2b:
    set_struct_field_at_offset_4(param_3,1);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (5 < uVar11) goto LAB_1042ce6c;
    _cfg_b.bStack_a = 0;
    iVar6 = call_helper_with_offset_args_10463468(*(int **)(param_1 + 0x20),uVar11 & 0xff,(int)&_cfg_b.bStack_a);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    uVar11 = (uint)_cfg_b.bStack_a;
    goto LAB_1042c2de;
  case 0x2c:
    set_struct_field_at_offset_4(param_3,0);
    piVar5 = *(int **)(param_1 + 0x20);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar6 = call_helper_with_stack_param_10462c8e(piVar5,uVar11 & 0xff);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    break;
  case 0x2d:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (((uVar11 < 4) || (uVar11 < 0xb)) || (uVar11 == 0xff)) {
      iVar6 = call_helper_with_stack_param_10462cb2(*(int **)(param_1 + 0x20),uVar11 & 0xff);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x2e:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if ((uVar11 < 4) || (uVar11 == 0xff)) {
      iVar6 = call_helper_with_stack_param_10462cd6(*(int **)(param_1 + 0x20),uVar11 & 0xff);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x2f:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = 0;
    iVar10 = 3;
    do {
      uVar12 = read_struct_field_at_index_1046c7ca(param_3,iVar6);
      auStack_f2[iVar6] = (char)uVar12;
      uVar12 = read_struct_field_at_index_1046c7ca(param_3,iVar6 + 1);
      auStack_f2[iVar6 + 1] = (char)uVar12;
      uVar12 = read_struct_field_at_index_1046c7ca(param_3,iVar6 + 2);
      auStack_f2[iVar6 + 2] = (char)uVar12;
      uVar12 = read_struct_field_at_index_1046c7ca(param_3,iVar6 + 3);
      auStack_f2[iVar6 + 3] = (char)uVar12;
      iVar10 = iVar10 + -1;
      iVar6 = iVar6 + 4;
    } while (-1 < iVar10);
    iVar6 = call_helper_with_five_args(*(int **)(param_1 + 0x20),auStack_f2);
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    else {
      iStack_100 = 0;
    }
    break;
  case 0x30:
    set_struct_field_at_offset_4(param_3,0x10);
    iVar6 = call_helper_with_fixed_args_10463334(*(int **)(param_1 + 0x20),(int)abStack_e2);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    iVar6 = 0;
    iVar10 = 3;
    do {
      write_word_to_struct_array(param_3,(uint)abStack_e2[iVar6],iVar6);
      write_word_to_struct_array(param_3,(uint)abStack_e2[iVar6 + 1],iVar6 + 1);
      write_word_to_struct_array(param_3,(uint)abStack_e2[iVar6 + 2],iVar6 + 2);
      write_word_to_struct_array(param_3,(uint)abStack_e2[iVar6 + 3],iVar6 + 3);
      iVar10 = iVar10 + -1;
      iVar6 = iVar6 + 4;
    } while (-1 < iVar10);
    break;
  case 0x31:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (uVar11 < 8) {
      iVar6 = write_two_bytes_to_param(*(int **)(param_1 + 0x20),uVar11 & 0xff);
      if (iVar6 != 0) {
        return 0;
      }
      return 0x82;
    }
    goto LAB_1042ce6c;
  case 0x32:
    set_struct_field_at_offset_4(param_3,0x12);
    iVar6 = call_helper_with_fixed_args_1046334c(*(int **)(param_1 + 0x20),(int)abStack_d2);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    iVar14 = 0;
    iStack_104 = 3;
    iVar10 = 0;
    iVar6 = 1;
    do {
      bVar2 = abStack_d2[iVar6];
      bVar3 = abStack_d2[iVar10];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14);
      bVar2 = abStack_d2[iVar6 + 2];
      bVar3 = abStack_d2[iVar10 + 2];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 1);
      bVar2 = abStack_d2[iVar6 + 4];
      bVar3 = abStack_d2[iVar10 + 4];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 2);
      bVar2 = abStack_d2[iVar6 + 6];
      bVar3 = abStack_d2[iVar10 + 6];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 3);
      iVar14 = iVar14 + 4;
      iVar10 = iVar10 + 8;
      iVar6 = iVar6 + 8;
      iStack_104 = iStack_104 + -1;
    } while (-1 < iStack_104);
    write_word_to_struct_array(param_3,(uint)bStack_b2,0x10);
    uVar11 = (uint)bStack_b1;
    iVar6 = 0x11;
    goto LAB_1042d71c;
  case 0x33:
    set_struct_field_at_offset_4(param_3,0x12);
    iVar6 = call_helper_with_fixed_args_10463450(*(int **)(param_1 + 0x20),(int)abStack_b0);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    iVar14 = 0;
    iStack_10c = 3;
    iVar10 = 0;
    iVar6 = 1;
    do {
      bVar2 = abStack_b0[iVar6];
      bVar3 = abStack_b0[iVar10];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14);
      bVar2 = abStack_b0[iVar6 + 2];
      bVar3 = abStack_b0[iVar10 + 2];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 1);
      bVar2 = abStack_b0[iVar6 + 4];
      bVar3 = abStack_b0[iVar10 + 4];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 2);
      bVar2 = abStack_b0[iVar6 + 6];
      bVar3 = abStack_b0[iVar10 + 6];
      puVar16[3] = 0;
      uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,0,puVar16[3]);
      write_word_to_struct_array(param_3,uVar11,iVar14 + 3);
      iVar14 = iVar14 + 4;
      iVar10 = iVar10 + 8;
      iVar6 = iVar6 + 8;
      iStack_10c = iStack_10c + -1;
    } while (-1 < iStack_10c);
    write_word_to_struct_array(param_3,(uint)bStack_90,0x10);
    uVar11 = (uint)bStack_8f;
    iVar6 = 0x11;
    goto LAB_1042d71c;
  case 0x34:
    set_struct_field_at_offset_4(param_3,2);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (7 < uVar11) goto LAB_1042ce6c;
    iVar6 = call_helper_with_stack_byte(*(int **)(param_1 + 0x20),(char)uVar11,(int)&_cfg_8e.bStack_8e);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    puVar16[3] = 0;
    uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)_cfg_8e.bStack_8d,(uint)_cfg_8e.bStack_8e,0,puVar16[3]);
    write_word_to_struct_array(param_3,uVar11,0);
    puVar16[3] = 0;
    uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)_cfg_8e.bStack_8b,(uint)_cfg_8e.bStack_8c,0,puVar16[3]);
    iVar6 = 1;
    goto LAB_1042d71c;
  case 0x35:
    set_struct_field_at_offset_4(param_3,1);
    piVar5 = *(int **)(param_1 + 0x20);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar6 = call_helper_with_offset_args_10463484(piVar5,uVar11 & 0xff,(int)&_cfg_8e.bStack_8a);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    puVar16[3] = 0;
    uVar11 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)_cfg_8e.bStack_89,(uint)_cfg_8e.bStack_8a,0,puVar16[3]);
    goto LAB_1042c2de;
  case 0x36:
    set_struct_field_at_offset_4(param_3,1);
    _cfg_b.bStack_9 = 0;
    iVar6 = call_helper_with_fixed_args_10463364(*(int **)(param_1 + 0x20),(int)&_cfg_b.bStack_9);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    uVar11 = (uint)_cfg_b.bStack_9;
LAB_1042c2de:
    iVar6 = 0;
LAB_1042d71c:
    write_word_to_struct_array(param_3,uVar11,iVar6);
    break;
  case 0x37:
    set_struct_field_at_offset_4(param_3,0);
    piVar5 = *(int **)(param_1 + 0x20);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar6 = build_two_byte_stack_arg(piVar5,(uint)(iVar6 != 0),(char)uVar12);
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    else {
      iStack_100 = 0;
    }
    break;
  case 0x38:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = call_helper_with_fixed_args_10462e46(*(int **)(param_1 + 0x20));
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    break;
  case 0x39:
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = add_eight_to_param(param_3);
    iVar10 = get_or_create_singleton_object_10470d84();
    uVar13 = *(uint32_t *)(iVar10 + 4);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar6 = serialize_and_send_buffer(uVar13,uVar12,uVar11 & 0xffff,iVar6 + 8);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    break;
  case 0x3a:
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    if (uVar11 == (uVar11 & 0xfffffffc)) {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar11 = uVar11 >> 2;
    }
    else {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar11 = (uVar11 >> 2) + 1;
    }
    set_struct_field_at_offset_4(param_3,uVar11);
    iVar6 = get_or_create_singleton_object_10470d84();
    uVar15 = *(uint32_t *)(iVar6 + 4);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar13 = add_eight_to_param(param_3);
    iVar6 = read_bytes_and_pack_words(uVar15,uVar12,uVar11 & 0xffff,uVar13);
    iStack_100 = 0;
    if (iVar6 == 0) {
      iStack_100 = 0x82;
    }
    break;
  default:
LAB_1042ce6c:
    iStack_100 = 0x83;
  }
  return iStack_100;
}
