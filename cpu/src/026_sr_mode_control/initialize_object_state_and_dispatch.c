/* @k10d initialize_object_state_and_dispatch @ 0x1036e9fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557f3c * initialize_object_state_and_dispatch(cls_10557f3c *param_1)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557f3c *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *puVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_b0 [8];
  uint32_t uStack_80;
  uint32_t auStack_74 [4];
  uint8_t auStack_64 [92];
  
  puVar8 = (uint32_t *)auStack_b0;
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if ((iVar1 != 0) || (iVar1 = check_two_object_flags_1036f1c8(param_1), iVar1 == 0)) {
    uVar2 = get_or_create_singleton_object_1036c796();
    pcVar3 = (cls_10557f3c *)read_array_element_bounded(uVar2,1);
    return pcVar3;
  }
  param_1->field_0xb8 = 0;
  param_1->field_0xb9 = 0;
  param_1->field_0xc5 = 0;
  param_1->field_0xc6 = 0;
  param_1->field_0xc7 = 0;
  param_1->field_0xb0 = 0;
  param_1->field_0xb4 = 0;
  iVar1 = get_setting_0x70_with_refresh((int *)0x800158d4/*SDRAM*/);
  if (iVar1 == 0) {
    param_1->field_0xb0 = 0;
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
    param_1->field_0xb0 = iVar1;
  }
LAB_1036eaa8:
  iVar1 = get_setting_0x81_with_refresh((int *)0x800158d4/*SDRAM*/);
  if (iVar1 == 0) {
    param_1->field_0xb4 = 0;
  }
  else {
    iVar1 = get_setting_0x81_with_refresh((int *)0x800158d4/*SDRAM*/);
    if (iVar1 == 1) {
      param_1->field_0xb4 = 1;
    }
  }
  initialize_mode_context_block(param_1);
  iVar1 = check_and_process_event_1036f41a(param_1);
  if (iVar1 == 1) {
    *puVar8 = 0x80015af0/*SDRAM*/;
    puVar8[1] = 0x800158dc/*SDRAM*/;
    iVar1 = retry_operation_five_times_1036f156((int)param_1,1,&param_1->field_0xa8,0x80015d04/*SDRAM*/,*puVar8,puVar8[1]);
    if (iVar1 == 0) {
      *puVar8 = 0x80015af0/*SDRAM*/;
      puVar8[1] = 0x800158dc/*SDRAM*/;
      retry_operation_five_times_1036f156((int)param_1,2,&param_1->field_0xa8,0x80015d04/*SDRAM*/,*puVar8,puVar8[1]);
      puVar7 = (void *)(param_1->field_0x0);
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
    alloc_and_zero_struct_104bb416(auStack_64);
    uVar4 = return_first_word_1045c514(&param_1->field_0xa8);
    uVar5 = read_struct_field_at_offset_4(&param_1->field_0xa8);
    uVar6 = return_first_word_1045c514(auStack_74);
    uVar2 = read_struct_field_at_offset_4(auStack_74);
    *(short *)((int)puVar8 + 2) = (short)uVar2;
    *(uint16_t *)((int)puVar8 + 6) = 100;
    dispatch_six_param_object_ops(auStack_64,uVar4 & 0xffff,uVar5 & 0xffff,uVar6 & 0xffff, *(uint16_t *)((int)puVar8 + 2),*(uint16_t *)((int)puVar8 + 6));
    transform_and_store_value(auStack_64,uStack_80);
    reset_object_fields_and_call_base((cls_105b9458 *)0x80015d04/*SDRAM*/);
    *puVar8 = 3;
    retry_virtual_call_until_success_1036f0fe((int)param_1,(int)auStack_64,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar8);
    destroy_five_member_objects(auStack_64,2);
    free_heap_if_flagged_1045c402(auStack_74,2);
  }
  puVar7 = (void *)(param_1->field_0x0);
LAB_1036ec24:
  (((vtbl_entry*)(puVar7))[8].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar7))[8].adj);
  release_object_at_offset_0x2c_1036f2b4(param_1);
  iVar1 = check_setting_0x72_enabled((int *)(0x800158d4/*SDRAM*/));
  dispatch_event_with_state_check_1036f384(param_1,iVar1);
  request_ui_sync_code_4((char*)(param_1) ->field_0x2c);
  if ((iRam80015b08 != 2) || (cRam80015d00 == '\0')) {
    clear_two_flags_and_init_subobj(param_1);
  }
  return param_1;
}
