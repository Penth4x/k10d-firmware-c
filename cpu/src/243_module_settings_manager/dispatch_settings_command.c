/* @k10d dispatch_settings_command @ 0x104d1070
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_settings_command(cls_105b9bd0 *param_1,uint32_t param_2,int param_3)

{
  uint8_t uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar6;
  bool bVar7;
  uint32_t uVar5;
  int iVar8;
  uint32_t uVar9;
  void *pvVar10;
  uintptr_t sp;
  uint32_t *puVar11;
  uint8_t auStack_64 [4];
  
  puVar11 = (uint32_t *)auStack_64;
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar2 = read_virtual_property_field((int *)(param_1->field_0x18),(int)(1));
  bVar7 = false;
  if ((iVar2 == 2) || (iVar2 == 3)) {
    bVar7 = true;
  }
  if (!bVar7) {
    return 0x84;
  }
  switch(uVar1) {
  case 1:
    set_struct_field_at_offset_4(param_3,0);
    iVar2 = get_or_init_singleton_10433180();
    iVar2 = *(int *)(iVar2 + 4);
    eventflag_clr_flg(&param_1->field_0x10,1);
    iVar2 = set_mode_flag_and_update_ctrl(iVar2,(int)&param_1->field_0x10,1,5);
    goto joined_r0x104d11fe;
  case 2:
    set_struct_field_at_offset_4(param_3,0);
    iVar2 = get_or_init_singleton_10433180();
    iVar2 = *(int *)(iVar2 + 4);
    eventflag_clr_flg(&param_1->field_0x10,1);
    iVar2 = set_mode_flag_and_update_ctrl(iVar2,(int)&param_1->field_0x10,1,6);
    goto joined_r0x104d11fe;
  case 3:
    set_struct_field_at_offset_4(param_3,0);
    iVar2 = get_or_init_singleton_10433180();
    iVar2 = *(int *)(iVar2 + 4);
    eventflag_clr_flg(&param_1->field_0x10,1);
    iVar2 = set_mode_flag_and_update_ctrl(iVar2,(int)&param_1->field_0x10,1,7);
    goto joined_r0x104d11fe;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    iVar2 = get_or_init_singleton_10433180();
    iVar2 = *(int *)(iVar2 + 4);
    eventflag_clr_flg(&param_1->field_0x10,1);
    iVar2 = set_mode_flag_and_update_ctrl(iVar2,(int)&param_1->field_0x10,1,8);
joined_r0x104d11fe:
    if (iVar2 == 0) {
      return 0x82;
    }
    twai_flg_obj(&param_1->field_0x10,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    return 0;
  case 5:
    set_struct_field_at_offset_4(param_3,0);
    iVar2 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar5 = dispatch_two_ops_on_subobject((int)(param_1),(uint32_t)(iVar2 != 0));
    return uVar5;
  case 6:
    set_struct_field_at_offset_4(param_3,1);
    bVar7 = check_object_field_via_helper((void *)(param_1->field_0x8));
    if (bVar7) {
      settings_refresh_working_copy((void *)(param_1->field_0x8));
    }
    iVar2 = check_settings_block_at_offset((int)param_1->field_0x8);
    uVar4 = (uint)(iVar2 != 0);
    iVar2 = 0;
    goto LAB_104d1296;
  case 7:
    set_struct_field_at_offset_4(param_3,0);
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = add_eight_to_param(param_3);
    forward_field_to_helper((int)(pvVar10),(int *)(uVar5));
    break;
  case 8:
    bVar7 = check_object_field_via_helper((void *)(param_1->field_0x8));
    if (bVar7) {
      settings_refresh_working_copy((void *)(param_1->field_0x8));
    }
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    piVar3 = (int *)add_eight_to_param(param_3);
    uVar5 = forward_field_and_param_104850b8((int)pvVar10,piVar3);
    goto LAB_104d130e;
  case 9:
    set_struct_field_at_offset_4(param_3,0);
    bVar7 = check_field_at_offset_0x18((int)param_1);
    if (!bVar7) {
      return 0x82;
    }
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_two_struct_fields((int)(pvVar10),(uint16_t)(uVar4 & 0xffff));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,1);
    call_helper_on_two_pointers_10484a28((int)(pvVar10),(uint32_t)(uVar5),(int)(0));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,2);
    call_helper_on_two_pointers_10484a54((int)(pvVar10),(uint32_t)(uVar5),(int)(0));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,3);
    forward_params_to_two_objects((int)(pvVar10),(uint32_t)(uVar5),(int)(0));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,4);
    call_helper_on_two_pointers_10484a28((int)(pvVar10),(uint32_t)(uVar5),(int)(1));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,5);
    call_helper_on_two_pointers_10484a54((int)(pvVar10),(uint32_t)(uVar5),(int)(1));
    pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,6);
    forward_params_to_two_objects((int)(pvVar10),(uint32_t)(uVar5),(int)(1));
    return 0;
  case 10:
    set_struct_field_at_offset_4(param_3,7);
    bVar7 = check_object_field_via_helper((void *)(param_1->field_0x8));
    if (bVar7) {
      settings_refresh_working_copy((void *)(param_1->field_0x8));
    }
    uVar5 = read_field_at_offset_0x14((int)param_1->field_0x8);
    write_word_to_struct_array(param_3,uVar5,0);
    uVar5 = call_helper_with_offset_arg_10484d74((int)param_1->field_0x8,0);
    write_word_to_struct_array(param_3,uVar5,1);
    uVar5 = call_helper_with_offset_arg_10484d88((int)param_1->field_0x8,0);
    write_word_to_struct_array(param_3,uVar5,2);
    uVar5 = call_helper_with_offset_arg_10484d9c((int)param_1->field_0x8,0);
    write_word_to_struct_array(param_3,uVar5,3);
    uVar5 = call_helper_with_offset_arg_10484d74((int)param_1->field_0x8,1);
    write_word_to_struct_array(param_3,uVar5,4);
    uVar5 = call_helper_with_offset_arg_10484d88((int)param_1->field_0x8,1);
    write_word_to_struct_array(param_3,uVar5,5);
    uVar4 = call_helper_with_offset_arg_10484d9c((int)param_1->field_0x8,1);
    iVar2 = 6;
    goto LAB_104d1296;
  case 0xb:
    set_struct_field_at_offset_4(param_3,0);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar2 = read_struct_field_at_index_1046c7ca(param_3,1);
    bVar7 = check_field_at_offset_0x18((int)param_1);
    if (!bVar7) {
      return 0x82;
    }
    switch(uVar5) {
    case 0:
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,2);
      call_helper_on_two_pointers_10484b00(pvVar10,iVar2,0,(short)uVar5);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,3);
      call_helper_on_two_pointers_10484b00(pvVar10,iVar2,1,(short)uVar5);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,4);
      call_helper_on_two_pointers_10484b00(pvVar10,iVar2,2,(short)uVar5);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,5);
      call_helper_on_two_pointers_10484b00(pvVar10,iVar2,3,(short)uVar5);
      return 0x81;
    case 1:
    case 2:
      goto switchD_104d181a_caseD_1;
    case 3:
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,2);
      *puVar11 = 0;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,0,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,3);
      *puVar11 = 0;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,1,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,4);
      *puVar11 = 0;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,2,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,5);
      *puVar11 = 0;
      break;
    case 4:
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,2);
      *puVar11 = 1;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,0,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,3);
      *puVar11 = 1;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,1,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,4);
      *puVar11 = 1;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,2,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,5);
      *puVar11 = 1;
      break;
    case 5:
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,2);
      *puVar11 = 2;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,0,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,3);
      *puVar11 = 2;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,1,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,4);
      *puVar11 = 2;
      call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,2,uVar4 & 0xffff,*puVar11);
      pvVar10 = (void *)((uintptr_t)(param_1->field_0x8));
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,5);
      *puVar11 = 2;
      break;
    default:
      return 0x83;
    }
    call_helper_on_two_pointers_10484b60((int)pvVar10,iVar2,3,uVar4 & 0xffff,*puVar11);
    return 0x81;
  case 0xc:
    set_struct_field_at_offset_4(param_3,4);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar2 = read_struct_field_at_index_1046c7ca(param_3,1);
    switch(uVar5) {
    case 0:
      uVar6 = call_method_at_offset_0x14((void *)(param_1->field_0x8),(int)(iVar2),(int)(0));
      write_word_to_struct_array(param_3,(uint)uVar6,0);
      uVar6 = call_method_at_offset_0x14((void *)(param_1->field_0x8),(int)(iVar2),(int)(1));
      write_word_to_struct_array(param_3,(uint)uVar6,1);
      uVar6 = call_method_at_offset_0x14((void *)(param_1->field_0x8),(int)(iVar2),(int)(2));
      write_word_to_struct_array(param_3,(uint)uVar6,2);
      uVar6 = call_method_at_offset_0x14((void *)(param_1->field_0x8),(int)(iVar2),(int)(3));
      goto LAB_104d19d0;
    case 1:
    case 2:
      goto switchD_104d181a_caseD_1;
    case 3:
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(0),(int)(0));
      write_word_to_struct_array(param_3,(uint)uVar6,0);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(1),(int)(0));
      write_word_to_struct_array(param_3,(uint)uVar6,1);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(2),(int)(0));
      write_word_to_struct_array(param_3,(uint)uVar6,2);
      iVar8 = 0;
      break;
    case 4:
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(0),(int)(1));
      write_word_to_struct_array(param_3,(uint)uVar6,0);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(1),(int)(1));
      write_word_to_struct_array(param_3,(uint)uVar6,1);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(2),(int)(1));
      write_word_to_struct_array(param_3,(uint)uVar6,2);
      iVar8 = 1;
      break;
    case 5:
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(0),(int)(2));
      write_word_to_struct_array(param_3,(uint)uVar6,0);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(1),(int)(2));
      write_word_to_struct_array(param_3,(uint)uVar6,1);
      uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(2),(int)(2));
      write_word_to_struct_array(param_3,(uint)uVar6,2);
      iVar8 = 2;
      break;
    default:
      return 0x83;
    }
    uVar6 = forward_call_with_offset((void *)(param_1->field_0x8),(int)(iVar2),(int)(3),(int)(iVar8));
LAB_104d19d0:
    write_word_to_struct_array(param_3,(uint)uVar6,3);
    return 0x81;
  case 0xd:
    set_struct_field_at_offset_4(param_3,0);
    bVar7 = check_field_at_offset_0x18((int)param_1);
    if (!bVar7) {
      return 0x82;
    }
    iVar2 = read_struct_field_at_index_1046c7ca(param_3,0);
    write_fill_pattern_word_105208c6((uint32_t *)(param_1->field_0x1c),(int)(iVar2 != 0));
    write_magic_to_offset_0x104(param_1->field_0x1c,iVar2 != 0);
    break;
  case 0xe:
    set_struct_field_at_offset_4(param_3,1);
    iVar2 = check_magic_word_pair((int *)(param_1->field_0x1c));
    uVar4 = (uint)(iVar2 != 0);
    iVar2 = 0;
LAB_104d1296:
    write_word_to_struct_array(param_3,uVar4,iVar2);
    break;
  case 0xf:
    set_struct_field_at_offset_4(param_3,0);
    bVar7 = check_field_at_offset_0x18((int)param_1);
    if (!bVar7) {
      return 0x82;
    }
    uVar9 = param_1->field_0x1c;
    uVar5 = add_eight_to_param(param_3);
    copy_64_bytes_from_words(uVar9,uVar5);
    break;
  case 0x10:
    uVar9 = param_1->field_0x1c;
    uVar5 = add_eight_to_param(param_3);
    uVar5 = expand_bytes_to_words(uVar9,uVar5);
LAB_104d130e:
    set_struct_field_at_offset_4(param_3,uVar5);
    break;
  default:
switchD_104d181a_caseD_1:
    return 0x81;
  }
  return 0;
}
