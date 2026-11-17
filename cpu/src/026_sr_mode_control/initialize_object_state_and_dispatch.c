/* @k10d initialize_object_state_and_dispatch @ 0x1036e9fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * initialize_object_state_and_dispatch(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_b0 [8];
  uint32_t uStack_80;
  uint32_t auStack_74 [4];
  uint8_t auStack_64 [92];
  
  puVar7 = (uint32_t *)auStack_b0;
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if ((iVar1 != 0) || (iVar1 = check_two_object_flags_1036f1c8(param_1), iVar1 == 0)) {
    uVar2 = get_or_create_singleton_object_1036c796();
    piVar3 = (int *)read_array_element_bounded(uVar2,1);
    return piVar3;
  }
  *(uint8_t *)(param_1 + 0x2e) = 0;
  *(uint8_t *)((int)param_1 + 0xb9) = 0;
  *(uint8_t *)((int)param_1 + 0xc5) = 0;
  *(uint8_t *)((int)param_1 + 0xc6) = 0;
  *(uint8_t *)((int)param_1 + 199) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  iVar1 = get_setting_0x70_with_refresh((int *)0x800158d4/*SDRAM*/);
  if (iVar1 == 0) {
    param_1[0x2c] = 0;
  }
  else {
    iVar1 = get_setting_0x70_with_refresh((int *)0x800158d4/*SDRAM*/);
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = get_setting_0x70_with_refresh((int *)0x800158d4/*SDRAM*/);
      if (iVar1 == 2) {
        iVar1 = 2;
      }
      else {
        iVar1 = get_setting_0x70_with_refresh((int *)0x800158d4/*SDRAM*/);
        if (iVar1 != 3) goto LAB_1036eaa8;
        iVar1 = 3;
      }
    }
    param_1[0x2c] = iVar1;
  }
LAB_1036eaa8:
  iVar1 = get_setting_0x81_with_refresh((int *)0x800158d4/*SDRAM*/);
  if (iVar1 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    iVar1 = get_setting_0x81_with_refresh((int *)0x800158d4/*SDRAM*/);
    if (iVar1 == 1) {
      param_1[0x2d] = 1;
    }
  }
  initialize_mode_context_block(param_1);
  iVar1 = check_and_process_event_1036f41a(param_1);
  if (iVar1 == 1) {
    *puVar7 = 0x80015af0/*SDRAM*/;
    puVar7[1] = 0x800158dc/*SDRAM*/;
    iVar1 = retry_operation_five_times_1036f156((int)param_1,1,param_1 + 0x2a,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
    if (iVar1 == 0) {
      *puVar7 = 0x80015af0/*SDRAM*/;
      puVar7[1] = 0x800158dc/*SDRAM*/;
      retry_operation_five_times_1036f156((int)param_1,2,param_1 + 0x2a,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
      iVar1 = *param_1;
      goto LAB_1036ec24;
    }
  }
  else if (iVar1 == 2) {
    copy_two_words_from_param2((int)auStack_74,-0x7ffea510);
    if (DAT_800043a0/*SDRAM*/ == '\0') {
      uStack_80 = 5;
    }
    else {
      uStack_80 = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
    }
    alloc_and_zero_struct_104bb416((void *)auStack_64);
    uVar4 = return_first_word_1045c514(param_1 + 0x2a);
    uVar5 = read_struct_field_at_offset_4(param_1 + 0x2a);
    uVar6 = return_first_word_1045c514(auStack_74);
    uVar2 = read_struct_field_at_offset_4(auStack_74);
    *(short *)((int)puVar7 + 2) = (short)uVar2;
    *(uint16_t *)((int)puVar7 + 6) = 100;
    dispatch_six_param_object_ops(auStack_64,uVar4 & 0xffff,uVar5 & 0xffff,uVar6 & 0xffff,
                 *(uint16_t *)((int)puVar7 + 2),*(uint16_t *)((int)puVar7 + 6));
    transform_and_store_value(auStack_64,uStack_80);
    reset_object_fields_and_call_base((void *)0x80015d04/*SDRAM*/);
    *puVar7 = 3;
    retry_virtual_call_until_success_1036f0fe((int)param_1,(int)auStack_64,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar7);
    destroy_five_member_objects(auStack_64,2);
    free_heap_if_flagged_1045c402(auStack_74,2);
  }
  iVar1 = *param_1;
LAB_1036ec24:
  (**(code **)(iVar1 + 0x44))((int)*(short *)(iVar1 + 0x40) + (int)param_1);
  release_object_at_offset_0x2c_1036f2b4(param_1);
  iVar1 = check_setting_0x72_enabled((void *)0x800158d4/*SDRAM*/);
  dispatch_event_with_state_check_1036f384(param_1,iVar1);
  request_ui_sync_code_4((void *)param_1[0xb]);
  if ((iRam80015b08 != 2) || (cRam80015d00 == '\0')) {
    clear_two_flags_and_init_subobj(param_1);
  }
  return param_1;
}
