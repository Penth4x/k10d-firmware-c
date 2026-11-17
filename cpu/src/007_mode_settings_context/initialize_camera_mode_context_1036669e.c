/* @k10d initialize_camera_mode_context_1036669e @ 0x1036669e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * initialize_camera_mode_context_1036669e(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  uint32_t uVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  bool bVar9;
  uint8_t auStack_1c [4];
  int iStack_c;
  
  puVar8 = auStack_1c;
  *(uint8_t *)(param_1 + 5) = 0;
  *(uint8_t *)((int)param_1 + 0x15) = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  iStack_c = 5;
  iVar1 = query_state_and_flag_range(param_1,&iStack_c);
  if (iVar1 != 0) {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar7 = 1;
    goto code_r0x10366974;
  }
  if (iStack_c == 1) {
    init_object_with_sram_ref_10367096(param_1,6);
    return param_1;
  }
  iVar1 = process_event_and_return_field_1036bb6e(param_1,0xffffffff);
  if (iVar1 != 1) {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar7 = 1;
    goto code_r0x10366974;
  }
  param_1[6] = 1;
  uVar2 = refresh_and_read_setting_0x78((int *)0x800158d4/*SDRAM*/);
  *(char *)(param_1 + 0x15) = (char)uVar2;
  uVar2 = get_setting_0x79_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)((int)param_1 + 0x55) = (char)uVar2;
  uVar2 = get_setting_0x7a_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)((int)param_1 + 0x56) = (char)uVar2;
  uVar2 = get_setting_0x7b_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)((int)param_1 + 0x57) = (char)uVar2;
  uVar2 = get_setting_0x7c_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)(param_1 + 0x16) = (char)uVar2;
  uVar2 = get_setting_0x7d_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)((int)param_1 + 0x59) = (char)uVar2;
  uVar2 = get_setting_0x7e_with_refresh((int *)0x800158d4/*SDRAM*/);
  *(char *)((int)param_1 + 0x5a) = (char)uVar2;
  uVar3 = init_sram_block_and_store_param(param_1);
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar3 = 0;
  dispatch_event_and_return_offset(param_1,param_1 + 0x1a,uVar2);
  iVar4 = read_field_at_offset_100((int)param_1);
  pvVar5 = (void *)param_1[0x1a];
  iVar1 = *(int *)((int)pvVar5 + 8);
  if (iVar4 == 0xb) {
    if ((((iVar1 == 0) || (iVar1 == 1)) && (iVar1 = read_struct_field_at_index_104c2890(pvVar5,0x28), iVar1 == 1)) &&
       (iVar1 = read_struct_field_at_index_104c2890((void *)param_1[0x1a],0x29), iVar1 == 1)) {
      reset_object_fields_and_call_base(param_1 + 0x1b);
      bVar9 = dispatch_mode_state_update_10367558(param_1);
      uVar3 = (uint)bVar9;
    }
    if (uVar3 == 0) {
      puVar8[3] = 0;
      register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,1,0,0,puVar8[3]);
      call_helper_on_struct_field_1036c46c();
      call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
      write_second_field_of_struct(param_1,0);
      uVar3 = poll_and_dispatch_event(param_1);
      write_second_field_of_struct(param_1,1);
    }
    bVar9 = uVar3 == 0;
    if (*(char *)(param_1 + 5) == '\0') {
      if (!bVar9) goto LAB_103668ea;
      uVar2 = 0x11;
      goto LAB_103668e6;
    }
  }
  else {
    if ((iVar1 == 0) || (iVar1 == 1)) {
      iVar1 = read_struct_field_at_index_104c2890(pvVar5,0x28);
      if ((iVar1 == 1) && (iVar1 = read_struct_field_at_index_104c2890((void *)param_1[0x1a],0x29), iVar1 == 1)) {
        reset_object_fields_and_call_base(param_1 + 0x1b);
        bVar9 = dispatch_mode_state_update_10367558(param_1);
        uVar3 = (uint)bVar9;
      }
      if ((uVar3 == 0) && (*(char *)(param_1 + 5) == '\0')) {
        uVar2 = 0x12;
        goto LAB_103668e6;
      }
    }
    else {
      if ((iVar1 == 2) || (iVar1 == 3)) {
        uVar2 = 10;
      }
      else {
        uVar2 = 0x12;
      }
LAB_103668e6:
      init_object_with_sram_ref_10367096(param_1,uVar2);
    }
LAB_103668ea:
    bVar9 = uVar3 == 0;
  }
  if (!bVar9) {
    set_object_flags_via_virtual_calls(param_1 + 8,0);
    transition_mode_state(param_1 + 8,param_1[6]);
    dispatch_six_mode_cases(param_1);
    read_two_shorts_from_param2_103674ca(param_1,param_1 + 0xa0);
    init_object_with_offset_field_10366c8a(param_1);
  }
  if (param_1[7] == 0) {
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      iVar1 = read_field_at_offset_100((int)param_1);
      if (iVar1 != 0xb) {
        (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1);
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar7 = 2;
code_r0x10366974:
        piVar6 = (int *)read_array_element_bounded(uVar2,uVar7);
        return piVar6;
      }
      forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
    }
  }
  else {
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
  }
  if (uVar3 == 0) {
    return param_1;
  }
  write_second_field_via_helper_1036c486(param_1,180000);
  write_second_field_of_struct(param_1,0);
  return param_1;
}
