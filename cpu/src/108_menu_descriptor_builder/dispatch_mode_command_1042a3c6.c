/* @k10d dispatch_mode_command_1042a3c6 @ 0x1042a3c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_mode_command_1042a3c6(cls_1059e680 *param_1,uint32_t param_2,int param_3)

{
  struct {
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_18;
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uVar1 = *(uint8_t *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(param_1->field_0x14),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0x84;
  }
  switch(uVar1) {
  case 0:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_10433180();
    iVar3 = *(int *)(iVar3 + 4);
    eventflag_clr_flg(&param_1->field_0xc,1);
    iVar3 = set_mode_flag_and_update_ctrl(iVar3,(int)&param_1->field_0xc,1,0);
    goto joined_r0x1042a51c;
  case 1:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_10433180();
    iVar3 = *(int *)(iVar3 + 4);
    eventflag_clr_flg(&param_1->field_0xc,1);
    iVar3 = set_mode_flag_and_update_ctrl(iVar3,(int)&param_1->field_0xc,1,1);
    goto joined_r0x1042a51c;
  case 2:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_10433180();
    iVar3 = *(int *)(iVar3 + 4);
    eventflag_clr_flg(&param_1->field_0xc,1);
    iVar3 = set_mode_flag_and_update_ctrl(iVar3,(int)&param_1->field_0xc,1,2);
    goto joined_r0x1042a51c;
  case 3:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = get_or_init_singleton_10433180();
    iVar3 = *(int *)(iVar3 + 4);
    eventflag_clr_flg(&param_1->field_0xc,1);
    iVar3 = set_mode_flag_and_update_ctrl(iVar3,(int)&param_1->field_0xc,1,3);
joined_r0x1042a51c:
    if (iVar3 == 0) {
      uVar5 = 0x82;
    }
    else {
      twai_flg_obj(&param_1->field_0xc,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      uVar5 = 0;
    }
    break;
  case 4:
    set_struct_field_at_offset_4(param_3,0);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar5 = invoke_object_method_by_index((int)(param_1),(int)(uVar5),(uint32_t)(uVar4));
    break;
  case 5:
    set_struct_field_at_offset_4(param_3,1);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    _cfg_18.uStack_18 = 0;
    uVar5 = query_object_property((int)(param_1),(int)(uVar5),(uint *)(&_cfg_18.uStack_18));
    uVar4 = _cfg_18.uStack_18;
    goto LAB_1042a662;
  case 6:
    set_struct_field_at_offset_4(param_3,0);
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    iVar3 = add_eight_to_param(param_3);
    uVar5 = set_property_on_object((int)(param_1),(int)(uVar5),(uint32_t)(iVar3 + 4));
    break;
  case 7:
    uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
    _cfg_18.uStack_14 = 0;
    uVar4 = add_eight_to_param(param_3);
    uVar5 = get_object_field_by_index((int)(param_1),(int)(uVar5),(uint32_t *)(&_cfg_18.uStack_14),(uint32_t)(uVar4));
    uVar4 = _cfg_18.uStack_14;
    goto LAB_1042a6dc;
  case 8:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar5 = 0x1d;
    if (iVar3 != 0) {
      uVar5 = 0x1c;
    }
    uVar4 = read_struct_field_at_index_1046c7ca(param_3,1);
    uVar5 = invoke_object_method_by_index((int)(param_1),(int)(uVar5),(uint32_t)(uVar4));
    break;
  case 9:
    set_struct_field_at_offset_4(param_3,1);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar5 = 0x1d;
    if (iVar3 != 0) {
      uVar5 = 0x1c;
    }
    _cfg_18.uStack_10 = 0;
    uVar5 = query_object_property((int)(param_1),(int)(uVar5),(uint *)(&_cfg_18.uStack_10));
    uVar4 = _cfg_18.uStack_10;
LAB_1042a662:
    write_word_to_struct_array(param_3,uVar4,0);
    break;
  case 10:
    set_struct_field_at_offset_4(param_3,0);
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar5 = 0x1d;
    if (iVar3 != 0) {
      uVar5 = 0x1c;
    }
    iVar3 = add_eight_to_param(param_3);
    uVar5 = set_property_on_object((int)(param_1),(int)(uVar5),(uint32_t)(iVar3 + 4));
    break;
  case 0xb:
    iVar3 = read_struct_field_at_index_1046c7ca(param_3,0);
    uVar5 = 0x1d;
    if (iVar3 != 0) {
      uVar5 = 0x1c;
    }
    _cfg_18.uStack_c = 0;
    uVar4 = add_eight_to_param(param_3);
    uVar5 = get_object_field_by_index((int)(param_1),(int)(uVar5),(uint32_t *)(&_cfg_18.uStack_c),(uint32_t)(uVar4));
    uVar4 = _cfg_18.uStack_c;
LAB_1042a6dc:
    set_struct_field_at_offset_4(param_3,uVar4);
    break;
  default:
    uVar5 = 0x81;
  }
  return uVar5;
}
