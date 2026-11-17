/* @k10d dispatch_mode_transition_request_1042e884 @ 0x1042e884
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 110_io_control_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_mode_transition_request_1042e884(uint32_t *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ushort uVar10;
  uint uVar5;
  uint32_t *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint32_t uVar11;
  uintptr_t sp;
  int aiStack_1c [3];
  uint8_t auStack_10 [8];
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field(param_1[0x1a],1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (((!bVar2) && (cVar1 != '\0')) && (cVar1 != '\x01')) {
    return 0x84;
  }
  switch(cVar1) {
  case '\0':
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_10433180();
    iVar7 = *(int *)(iVar3 + 4);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    puVar6 = param_1 + 0x1d;
    eventflag_clr_flg(puVar6,1);
    iVar3 = mode_ctrl_execute_action(iVar7,(int)puVar6,1,iVar3 != 0);
    if (iVar3 == 0) {
      return 0x82;
    }
    twai_flg_obj(puVar6,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    return 0;
  case '\x01':
    set_struct_field_at_offset_4(param_3,4);
    puVar6 = (uint32_t *)add_eight_to_param(param_3);
    build_status_word_from_flags((int)param_1,puVar6);
    break;
  case '\x02':
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = add_eight_to_param(param_3);
    copy_twelve_words((int)(param_1 + 2),iVar3);
    break;
  case '\x03':
    set_struct_field_at_offset_4(param_3,0x10);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar3 == 1) {
      invert_twelve_words_in_place((int)(param_1 + 2));
    }
    else if (iVar3 == 2) {
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,1);
      mask_fourteen_words_with_mask((int)(param_1 + 2),uVar4);
    }
    else if (iVar3 == 3) {
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,1);
      set_bits_in_four_structs((int)(param_1 + 2),uVar4);
    }
    else if (iVar3 == 4) {
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,1);
      add_scalar_to_four_ints((int)(param_1 + 2),iVar3);
    }
    else if (iVar3 == 5) {
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,1);
      subtract_scalar_from_four_ints((int)(param_1 + 2),iVar3);
    }
    iVar3 = add_eight_to_param(param_3);
    copy_48_bytes((int)(param_1 + 2),iVar3);
    break;
  case '\x04':
    set_struct_field_at_offset_4(param_3,2);
    puVar6 = param_1 + 0x12;
    uVar11 = return_kernel_object_id_104592a4(puVar6);
    write_word_to_struct_array(param_3,uVar11,0);
    uVar4 = return_kernel_object_id_104592e2(puVar6);
    uVar5 = get_kernel_object_id(puVar6);
    uVar5 = uVar5 & 0xffff;
    iVar3 = 1;
    goto LAB_1042ead0;
  case '\x05':
    return 0x81;
  case '\x06':
    set_struct_field_at_offset_4(param_3,1);
    uVar10 = return_global_word_104592ce();
    uVar5 = return_global_word_104592d8(param_1 + 0x12);
    iVar3 = 0;
    uVar4 = (uint)uVar10;
LAB_1042ead0:
    write_word_to_struct_array(param_3,uVar4 << 0x10 | uVar5,iVar3);
    break;
  case '\a':
    set_struct_field_at_offset_4(param_3,1);
    cls_105a6f84_new(aiStack_1c);
    copy_eight_bytes_from_struct(param_1[0x18],aiStack_1c);
    uVar11 = invoke_virtual_slot_two_104609c8(aiStack_1c);
    write_word_to_struct_array(param_3,uVar11,0);
    cls_105a6f84_delete(aiStack_1c,2);
    return 0;
  case '\b':
    puVar6 = (uint32_t *)add_eight_to_param(param_3);
    iVar3 = serialize_object_fields_to_buffer((int)param_1,puVar6);
    set_struct_field_at_offset_4(param_3,iVar3);
    break;
  case '\t':
    iVar3 = read_virtual_property_field(param_1[0x1a],2);
    iVar7 = read_virtual_property_field(param_1[0x1a],0xd);
    iVar8 = read_virtual_property_field(param_1[0x1a],0x15);
    read_virtual_property_field(param_1[0x1a],0xb);
    cls_105a6eac_new(auStack_10);
    copy_four_bytes_from_struct_field_1045e59a(param_1[0x18],auStack_10);
    iVar9 = extract_field_by_index_10460366(auStack_10,0);
    if (((((iVar9 == 7) || (iVar9 == 8)) || ((iVar9 == 9 || ((iVar9 == 10 || (iVar9 == 0xb)))))) ||
        (iVar9 == 0xc)) || (((iVar3 == 1 || (iVar7 == 1)) || (iVar8 == 1)))) {
      uVar11 = 0x82;
    }
    else {
      set_struct_field_at_offset_4(param_3,0);
      iVar3 = get_or_init_singleton_10433180();
      iVar7 = *(int *)(iVar3 + 4);
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
      if (iVar3 == 1) {
        iVar3 = 4;
      }
      else if (iVar3 == 2) {
        iVar3 = 2;
      }
      else if (iVar3 == 3) {
        iVar3 = 1;
      }
      else {
        if (iVar3 != 4) {
          uVar11 = 0x83;
          goto LAB_1042eca0;
        }
        iVar3 = 0;
      }
      puVar6 = param_1 + 0x1d;
      eventflag_clr_flg(puVar6,2);
      iVar3 = dispatch_mode_transition_10430fa2(iVar7,(int)puVar6,2,iVar3);
      if (iVar3 == 0) {
        uVar11 = 0x82;
      }
      else {
        twai_flg_obj(puVar6,2,(void *)0x0,_DAT_105a2af0/*ROM*/);
        uVar11 = 0;
      }
    }
LAB_1042eca0:
    cls_105a6eac_delete(auStack_10,2);
    return uVar11;
  default:
    return 0x81;
  }
  return 0;
}
