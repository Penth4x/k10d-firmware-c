/* @k10d dispatch_lens_comm_command @ 0x104e80f4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Dispatches a two-byte command code to read or write lens data via the KAF interface.
 * summary:
 *   The function reads a command type and sub-command from param_3, then branches on these
 *   values to perform specific lens operations. It uses set_struct_field_at_offset_4 to set
 *   the expected response length, read_struct_field_at_index_1046c7ca to read response
 *   bytes, and write_word_to_struct_array to write request bytes. Specific cases handle
 *   reading/writing focus distance, aperture values, and lens identification data, with
 *   some branches updating internal state at param_1+0x38.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e812c) overlaps instruction at (ram,0x104e812a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_lens_comm_command(cls_105c1610 *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint32_t uVar9;
  ushort uVar10;
  int iVar11;
  void *pvVar12;
  uintptr_t sp;
  uint32_t *puVar13;
  uint8_t auStack_6c [4];
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint uStack_18;
  
  puVar13 = (uint32_t *)auStack_6c;
  cVar1 = *(char *)(param_3 + 0x858);
  cVar2 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  uVar4 = 0x81;
  if (cVar1 != '\x02') {
    param_1->field_0x184 = param_2;
    if (cVar1 != '\x03') {
      if (cVar1 != '\x10') {
        return 0x81;
      }
      if (cVar2 != '\x05') {
        return 0x81;
      }
      iVar11 = param_1->field_0x38;
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      iVar11 = wait_for_sensor_ready_and_trigger(iVar11,uVar4);
      if (iVar11 == 0) {
        return 0x82;
      }
      goto LAB_104e8df4;
    }
    switch(cVar2) {
    case '\0':
      set_struct_field_at_offset_4(param_3,0);
      iVar6 = param_1->field_0x38;
      iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
      *(bool *)(iVar6 + 0x1570) = iVar11 != 0;
      break;
    case '\x01':
      set_struct_field_at_offset_4(param_3,1);
      uVar7 = 1;
      if (*(char *)(param_1->field_0x38 + 0x1570) == '\0') {
        uVar7 = 0;
      }
      goto LAB_104e8d86;
    case '\x02':
      iVar11 = sr_driver_singleton();
      module_array_getter(*(void **)(iVar11 + 4),8);
      uVar4 = return_sram_address_0x8001e320();
      uVar9 = read_struct_field_at_index_1046c7ca(param_3,0);
      store_value_at_offset_four_10435b50(uVar4,uVar9);
      break;
    case '\x03':
      set_struct_field_at_offset_4(param_3,1);
      iVar11 = sr_driver_singleton();
      module_array_getter(*(void **)(iVar11 + 4),8);
      iVar11 = return_sram_address_0x8001e320();
      uVar7 = get_field_at_offset_four_10435b56(iVar11);
      goto LAB_104e8d86;
    case '\x04':
      iVar11 = sr_driver_singleton();
      module_array_getter(*(void **)(iVar11 + 4),9);
      uVar4 = return_sram_address_104357ec();
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,0);
      write_two_bytes_at_offset_four_1043561e(uVar4,uVar7 & 0xffff);
      uVar4 = return_sram_address_104357ec();
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,1);
      write_two_bytes_to_offset_six_10435624(uVar4,uVar7 & 0xffff);
      uVar4 = return_sram_address_104357ec();
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,2);
      write_two_bytes_at_offset_eight_1043562a(uVar4,uVar7 & 0xffff);
      uVar4 = return_sram_address_104357ec();
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,3);
      store_two_bytes_at_offset_ten(uVar4,uVar7 & 0xffff);
      break;
    case '\x05':
      set_struct_field_at_offset_4(param_3,4);
      iVar11 = sr_driver_singleton();
      module_array_getter(*(void **)(iVar11 + 4),9);
      iVar11 = return_sram_address_104357ec();
      uVar10 = read_offset_four_10435660(iVar11);
      write_word_to_struct_array(param_3,(uint)uVar10,0);
      iVar11 = return_sram_address_104357ec();
      uVar10 = read_offset_six_word_10435666(iVar11);
      write_word_to_struct_array(param_3,(uint)uVar10,1);
      iVar11 = return_sram_address_104357ec();
      uVar10 = read_offset_eight_word(iVar11);
      write_word_to_struct_array(param_3,(uint)uVar10,2);
      iVar11 = return_sram_address_104357ec();
      uVar10 = read_offset_10_field(iVar11);
      uVar7 = (uint)uVar10;
      goto LAB_104e8cf0;
    case '\x06':
      set_struct_field_at_offset_4(param_3,4);
      iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
      if (iVar11 == 0xff) {
        iVar11 = *(int *)(param_1->field_0x38 + 0x15d0);
      }
      iVar11 = forward_field_and_param_104e8f54((int)param_1,iVar11);
      if (iVar11 == 0) {
        return 0x82;
      }
      write_word_to_struct_array(param_3,*(uint32_t *)(*(int *)(iVar11 + 0x7e4) + 0x28),0);
      write_word_to_struct_array(param_3,*(uint32_t *)(*(int *)(iVar11 + 0x7e4) + 0x2c),1);
      write_word_to_struct_array(param_3,*(uint32_t *)(*(int *)(iVar11 + 0x7e4) + 0x30),2);
      uVar7 = *(uint *)(*(int *)(iVar11 + 0x7e4) + 0x34);
      goto LAB_104e8cf0;
    case '\a':
      set_struct_field_at_offset_4(param_3,4);
      iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
      if (iVar11 == 0xff) {
        iVar11 = *(int *)(param_1->field_0x38 + 0x15d0);
      }
      iVar11 = forward_field_and_param_104e8f54((int)param_1,iVar11);
      if (iVar11 == 0) {
        write_word_to_struct_array(param_3,0,0);
        write_word_to_struct_array(param_3,0,1);
        write_word_to_struct_array(param_3,0,2);
        iVar11 = 3;
        goto LAB_104e8244;
      }
      write_word_to_struct_array(param_3,(uint)*(ushort *)(iVar11 + 0x624),0);
      write_word_to_struct_array(param_3,(uint)*(ushort *)(iVar11 + 0x626),1);
      write_word_to_struct_array(param_3,(uint)*(ushort *)(iVar11 + 0x628),2);
      uVar7 = (uint)*(ushort *)(iVar11 + 0x62a);
LAB_104e8cf0:
      iVar11 = 3;
      goto LAB_104e8182;
    case '\b':
      set_struct_field_at_offset_4(param_3,0);
      iVar6 = param_1->field_0x38;
      iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
      *(bool *)(iVar6 + 0x1571) = iVar11 == 0;
      break;
    case '\t':
      set_struct_field_at_offset_4(param_3,1);
      if (*(char *)(param_1->field_0x38 + 0x1571) == '\0') {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
LAB_104e8d86:
      iVar11 = 0;
      goto LAB_104e8182;
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x10':
    case '\x11':
    case '\x12':
      goto LAB_104e8dfa;
    case '\x0f':
      set_struct_field_at_offset_4(param_3,2);
      uVar7 = *(uint *)(param_1->field_0x38 + 0x14e8);
      write_word_to_struct_array(param_3,*(uint32_t *)(param_1->field_0x38 + 0x14e4),0);
      goto LAB_104e8dbe;
    default:
      goto LAB_104e8dfa;
    }
    goto LAB_104e8df4;
  }
  param_1->field_0x184 = param_2;
  switch(cVar2) {
  case '\0':
    set_struct_field_at_offset_4(param_3,2);
    uVar4 = call_helper_with_offset_0x38_104e8f3c((int)param_1);
    write_word_to_struct_array(param_3,uVar4,0);
    uVar7 = return_constant_0x1ff((uint32_t)(param_1));
    goto LAB_104e8dbe;
  case '\x01':
    set_struct_field_at_offset_4(param_3,0);
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar11 == 0xff) {
      iVar11 = *(int *)(param_1->field_0x38 + 0x15d0);
    }
    iVar11 = forward_field_and_param_104e8f54((int)param_1,iVar11);
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,1);
    iVar5 = read_struct_field_at_index_1046c7ca(param_3,2);
    if ((iVar6 == 7) || (iVar6 == 9)) {
      uVar4 = 0xb;
    }
    else if (iVar6 == 8) {
      uVar4 = 0xc;
    }
    else if (iVar6 == 0) {
      uVar4 = 0;
    }
    else if (iVar6 == 1) {
      uVar4 = 1;
    }
    else if (iVar6 == 2) {
      if (iVar5 == 0) {
        uVar4 = 2;
      }
      else if (iVar5 == 1) {
        uVar4 = 3;
      }
      else {
        uVar4 = 4;
      }
    }
    else if (iVar6 == 3) {
      if (iVar5 == 0) {
        uVar4 = 5;
      }
      else if (iVar5 == 1) {
        uVar4 = 6;
      }
      else {
        uVar4 = 7;
      }
    }
    else if (iVar6 == 4) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          uVar4 = 9;
        }
        else {
          uVar4 = 10;
        }
      }
      else {
        uVar4 = 8;
      }
    }
    else if (iVar5 != 0) {
      uVar4 = 3;
      if (iVar5 != 1) {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
    if (iVar11 == 0) {
      return 0x82;
    }
    iVar6 = read_struct_field_at_index_1046c7ca(param_3,3);
    uVar4 = initialize_mode_context((int)(param_1),(int *)(iVar11),(int)(uVar4),(int)(iVar6 != 0));
    return uVar4;
  case '\x02':
    set_struct_field_at_offset_4(param_3,2);
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar11 == 0xff) {
      iVar11 = *(int *)(param_1->field_0x38 + 0x15d0);
    }
    iVar11 = forward_field_and_param_104e8f54((int)param_1,iVar11);
    if (iVar11 == 0) {
      write_word_to_struct_array(param_3,0,0);
      iVar11 = 1;
LAB_104e8244:
      write_word_to_struct_array(param_3,0,iVar11);
      return 0x82;
    }
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x84),0);
    uVar7 = (uint)(*(int *)(iVar11 + 0x104) << 2) / 3;
    goto LAB_104e8dbe;
  case '\x03':
    set_struct_field_at_offset_4(param_3,0);
    if (param_1->field_0x180 != 0) {
      return 0x82;
    }
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar11 == 0xfe) {
      iVar11 = call_helper_with_offset_0x38_104e8f66((int)param_1);
      if (iVar11 == 0) {
        return 0x82;
      }
    }
    else {
      if (iVar11 == 0xff) {
        iVar11 = *(int *)(param_1->field_0x38 + 0x15d0);
      }
      iVar11 = call_helper_with_offset_0x38_104e9fae((int)param_1,iVar11);
      if (iVar11 == 0) {
        return 0x82;
      }
    }
    break;
  case '\x04':
    iVar6 = param_1->field_0x38;
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar9 = read_struct_field_at_index_1046c7ca(param_3,2);
    iVar6 = store_and_call_helper(iVar6,uVar4,iVar11,(short)uVar9);
    iVar11 = get_or_create_singleton_object_104fb12e();
    iVar11 = *(int *)(iVar11 + 0x78);
    set_struct_field_at_offset_4(param_3,0xe);
    write_word_to_struct_array(param_3,(uint)(iVar6 != 0),0);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x50),1);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x54),2);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x58),3);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x5c),4);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x40),5);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x44),6);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x48),7);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x4c),8);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x30),9);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x34),10);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x38),0xb);
    write_word_to_struct_array(param_3,*(uint32_t *)(iVar11 + 0x3c),0xc);
    uVar7 = 0x2b00;
    iVar11 = 0xd;
    goto LAB_104e8182;
  case '\x05':
    set_struct_field_at_offset_4(param_3,0);
    iVar6 = param_1->field_0x38;
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    *(bool *)(iVar6 + 0x1576) = iVar11 != 0;
    break;
  case '\x06':
    invoke_virtual_method_on_object_10419afe(param_1->field_0x38,&uStack_20);
    set_struct_field_at_offset_4(param_3,3);
    write_word_to_struct_array(param_3,uStack_20,0);
    write_word_to_struct_array(param_3,uStack_1c,1);
    iVar11 = 2;
    uVar7 = uStack_18;
    goto LAB_104e8182;
  case '\a':
    set_struct_field_at_offset_4(param_3,0);
    iVar11 = param_1->field_0x38;
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
    invoke_virtual_method_on_object_10419b48(iVar11,uVar4);
    break;
  case '\b':
    set_struct_field_at_offset_4(param_3,2);
    uVar4 = invoke_virtual_slot_10_10419b66(param_1->field_0x38);
    write_word_to_struct_array(param_3,uVar4,0);
    iVar11 = check_virtual_slot_15_result(param_1->field_0x38);
    uVar7 = (uint)(iVar11 != 0);
LAB_104e8dbe:
    iVar11 = 1;
    goto LAB_104e8182;
  case '\t':
    set_struct_field_at_offset_4(param_3,4);
    write_word_to_struct_array(param_3,0x3c,0);
    write_word_to_struct_array(param_3,0x14,1);
    write_word_to_struct_array(param_3,8,2);
    uVar7 = 4;
    goto LAB_104e8cf0;
  case '\n':
    set_struct_field_at_offset_4(param_3,1);
    iVar11 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar11 = forward_field_and_param_104e8f54((int)param_1,iVar11);
    if (iVar11 == 0) {
      uVar7 = 0;
    }
    else {
      iVar6 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar7 = read_struct_field_at_index_1046c7ca(param_3,2);
      uVar8 = read_struct_field_at_index_1046c7ca(param_3,3);
      (((vtbl_entry*)(*(int *)(iVar11 + 0x8d4)))[24].fn)
                (((vtbl_entry*)(*(int *)(iVar11 + 0x8d4)))[24].adj + iVar11,0,1,0);
      *(uint8_t *)(*(int *)(iVar11 + 0x7f8) + 0x38) = 0;
      field_setter(iVar11 + 0x2ac,0xd,9);
      *(uint8_t *)(*(int *)(iVar11 + 0x7f8) + 0xe1) = 1;
      *(uint8_t *)(*(int *)(iVar11 + 0x7f8) + 0xc0) = 1;
      *(bool *)(*(int *)(iVar11 + 0x7f8) + 0xc1) = iVar6 != 0;
      *(uint *)(*(int *)(iVar11 + 0x7f8) + 0xc4) = uVar7 & 0xffff;
      *(uint *)(*(int *)(iVar11 + 0x7f8) + 200) = uVar8 & 0xffff;
      *(uint32_t *)(iVar11 + 0x10) = 0x600001;
      *(uint32_t **)(iVar11 + 8) = &param_1->field_0x4;
      *(uint32_t *)(iVar11 + 0xc) = *(uint32_t *)(iVar11 + 0x7f8);
      *(int *)(iVar11 + 0x14) = iVar11;
      iVar6 = get_or_create_singleton_object_104fb12e();
      iVar6 = *(int *)(iVar6 + 0xc);
      puVar3 = &param_1->field_0x188;
      eventflag_clr_flg(puVar3,0x40);
      reg_framework_send(iVar6 + 8);
      eventflag_wai_flg(puVar3,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar3,0x40);
      cVar1 = *(char *)(*(int *)(iVar11 + 0x7f8) + 0x216c);
      if (cVar1 != '\0') {
        iVar6 = get_or_create_singleton_object_10485138();
        pvVar12 = *(void **)(iVar6 + 8);
        settings_refresh_working_copy(pvVar12);
        iVar6 = get_or_create_singleton_object_104fb12e();
        uVar7 = check_object_property_43(*(int *)(iVar6 + 0x74));
        if (uVar7 == 0) {
          call_helper_on_two_pointers_10484b00(pvVar12,0,0,*(uint16_t *)(*(int *)(iVar11 + 0x7f8) + 0x120));
          call_helper_on_two_pointers_10484b00(pvVar12,0,1,*(uint16_t *)(*(int *)(iVar11 + 0x7f8) + 0x126));
          call_helper_on_two_pointers_10484b00(pvVar12,0,2,*(uint16_t *)(*(int *)(iVar11 + 0x7f8) + 0x122));
          call_helper_on_two_pointers_10484b00(pvVar12,0,3,*(uint16_t *)(*(int *)(iVar11 + 0x7f8) + 0x124));
        }
        else {
          uVar10 = *(ushort *)(*(int *)(iVar11 + 0x7f8) + 0x120);
          *puVar13 = 0;
          call_helper_on_two_pointers_10484b60((int)pvVar12,0,0,(uint)uVar10,*puVar13);
          uVar10 = *(ushort *)(*(int *)(iVar11 + 0x7f8) + 0x126);
          *puVar13 = 0;
          call_helper_on_two_pointers_10484b60((int)pvVar12,0,1,(uint)uVar10,*puVar13);
          uVar10 = *(ushort *)(*(int *)(iVar11 + 0x7f8) + 0x122);
          *puVar13 = 0;
          call_helper_on_two_pointers_10484b60((int)pvVar12,0,2,(uint)uVar10,*puVar13);
          uVar10 = *(ushort *)(*(int *)(iVar11 + 0x7f8) + 0x124);
          *puVar13 = 0;
          call_helper_on_two_pointers_10484b60((int)pvVar12,0,3,(uint)uVar10,*puVar13);
        }
      }
      uVar7 = (uint)(cVar1 != '\0');
    }
    goto LAB_104e8d86;
  case '\v':
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    copy_six_fields_from_struct(param_1->field_0x38,&uStack_38);
    set_struct_field_at_offset_4(param_3,6);
    write_word_to_struct_array(param_3,uStack_38,0);
    write_word_to_struct_array(param_3,uStack_34,1);
    write_word_to_struct_array(param_3,uStack_30,2);
    write_word_to_struct_array(param_3,uStack_2c,3);
    write_word_to_struct_array(param_3,uStack_28,4);
    iVar11 = 5;
    uVar7 = uStack_24;
LAB_104e8182:
    write_word_to_struct_array(param_3,uVar7,iVar11);
    break;
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
  case '{':
  case '|':
  case '}':
  case '~':
  case '\x7f':
  case -0x80:
  case -0x7f:
  case -0x7e:
  case -0x7d:
  case -0x7c:
  case -0x7b:
  case -0x7a:
  case -0x79:
  case -0x78:
  case -0x77:
  case -0x76:
  case -0x75:
  case -0x74:
  case -0x73:
  case -0x72:
  case -0x71:
  case -0x70:
  case -0x6f:
  case -0x6e:
  case -0x6d:
  case -0x6c:
  case -0x6b:
  case -0x6a:
  case -0x69:
  case -0x68:
  case -0x67:
  case -0x66:
  case -0x65:
  case -100:
  case -99:
  case -0x62:
  case -0x61:
  case -0x60:
  case -0x5f:
  case -0x5e:
  case -0x5d:
  case -0x5c:
  case -0x5b:
  case -0x5a:
  case -0x59:
  case -0x58:
  case -0x57:
  case -0x56:
  case -0x55:
  case -0x54:
  case -0x53:
  case -0x52:
  case -0x51:
  case -0x50:
  case -0x4f:
  case -0x4e:
  case -0x4d:
  case -0x4c:
  case -0x4b:
  case -0x4a:
  case -0x49:
  case -0x48:
  case -0x47:
  case -0x46:
  case -0x45:
  case -0x44:
  case -0x43:
  case -0x42:
  case -0x41:
  case -0x40:
  case -0x3f:
  case -0x3e:
  case -0x3d:
  case -0x3c:
  case -0x3b:
  case -0x3a:
  case -0x39:
  case -0x38:
  case -0x37:
  case -0x36:
  case -0x35:
  case -0x34:
  case -0x33:
  case -0x32:
  case -0x31:
  case -0x30:
  case -0x2f:
  case -0x2e:
  case -0x2d:
  case -0x2c:
  case -0x2b:
  case -0x2a:
  case -0x29:
  case -0x28:
  case -0x27:
  case -0x26:
  case -0x25:
  case -0x24:
  case -0x23:
  case -0x22:
  case -0x21:
  case -0x20:
  case -0x1f:
  case -0x1e:
  case -0x1d:
  case -0x1c:
  case -0x1b:
  case -0x1a:
  case -0x19:
  case -0x18:
  case -0x17:
  case -0x16:
  case -0x15:
  case -0x14:
  case -0x13:
  case -0x12:
  case -0x11:
  case -0x10:
  case -0xf:
  case -0xe:
  case -0xd:
  case -0xc:
  case -0xb:
  case -10:
  case -9:
  case -8:
  case -7:
  case -6:
  case -5:
  case -4:
  case -3:
  case -2:
    goto LAB_104e8dfa;
  case -1:
    break;
  default:
    goto LAB_104e8dfa;
  }
LAB_104e8df4:
  uVar4 = 0;
LAB_104e8dfa:
  return uVar4;
}
