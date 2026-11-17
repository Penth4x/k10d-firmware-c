/* @k10d dispatch_mode_command_1042bce0 @ 0x1042bce0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042bf3e) overlaps instruction at (ram,0x1042bf3c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_mode_command_1042bce0(int param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((void *)(param_1 + 0x18),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    uVar4 = add_eight_to_param(param_3);
    uVar4 = read_two_values_from_object_1042d8a4(param_1,(void *)uVar4);
    set_struct_field_at_offset_4(param_3,uVar4);
    iVar3 = 0;
    break;
  case 1:
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    if (iVar3 == 1) {
      uVar4 = 1;
    }
    else if (iVar3 == 2) {
      uVar4 = 2;
    }
    else if (iVar3 == 3) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),1);
    iVar5 = send_cpucom_command_1045cfdc((void *)(param_1 + 0x1c),(void *)(param_1 + 8),1,uVar4);
    iVar3 = 0;
    if (iVar5 == 0) {
      iVar3 = 0x82;
    }
    if (iVar3 == 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x2c),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      uVar4 = add_eight_to_param(param_3);
      uVar4 = read_two_values_from_object_1042d8a4(param_1,(void *)uVar4);
      set_struct_field_at_offset_4(param_3,uVar4);
    }
    break;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    uVar4 = *(uint32_t *)(param_1 + 0x24);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = dispatch_sr_command(uVar4,iVar3 != 0,0);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 5:
    iVar3 = read_virtual_property_field((void *)(param_1 + 0x18),2);
    if ((iVar3 == 0) && (iVar3 = read_virtual_property_field((void *)(param_1 + 0x18),0), iVar3 == 2)) {
      iVar3 = **(int **)(param_1 + 0x28);
      iVar3 = (**(code **)(iVar3 + 0x44))
                        ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar3 + 0x40));
      if (iVar3 == 0) {
        iVar3 = 0x82;
      }
      else {
        iVar3 = **(int **)(param_1 + 0x28);
        iVar3 = (**(code **)(iVar3 + 0x4c))
                          ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar3 + 0x48),param_2,
                           param_3);
      }
    }
    else {
      iVar3 = 0x82;
    }
    break;
  case 6:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = process_event_with_lock_104b7b50(*(uint32_t *)(param_1 + 0x24),1);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 7:
    set_struct_field_at_offset_4(param_3,0);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),1);
    iVar3 = send_cpucom_command_sequence_1046132a((void *)(param_1 + 0x14),(void *)(param_1 + 8));
    iVar5 = 0;
    if (iVar3 == 0) {
      iVar5 = 0x82;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = 1;
    goto code_r0x1042c150;
  case 8:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = process_event_with_lock_104b7b50(*(uint32_t *)(param_1 + 0x24),0);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 10:
    set_struct_field_at_offset_4(param_3,0);
    uVar4 = *(uint32_t *)(param_1 + 0x24);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = dispatch_sr_command(uVar4,iVar3 != 0,1);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0xb:
    set_struct_field_at_offset_4(param_3,1);
    cls_105a6eac_new((void *)auStack_10);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0xc),auStack_10);
    iVar3 = extract_field_by_index_10460366(auStack_10,0x14);
    write_word_to_struct_array(param_3,iVar3,0);
    cls_105a6eac_delete((void *)auStack_10,2);
    iVar3 = 0;
    break;
  case 0xc:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = dispatch_mode_transition_104b7d7a(*(uint32_t *)(param_1 + 0x24),iVar3 != 0);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0xd:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    iVar3 = dispatch_mode_transition_104b7d7a(*(uint32_t *)(param_1 + 0x24),uVar4);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0x11:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_create_singleton_object_104bb22a();
    iVar3 = init_and_start_timer_object(*(uint32_t *)(iVar3 + 8));
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0x12:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 0xff;
    }
    iVar3 = call_helper_with_stack_param_10462cb2(*(int **)(param_1 + 0x20),uVar4);
    if (iVar3 == 0) {
      iVar3 = 0x82;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0x13:
    set_struct_field_at_offset_4(param_3,0);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),2);
    uVar4 = *(uint32_t *)(param_1 + 0x14);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = send_cpucom_command_sequence_10461b02((void *)uVar4,(void *)(param_1 + 8),iVar3 != 0);
    iVar5 = 0;
    if (iVar3 == 0) {
      iVar5 = 0x82;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = 2;
code_r0x1042c150:
    iVar3 = 0;
    twai_flg_obj((uint32_t *)(param_1 + 0x2c),uVar4,(void *)0x0,_DAT_105a2af0/*ROM*/);
    break;
  default:
  case 2:
  case 3:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
    iVar3 = 0x83;
  }
  return iVar3;
}
