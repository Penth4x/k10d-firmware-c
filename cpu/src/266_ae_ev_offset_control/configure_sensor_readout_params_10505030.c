/* @k10d configure_sensor_readout_params_10505030 @ 0x10505030
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_params_10505030(int param_1,int param_2,void *param_3,uint32_t *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t uVar10;
  int iVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_2c [4];
  
  puVar13 = auStack_2c;
  iVar7 = read_struct_field_by_flag_10506006(param_1,param_2);
  uVar8 = read_struct_field_by_flag_10506012(param_1,param_2);
  uVar10 = 2;
  iVar12 = 0;
  switch(*param_4) {
  case 0:
    uVar10 = 0;
    iVar12 = 0x80;
    goto switchD_1050506e_default;
  case 1:
    uVar10 = 0;
    iVar12 = 0xc0;
    goto switchD_1050506e_default;
  case 2:
    uVar10 = 2;
    iVar12 = 0;
    goto switchD_1050506e_default;
  case 3:
    uVar10 = 4;
    iVar12 = 2;
    goto switchD_1050506e_default;
  case 4:
    uVar10 = 4;
    iVar12 = 4;
    goto switchD_1050506e_default;
  case 5:
    uVar10 = 4;
    iVar12 = 5;
    goto switchD_1050506e_default;
  case 6:
    uVar10 = 6;
    iVar12 = 3;
    goto switchD_1050506e_default;
  case 7:
    uVar10 = 6;
    iVar12 = 1;
    goto switchD_1050506e_default;
  case 8:
    uVar10 = 0x28;
    break;
  case 9:
    uVar10 = 0x48;
    break;
  case 10:
    uVar10 = 0x68;
    goto LAB_105050e8;
  case 0xb:
    uVar10 = 0x38;
    break;
  case 0xc:
    uVar10 = 0x58;
    break;
  case 0xd:
    uVar10 = 0x78;
    goto LAB_105050e8;
  case 0xe:
    uVar10 = 0x2a;
    break;
  case 0xf:
    uVar10 = 0x4a;
    break;
  case 0x10:
    uVar10 = 0x6a;
    goto LAB_105050e8;
  case 0x11:
    uVar10 = 0x3a;
    break;
  case 0x12:
    uVar10 = 0x5a;
    break;
  case 0x13:
    uVar10 = 0x7a;
    goto LAB_105050e8;
  case 0x14:
    uVar10 = 0x2c;
    break;
  case 0x15:
    uVar10 = 0x4c;
    break;
  case 0x16:
    uVar10 = 0x6c;
    goto LAB_105050e8;
  case 0x17:
    uVar10 = 0x3c;
    break;
  case 0x18:
    uVar10 = 0x5c;
    break;
  case 0x19:
    uVar10 = 0x7c;
LAB_105050e8:
    iVar12 = 7;
  default:
    goto switchD_1050506e_default;
  }
  iVar12 = 6;
switchD_1050506e_default:
  set_bits_in_object_field(iVar7,uVar10);
  set_object_flag_bits_10457874(uVar8,iVar12);
  set_flag_bit_in_object_field_1045757c(iVar7,*(uint8_t *)(param_4 + 1));
  write_masked_ushort_pair_to_object(iVar7,*(uint16_t *)((int)param_4 + 10),*(uint16_t *)(param_4 + 3));
  write_masked_values_to_object(iVar7,*(uint16_t *)((int)param_4 + 6),*(uint16_t *)(param_4 + 2));
  write_masked_value_to_object_field_1045763a(iVar7,param_4[8]);
  write_masked_value_to_struct_offset_1045764e(iVar7,param_4[9]);
  write_masked_value_to_struct_field_10457662(iVar7,param_4[10]);
  write_masked_value_to_struct_offset_10457676(iVar7,param_4[0xb]);
  write_masked_value_to_object_offset_1045769e(iVar7,param_4[4]);
  write_masked_value_to_object_field_104576b2(iVar7,param_4[5]);
  write_masked_value_to_object_field_104576c6(iVar7,param_4[6]);
  write_masked_word_to_heap_offset(iVar7,param_4[7]);
  set_bit5_in_word_at_offset_0x10(uVar8,0);
  write_masked_value_to_object_field_1045790e(uVar8,*(uint16_t *)((int)param_4 + 0x32));
  write_masked_word_to_struct(uVar8,*(uint16_t *)(param_4 + 0xc));
  write_masked_value_to_struct_field_10457952(uVar8,*(uint16_t *)((int)param_4 + 0x36));
  write_masked_word_to_object_field_10457974(uVar8,*(uint16_t *)(param_4 + 0xd));
  write_masked_word_to_object_field_10457996(uVar8,*(uint16_t *)((int)param_4 + 0x3a));
  write_masked_word_to_object_field_104579b8(uVar8,*(uint16_t *)(param_4 + 0xe));
  update_object_flag_bits_104579da(uVar8,*(uint8_t *)(param_4 + 0xf),*(uint16_t *)(param_4 + 0x10));
  update_object_flag_bits_10457a18(uVar8,*(uint8_t *)((int)param_4 + 0x3d),*(uint16_t *)((int)param_4 + 0x42));
  update_object_flag_bits_10457a56(uVar8,*(uint8_t *)((int)param_4 + 0x3e),*(uint16_t *)(param_4 + 0x11));
  update_object_flag_bits_10457a90(uVar8,*(uint8_t *)((int)param_4 + 0x3f),*(uint16_t *)((int)param_4 + 0x46));
  iVar11 = param_4[0x12];
  if (iVar11 != 0) {
    iVar9 = get_offset_from_struct(uVar8);
    iVar4 = 0;
    iVar6 = 0x3f;
    do {
      *(uint8_t *)(iVar4 + iVar9) = *(uint8_t *)(iVar4 + iVar11);
      *(uint8_t *)(iVar4 + 1 + iVar9) = *(uint8_t *)(iVar4 + 1 + iVar11);
      iVar5 = iVar4 + 3;
      *(uint8_t *)(iVar4 + 2 + iVar9) = *(uint8_t *)(iVar4 + 2 + iVar11);
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + -1;
      *(uint8_t *)(iVar5 + iVar9) = *(uint8_t *)(iVar5 + iVar11);
    } while (-1 < iVar6);
  }
  iVar11 = param_4[0x13];
  if (iVar11 != 0) {
    iVar9 = get_heap_block_size(uVar8);
    iVar4 = 0;
    iVar6 = 0x3f;
    do {
      *(uint8_t *)(iVar4 + iVar9) = *(uint8_t *)(iVar4 + iVar11);
      *(uint8_t *)(iVar4 + 1 + iVar9) = *(uint8_t *)(iVar4 + 1 + iVar11);
      iVar5 = iVar4 + 3;
      *(uint8_t *)(iVar4 + 2 + iVar9) = *(uint8_t *)(iVar4 + 2 + iVar11);
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + -1;
      *(uint8_t *)(iVar5 + iVar9) = *(uint8_t *)(iVar5 + iVar11);
    } while (-1 < iVar6);
  }
  iVar11 = param_4[0x14];
  if (iVar11 != 0) {
    iVar9 = get_offset_from_object(uVar8);
    iVar4 = 0;
    iVar6 = 0x3f;
    do {
      *(uint8_t *)(iVar4 + iVar9) = *(uint8_t *)(iVar4 + iVar11);
      *(uint8_t *)(iVar4 + 1 + iVar9) = *(uint8_t *)(iVar4 + 1 + iVar11);
      iVar5 = iVar4 + 3;
      *(uint8_t *)(iVar4 + 2 + iVar9) = *(uint8_t *)(iVar4 + 2 + iVar11);
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + -1;
      *(uint8_t *)(iVar5 + iVar9) = *(uint8_t *)(iVar5 + iVar11);
    } while (-1 < iVar6);
  }
  iVar11 = param_4[0x15];
  if (iVar11 != 0) {
    iVar9 = read_field_at_offset_0x10_10458144(uVar8);
    iVar4 = 0;
    iVar6 = 0x3f;
    do {
      *(uint8_t *)(iVar4 + iVar9) = *(uint8_t *)(iVar4 + iVar11);
      *(uint8_t *)(iVar4 + 1 + iVar9) = *(uint8_t *)(iVar4 + 1 + iVar11);
      iVar5 = iVar4 + 3;
      *(uint8_t *)(iVar4 + 2 + iVar9) = *(uint8_t *)(iVar4 + 2 + iVar11);
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + -1;
      *(uint8_t *)(iVar5 + iVar9) = *(uint8_t *)(iVar5 + iVar11);
    } while (-1 < iVar6);
  }
  write_low_nibble_to_object_field(uVar8,*(uint16_t *)(param_4 + 0x16));
  write_low_byte_to_struct_field(uVar8,*(uint16_t *)((int)param_4 + 0x5a));
  write_byte_to_object_field_10457b80(uVar8,*(uint16_t *)(param_4 + 0x17));
  write_low_byte_to_object_field(uVar8,*(uint16_t *)((int)param_4 + 0x5e));
  write_byte_to_object_offset(uVar8,*(uint16_t *)(param_4 + 0x18));
  write_two_bytes_to_object_offset_10457bec(uVar8,*(uint16_t *)((int)param_4 + 0x62),*(uint16_t *)(param_4 + 0x19));
  write_two_masked_words_to_struct(uVar8,*(uint16_t *)((int)param_4 + 0x66),*(uint16_t *)(param_4 + 0x1a));
  write_byte_to_subobject_offset_0x58(uVar8,*(uint16_t *)((int)param_4 + 0x6a));
  uVar1 = *(ushort *)(param_4 + 0x1b);
  uVar2 = *(ushort *)((int)param_4 + 0x6e);
  uVar3 = *(ushort *)(param_4 + 0x1c);
  *(uint16_t *)(puVar13 + 2) = *(uint16_t *)((int)param_4 + 0x72);
  write_packed_nibble_word(iVar7,uVar1,uVar2,uVar3,*(ushort *)(puVar13 + 2));
  if ((param_4[0x1d] != 0) && (iVar12 - 2U < 6)) {
                    /* WARNING: Could not recover jumptable at 0x105053e8. Too many branches */
    (**(code **)((iVar12 - 2U) * 4 + 0x105d5034/*ROM*/))();
    return;
  }
  set_object_mode_flags(param_1,param_2,(int)param_3);
  return;
}
