/* @k10d dispatch_command_by_type_id @ 0x104972aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10497d18) overlaps instruction at (ram,0x10497d16)
    */

uint32_t dispatch_command_by_type_id(int param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int extraout_r4;
  uint32_t uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uintptr_t sp;
  uint8_t *puVar18;
  uint8_t auStack_140 [4];
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  uint32_t uStack_f8;
  int iStack_ec;
  int iStack_e0;
  byte abStack_dc [8];
  byte bStack_d4;
  byte bStack_d3;
  uint8_t auStack_d2 [4];
  uint8_t auStack_ce [4];
  uint8_t auStack_ca [16];
  uint8_t uStack_ba;
  uint8_t uStack_b9;
  uint8_t uStack_b8;
  uint8_t uStack_b7;
  uint8_t uStack_b6;
  uint8_t uStack_b5;
  uint8_t uStack_b4;
  uint8_t uStack_b3;
  uint8_t uStack_b2;
  byte bStack_b1;
  byte bStack_b0;
  byte bStack_af;
  uint8_t uStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  uint8_t auStack_aa [4];
  uint8_t auStack_a6 [4];
  uint8_t auStack_a2 [16];
  uint8_t uStack_92;
  uint8_t uStack_91;
  byte abStack_90 [4];
  byte abStack_8c [4];
  byte abStack_88 [4];
  byte abStack_84 [16];
  uint8_t uStack_74;
  uint8_t uStack_73;
  uint8_t uStack_72;
  uint8_t uStack_71;
  uint8_t uStack_70;
  uint8_t uStack_6f;
  uint8_t uStack_6e;
  uint8_t uStack_6d;
  uint8_t uStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  uint8_t uStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  uint8_t auStack_5e [70];
  uint8_t auStack_18 [16];
  
  puVar18 = auStack_140;
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar7 = read_virtual_property_field(*(uint32_t *)(param_1 + 0xc),1);
  bVar5 = false;
  if ((iVar7 == 2) || (iVar7 == 3)) {
    bVar5 = true;
  }
  if (!bVar5) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_fixed_args_10463146(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 1:
    set_struct_field_at_offset_4(param_3,0);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar13 = read_struct_field_at_index_1046c7ca(param_3,2);
    iVar7 = call_helper_with_packed_args(*(int **)(param_1 + 8),uVar14 & 0xffff,uVar12 & 0xffff,uVar13 & 0xffff);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    break;
  case 2:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_four_args_1046318e(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 3:
    set_struct_field_at_offset_4(param_3,5);
    iVar7 = 0;
    iVar17 = 1;
    do {
      abStack_dc[iVar7] = 0;
      abStack_dc[iVar7 + 1] = 0;
      abStack_dc[iVar7 + 2] = 0;
      abStack_dc[iVar7 + 3] = 0;
      abStack_dc[iVar7 + 4] = 0;
      iVar17 = iVar17 + -1;
      iVar7 = iVar7 + 5;
    } while (-1 < iVar17);
    iVar7 = call_helper_with_offset_and_size_10463566(*(int **)(param_1 + 8),(int)abStack_dc);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)abStack_dc[1],(uint)abStack_dc[0],0,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,0);
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)abStack_dc[3],(uint)abStack_dc[2],0,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,1);
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)abStack_dc[5],(uint)abStack_dc[4],0,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,2);
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)abStack_dc[7],(uint)abStack_dc[6],0,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,3);
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_d3,(uint)bStack_d4,0,puVar18[3]);
    iStack_104 = 4;
    goto LAB_104980cc;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar8 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,2);
    uVar10 = read_struct_field_at_index_1046c7ca(param_3,3);
    piVar16 = *(int **)(param_1 + 8);
    puVar18[3] = (char)uVar10;
    pack_and_call_helper(piVar16,(char)uVar11,(char)uVar8,(char)uVar9,puVar18[3]);
    if (extraout_r4 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 6:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_offset_and_zero_104631ca(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 8:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_four_args_104631e2(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 9:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_fixed_args_104631fa(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 10:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_subroutine_with_fixed_args_10463212(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 0xb:
    set_struct_field_at_offset_4(param_3,6);
    init_70_byte_struct(auStack_5e);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    store_big_endian_word_104638f0(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,1);
    write_two_bytes_to_offset_104638fc(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,2);
    write_two_bytes_to_offset_1046390a(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,3);
    write_two_bytes_to_offset_6(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,4);
    write_two_bytes_to_offset_8(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,5);
    write_two_bytes_to_struct_10463934(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,6);
    write_two_bytes_to_offset_0xc_10463942(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,7);
    write_two_bytes_to_offset_14_10463950(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,8);
    write_two_bytes_to_offset_0x10(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,9);
    write_two_bytes_to_offset_0x12(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,10);
    write_two_bytes_to_offset_0x14(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0xb);
    write_two_bytes_to_offset_0x16(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0xc);
    write_two_bytes_to_offset_0x18_10463996(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0xd);
    write_two_bytes_to_offset_0x1a(auStack_5e,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0xe);
    write_two_bytes_to_struct_104639b2(auStack_5e,uVar14 & 0xffff);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0xf);
    write_u32_to_struct_offset_0x1e(auStack_5e,uVar11);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0x10);
    store_bytes_at_offset_0x22(auStack_5e,uVar11);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0x11);
    store_word_big_endian(auStack_5e,uVar11);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0x12);
    store_word_at_offset_0x2a(auStack_5e,uVar11);
    iVar7 = call_helper_with_two_params_1046357e(*(int **)(param_1 + 8),auStack_5e);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    uVar11 = read_four_bytes_from_struct_10463a56((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,0);
    uVar11 = read_four_bytes_from_struct_10463a78((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,1);
    uVar11 = read_four_bytes_from_struct_10463a9c((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,2);
    uVar11 = call_subroutine_with_four_bytes((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,3);
    uVar11 = call_helper_with_four_bytes_10463ae4((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,4);
    uVar11 = call_helper_with_four_bytes_10463b08((int)auStack_5e);
    write_word_to_struct_array(param_3,uVar11,5);
    free_if_flag_set_104638d8(auStack_5e,2);
    break;
  case 0xc:
    set_struct_field_at_offset_4(param_3,2);
    iVar7 = 0;
    iStack_e0 = 1;
    iStack_120 = 0;
    iStack_11c = 1;
    iStack_118 = 2;
    iVar17 = 3;
    do {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_d2[iStack_120] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_d2[iStack_11c] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_d2[iStack_118] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_d2[iVar17] = (char)uVar11;
      iVar15 = iVar7 + 1;
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ce[iStack_120] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ce[iStack_11c] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ce[iStack_118] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ce[iVar17] = (char)uVar11;
      iVar15 = iVar7 + 2;
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ca[iStack_120] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ca[iStack_11c] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ca[iStack_118] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_ca[iVar17] = (char)uVar11;
      iVar7 = iVar7 + 3;
      iStack_120 = iStack_120 + 0xc;
      iVar17 = iVar17 + 0xc;
      iStack_118 = iStack_118 + 0xc;
      iStack_11c = iStack_11c + 0xc;
      iStack_e0 = iStack_e0 + -1;
    } while (-1 < iStack_e0);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,6);
    uStack_ba = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,6);
    uStack_b9 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,7);
    uStack_b8 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,7);
    uStack_b7 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,8);
    uStack_b6 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,8);
    uStack_b5 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,9);
    uStack_b4 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,9);
    uStack_b3 = (char)uVar11;
    iVar7 = call_helper_with_offset_and_length(*(int **)(param_1 + 8),auStack_d2,(int)&uStack_b2);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    puVar18[3] = uStack_b2;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_af,(uint)bStack_b0,(uint)bStack_b1,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,0);
    puVar18[3] = uStack_ae;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_ab,(uint)bStack_ac,(uint)bStack_ad,puVar18[3]);
    iStack_104 = 1;
    goto LAB_104980cc;
  case 0xd:
    set_struct_field_at_offset_4(param_3,7);
    iVar7 = 0;
    iStack_ec = 1;
    iStack_12c = 0;
    iStack_128 = 1;
    iVar17 = 2;
    iStack_124 = 3;
    do {
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_aa[iStack_12c] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_aa[iStack_128] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_aa[iVar17] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar7);
      auStack_aa[iStack_124] = (char)uVar11;
      iVar15 = iVar7 + 1;
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a6[iStack_12c] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a6[iStack_128] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a6[iVar17] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a6[iStack_124] = (char)uVar11;
      iVar15 = iVar7 + 2;
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a2[iStack_12c] = (char)((uint)uVar11 >> 0x18);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a2[iStack_128] = (char)((uint)uVar11 >> 0x10);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a2[iVar17] = (char)((uint)uVar11 >> 8);
      uVar11 = read_struct_field_at_index_1046c7ca(param_3,iVar15);
      auStack_a2[iStack_124] = (char)uVar11;
      iVar7 = iVar7 + 3;
      iStack_12c = iStack_12c + 0xc;
      iVar17 = iVar17 + 0xc;
      iStack_124 = iStack_124 + 0xc;
      iStack_128 = iStack_128 + 0xc;
      iStack_ec = iStack_ec + -1;
    } while (-1 < iStack_ec);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,6);
    uStack_92 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,6);
    uStack_91 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,7);
    abStack_90[0] = (byte)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,7);
    abStack_90[1] = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,8);
    abStack_90[2] = (byte)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,8);
    abStack_90[3] = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,9);
    abStack_8c[0] = (byte)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,9);
    abStack_8c[1] = (char)uVar11;
    iVar7 = call_helper_with_offset_and_size_104635c0(*(int **)(param_1 + 8),auStack_aa,(int)abStack_90);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    iStack_104 = 0;
    iStack_100 = 1;
    iStack_114 = 0;
    iStack_110 = 3;
    iStack_10c = 2;
    iStack_108 = 1;
    iVar7 = iStack_114;
    iVar17 = iStack_110;
    iVar15 = iStack_10c;
    iVar6 = iStack_108;
    do {
      iStack_108 = iVar6;
      iStack_10c = iVar15;
      iStack_110 = iVar17;
      iStack_114 = iVar7;
      bVar2 = abStack_90[iStack_110];
      bVar3 = abStack_90[iStack_10c];
      bVar4 = abStack_90[iStack_108];
      puVar18[3] = abStack_90[iStack_114];
      uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,(uint)bVar4,puVar18[3]);
      write_word_to_struct_array(param_3,uVar14,iStack_104);
      bVar2 = abStack_8c[iStack_110];
      bVar3 = abStack_8c[iStack_10c];
      bVar4 = abStack_8c[iStack_108];
      puVar18[3] = abStack_8c[iStack_114];
      uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,(uint)bVar4,puVar18[3]);
      write_word_to_struct_array(param_3,uVar14,iStack_104 + 1);
      bVar2 = abStack_88[iStack_110];
      bVar3 = abStack_88[iStack_10c];
      bVar4 = abStack_88[iStack_108];
      puVar18[3] = abStack_88[iStack_114];
      uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,(uint)bVar4,puVar18[3]);
      write_word_to_struct_array(param_3,uVar14,iStack_104 + 2);
      iStack_104 = iStack_104 + 3;
      iStack_100 = iStack_100 + -1;
      iVar7 = iStack_114 + 0xc;
      iVar17 = iStack_110 + 0xc;
      iVar15 = iStack_10c + 0xc;
      iVar6 = iStack_108 + 0xc;
    } while (-1 < iStack_100);
    bVar2 = abStack_84[iStack_110];
    bVar3 = abStack_84[iStack_10c];
    bVar4 = abStack_84[iStack_108];
    puVar18[3] = abStack_84[iStack_114];
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bVar2,(uint)bVar3,(uint)bVar4,puVar18[3]);
    goto LAB_104980cc;
  case 0xe:
    set_struct_field_at_offset_4(param_3,2);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    uStack_74 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    uStack_73 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,2);
    uStack_72 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,2);
    uStack_71 = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,3);
    uStack_70 = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,3);
    uStack_6f = (char)uVar11;
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,4);
    uStack_6e = (uint8_t)((uint)uVar11 >> 8);
    uVar11 = read_struct_field_at_index_1046c7ca(param_3,4);
    uStack_6d = (char)uVar11;
    iVar7 = call_helper_with_offset_args_104635d6(*(int **)(param_1 + 8),&uStack_74,(int)&uStack_6c);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    puVar18[3] = uStack_6c;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_69,(uint)bStack_6a,(uint)bStack_6b,puVar18[3]);
    write_word_to_struct_array(param_3,uVar14,0);
    puVar18[3] = uStack_68;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_65,(uint)bStack_66,(uint)bStack_67,puVar18[3]);
    iStack_104 = 1;
    goto LAB_104980cc;
  case 0xf:
    set_struct_field_at_offset_4(param_3,1);
    piVar16 = *(int **)(param_1 + 8);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar7 = call_helper_with_stack_param_104635ec(piVar16,uVar14 & 0xff,(int)&bStack_64);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_63,(uint)bStack_64,0,puVar18[3]);
    iStack_104 = 0;
    goto LAB_104980cc;
  case 0x10:
    set_struct_field_at_offset_4(param_3,1);
    piVar16 = *(int **)(param_1 + 8);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar7 = call_helper_with_offset_args_10463608(piVar16,uVar14 & 0xff,(int)&bStack_62);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    puVar18[3] = 0;
    uVar14 = pack_four_bytes_big_endian_1042b9ee(param_1,(uint)bStack_61,(uint)bStack_62,0,puVar18[3]);
    iStack_104 = 0;
LAB_104980cc:
    write_word_to_struct_array(param_3,uVar14,iStack_104);
    break;
  case 0x12:
    set_struct_field_at_offset_4(param_3,0);
    piVar16 = *(int **)(param_1 + 8);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar7 = write_two_bytes_to_buffer(piVar16,uVar14 & 0xffff);
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 0x13:
    set_struct_field_at_offset_4(param_3,0);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar7 = send_two_word_command(*(int **)(param_1 + 8),uVar14 & 0xffff,uVar12 & 0xffff);
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 0x14:
    set_struct_field_at_offset_4(param_3,0);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar12 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar13 = read_struct_field_at_index_1046c7ca(param_3,2);
    iVar7 = pack_two_u16_into_buffer(*(int **)(param_1 + 8),uVar14 & 0xffff,uVar12 & 0xffff,uVar13 & 0xffff);
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 0x15:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_53(*(int **)(param_1 + 8));
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    break;
  case 0x16:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_fixed_args_104632c0(*(int **)(param_1 + 8));
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    else {
      uStack_f8 = 0;
    }
    break;
  case 0x17:
    set_struct_field_at_offset_4(param_3,0);
    iVar7 = call_helper_with_fixed_args_104632d8(*(int **)(param_1 + 8));
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    break;
  case 0x18:
    set_struct_field_at_offset_4(param_3,0);
    alloc_and_zero_16_bytes_10463790(auStack_18);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    store_big_endian_word_104637e4(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,1);
    write_two_bytes_to_offset_104637f0(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,2);
    write_two_bytes_to_struct_104637fe(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,3);
    write_two_bytes_to_offset_1046380c(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,4);
    write_two_bytes_at_offset_8(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,5);
    write_two_bytes_to_offset_10(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,6);
    write_two_bytes_to_offset_0xc_10463836(auStack_18,uVar14 & 0xffff);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,7);
    write_two_bytes_to_offset_14_10463844(auStack_18,uVar14 & 0xffff);
    iVar7 = call_helper_with_zeroed_flag(*(int **)(param_1 + 8));
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    free_if_flag_set_104637cc(auStack_18,2);
    break;
  case 0x19:
    set_struct_field_at_offset_4(param_3,0);
    piVar16 = *(int **)(param_1 + 8);
    uVar14 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar7 = call_helper_with_offset_args_10463316(piVar16,uVar14 & 0xff);
    uStack_f8 = 0;
    if (iVar7 == 0) {
      uStack_f8 = 0x82;
    }
    break;
  default:
  case 5:
  case 7:
  case 0x11:
    uStack_f8 = 0x81;
  }
  return uStack_f8;
}
