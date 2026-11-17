/* @k10d dispatch_sensor_readout_mode @ 0x10429d28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Dispatches sensor data readout based on a mode byte, copying pixel data to a
 *   destination buffer.
 * summary:
 *   Reads a mode selector from param_3+0x859 and validates a status code from
 *   read_virtual_property_field. Depending on the mode (0-7), it initializes a temporary
 *   buffer object, calls a mode-specific data retrieval function, and copies the resulting
 *   bytes into param_3 via write_word_to_struct_array. Modes 0-3 handle bulk pixel data (48
 *   or 24 bytes), while modes 4-7 handle single-byte or specific status reads.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_sensor_readout_mode(int param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t *puVar4;
  byte bVar8;
  uint8_t *puVar5;
  uint uVar6;
  uint32_t uVar7;
  uintptr_t sp;
  uint32_t auStack_f0 [19];
  uint32_t auStack_a4 [19];
  uint8_t auStack_58 [32];
  uint8_t auStack_38 [32];
  uint8_t auStack_18 [14];
  ushort uStack_a;
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x14)),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4(param_3,0x45);
    puVar4 = auStack_f0;
    cls_105a6cfc_new((uint32_t *)__frv_reg_unset(4));
    copy_0x45_byte_block(*(int *)(param_1 + 0xc),puVar4);
    uVar6 = 0;
    iVar3 = 0x16;
    do {
      bVar8 = read_byte_and_mask_1045fd04(auStack_f0,uVar6 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6);
      bVar8 = read_byte_and_mask_1045fd04(auStack_f0,uVar6 + 1 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 1);
      bVar8 = read_byte_and_mask_1045fd04(auStack_f0,uVar6 + 2 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 2);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 + 3;
    } while (-1 < iVar3);
    goto LAB_10429ebe;
  case 1:
    set_struct_field_at_offset_4(param_3,0x45);
    puVar4 = auStack_a4;
    cls_105a6cfc_new((uint32_t *)__frv_reg_unset(4));
    call_virtual_slot_and_forward_result_104633ec((void *)(*(uint32_t *)(param_1 + 0x10)),puVar4);
    uVar6 = 0;
    iVar3 = 0x16;
    do {
      bVar8 = read_byte_and_mask_1045fd04(auStack_a4,uVar6 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6);
      bVar8 = read_byte_and_mask_1045fd04(auStack_a4,uVar6 + 1 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 1);
      bVar8 = read_byte_and_mask_1045fd04(auStack_a4,uVar6 + 2 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 2);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 + 3;
    } while (-1 < iVar3);
LAB_10429ebe:
    cls_105a6cfc_delete(puVar4,2);
    return 0;
  case 2:
    set_struct_field_at_offset_4(param_3,0x1b);
    puVar5 = auStack_58;
    cls_105a6ef4_new((uint32_t *)__frv_reg_unset(4));
    copy_27_bytes_to_buffer(*(int *)(param_1 + 0xc),puVar5);
    uVar6 = 0;
    iVar3 = 8;
    do {
      bVar8 = read_byte_and_mask_1046059c(auStack_58,uVar6 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6);
      bVar8 = read_byte_and_mask_1046059c(auStack_58,uVar6 + 1 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 1);
      bVar8 = read_byte_and_mask_1046059c(auStack_58,uVar6 + 2 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 2);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 + 3;
    } while (-1 < iVar3);
    goto LAB_1042a008;
  case 3:
    set_struct_field_at_offset_4(param_3,0x1b);
    puVar5 = auStack_38;
    cls_105a6ef4_new((uint32_t *)__frv_reg_unset(4));
    call_virtual_slot_and_forward_result_1046341e((void *)(*(uint32_t *)(param_1 + 0x10)),(uint32_t *)puVar5);
    uVar6 = 0;
    iVar3 = 8;
    do {
      bVar8 = read_byte_and_mask_1046059c(auStack_38,uVar6 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6);
      bVar8 = read_byte_and_mask_1046059c(auStack_38,uVar6 + 1 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 1);
      bVar8 = read_byte_and_mask_1046059c(auStack_38,uVar6 + 2 & 0xff,0xff);
      write_word_to_struct_array(param_3,(uint)bVar8,uVar6 + 2);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 + 3;
    } while (-1 < iVar3);
LAB_1042a008:
    cls_105a6ef4_delete((uint32_t *)puVar5,2);
    return 0;
  case 4:
    set_struct_field_at_offset_4(param_3,1);
    uStack_a = 0;
    uVar7 = *(uint32_t *)(param_1 + 0x10);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    read_two_byte_value_104634a0((void *)uVar7,uVar6 & 0xff,&uStack_a);
    write_word_to_struct_array(param_3,(uint)uStack_a,0);
    break;
  case 5:
    uVar7 = *(uint32_t *)(param_1 + 0x10);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    call_helper_with_stack_param_104630f2((void *)uVar7,uVar6 & 0xff);
    break;
  case 6:
    uVar7 = *(uint32_t *)(param_1 + 0x10);
    uVar6 = read_struct_field_at_index_1046c7ca(param_3,0);
    call_helper_with_offset_args_10463110((void *)uVar7,uVar6 & 0xff);
    break;
  case 7:
    set_struct_field_at_offset_4(param_3,2);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x18),1);
    iVar3 = forward_three_args_to_helper_1045e82c(*(int *)(param_1 + 0xc),(void *)(param_1 + 8),0x18);
    if (iVar3 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x18),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      cls_105a70ec_new((uint32_t *)auStack_18);
      copy_six_bytes_from_struct(*(int *)(param_1 + 0xc),auStack_18);
      uVar7 = read_pair_from_buffer(auStack_18,2);
      write_word_to_struct_array(param_3,uVar7,0);
      uVar7 = read_pair_from_buffer(auStack_18,3);
      write_word_to_struct_array(param_3,uVar7,1);
      cls_105a70ec_delete((uint32_t *)auStack_18,2);
      return 0;
    }
    return 0x82;
  default:
    return 0x83;
  }
  return 0;
}
