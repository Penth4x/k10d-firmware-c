/* @k10d dispatch_mode_data_transfer @ 0x1042a958
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Selects a data transfer mode based on a status flag and copies 12 or 28 bytes from a
 *   source object to a destination buffer.
 * summary:
 *   The function reads a mode selector from param_3 and checks a status code from
 *   read_virtual_property_field. If the status is 2 or 3, it dispatches to one of eight
 *   cases. Each case initializes a specific object, calls a helper to populate a stack
 *   buffer, and then loops to copy 12 or 28 bytes to param_3 via
 *   write_word_to_struct_array. It returns 0 on success or specific error codes (0x82,
 *   0x83, 0x84) on failure or invalid mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_data_transfer(cls_1059e728 *param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  cls_105a6abc acStack_c4 [5];
  cls_105a6d44 acStack_b0 [5];
  cls_105a6dd4 acStack_9c [5];
  cls_105a6e1c acStack_88 [5];
  cls_105a6bdc acStack_74 [9];
  cls_105a6c24 acStack_50 [9];
  cls_105a6b94 acStack_2c [9];
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(param_1->field_0x10),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    switch(uVar1) {
    case 0:
      set_struct_field_at_offset_4(param_3,0x10);
      cls_105a6abc_new(acStack_c4);
      copy_buffer_with_lock_1045e22a(param_1->field_0x8,acStack_c4);
      uVar5 = 0;
      iVar3 = 3;
      do {
        bVar4 = read_byte_and_mask_1045f2ec(acStack_c4,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_byte_and_mask_1045f2ec(acStack_c4,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_byte_and_mask_1045f2ec(acStack_c4,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_byte_and_mask_1045f2ec(acStack_c4,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6abc_delete(acStack_c4,2);
      uVar6 = 0;
      break;
    case 1:
      set_struct_field_at_offset_4(param_3,0x10);
      cls_105a6d44_new(acStack_b0);
      copy_fourteen_bytes_to_buffer(param_1->field_0x8,acStack_b0);
      uVar5 = 0;
      iVar3 = 3;
      do {
        bVar4 = read_and_mask_byte_1045fe48(acStack_b0,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_and_mask_byte_1045fe48(acStack_b0,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_and_mask_byte_1045fe48(acStack_b0,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_and_mask_byte_1045fe48(acStack_b0,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6d44_delete(acStack_b0,2);
      uVar6 = 0;
      break;
    case 2:
      set_struct_field_at_offset_4(param_3,0x10);
      cls_105a6dd4_new(acStack_9c);
      copy_buffer_with_lock_1045e4d4(param_1->field_0x8,acStack_9c);
      uVar5 = 0;
      iVar3 = 3;
      do {
        bVar4 = read_masked_byte_at_offset_104600b4(acStack_9c,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_masked_byte_at_offset_104600b4(acStack_9c,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_masked_byte_at_offset_104600b4(acStack_9c,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_masked_byte_at_offset_104600b4(acStack_9c,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6dd4_delete(acStack_9c,2);
      uVar6 = 0;
      break;
    case 3:
      set_struct_field_at_offset_4(param_3,0x10);
      cls_105a6e1c_new(acStack_88);
      copy_fourteen_bytes_from_struct(param_1->field_0x8,acStack_88);
      uVar5 = 0;
      iVar3 = 3;
      do {
        bVar4 = read_masked_byte_at_offset_1046019a(acStack_88,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_masked_byte_at_offset_1046019a(acStack_88,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_masked_byte_at_offset_1046019a(acStack_88,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_masked_byte_at_offset_1046019a(acStack_88,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6e1c_delete(acStack_88,2);
      uVar6 = 0;
      break;
    case 4:
      set_struct_field_at_offset_4(param_3,0x20);
      cls_105a6bdc_new(acStack_74);
      copy_32_bytes_from_struct_field_1045e322(param_1->field_0x8,acStack_74);
      uVar5 = 0;
      iVar3 = 7;
      do {
        bVar4 = read_byte_and_mask_1045f872(acStack_74,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_byte_and_mask_1045f872(acStack_74,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_byte_and_mask_1045f872(acStack_74,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_byte_and_mask_1045f872(acStack_74,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6bdc_delete(acStack_74,2);
      uVar6 = 0;
      break;
    case 5:
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = call_helper_with_offset_and_nine((int *)param_1->field_0xc);
      if (iVar3 == 0) {
        uVar6 = 0x82;
      }
      else {
        uVar6 = 0;
      }
      break;
    case 6:
      set_struct_field_at_offset_4(param_3,0x20);
      cls_105a6c24_new(acStack_50);
      copy_32_bytes_from_struct_field_1045e360(param_1->field_0x8,acStack_50);
      uVar5 = 0;
      iVar3 = 7;
      do {
        bVar4 = read_byte_and_mask_1045f994(acStack_50,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_byte_and_mask_1045f994(acStack_50,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_byte_and_mask_1045f994(acStack_50,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_byte_and_mask_1045f994(acStack_50,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6c24_delete(acStack_50,2);
      uVar6 = 0;
      break;
    case 7:
      set_struct_field_at_offset_4(param_3,0x20);
      cls_105a6b94_new(acStack_2c);
      copy_32_bytes_from_struct_field_1045e2e4(param_1->field_0x8,acStack_2c);
      uVar5 = 0;
      iVar3 = 7;
      do {
        bVar4 = read_byte_and_mask_1045f750(acStack_2c,uVar5 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5);
        bVar4 = read_byte_and_mask_1045f750(acStack_2c,uVar5 + 1 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 1);
        bVar4 = read_byte_and_mask_1045f750(acStack_2c,uVar5 + 2 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 2);
        bVar4 = read_byte_and_mask_1045f750(acStack_2c,uVar5 + 3 & 0xff,0xff);
        write_word_to_struct_array(param_3,(uint)bVar4,uVar5 + 3);
        iVar3 = iVar3 + -1;
        uVar5 = uVar5 + 4;
      } while (-1 < iVar3);
      cls_105a6b94_delete(acStack_2c,2);
      uVar6 = 0;
      break;
    default:
      uVar6 = 0x83;
    }
  }
  else {
    uVar6 = 0x84;
  }
  return uVar6;
}
