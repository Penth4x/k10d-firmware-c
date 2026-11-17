/* @k10d dispatch_mode_state_update_103719ce @ 0x103719ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_update_103719ce(void *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  char cVar3;
  int iVar1;
  int iVar2;
  uint16_t uVar5;
  uint32_t uVar4;
  uint16_t uVar6;
  void *pvVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  bool bVar9;
  bool bVar10;
  uint8_t auStack_1c [8];
  
  puVar8 = auStack_1c;
  pvVar7 = (void *)((int)param_1 + 0x20);
  cVar3 = read_byte_at_offset_0x1d((int)pvVar7);
  if (cVar3 != '\0') {
    dispatch_object_state_update_10491fb2((int)pvVar7,1);
  }
  switch(*(uint32_t *)((int)param_1 + 0x4c)) {
  case 0:
    read_two_shorts_from_param2_10372684(param_1,(void *)((int)param_1 + 0x80));
    register_and_configure_six_menu_items(pvVar7,*(int *)(*(int *)((int)param_1 + 0x7c) + 8));
    uVar5 = *(uint16_t *)(*(int *)((int)param_1 + 0x7c) + 4);
    uVar6 = *(uint16_t *)(*(int *)((int)param_1 + 0x7c) + 6);
    goto LAB_10371a76;
  case 1:
    read_two_shorts_from_param2_10372684(param_1,(void *)((int)param_1 + 0x80));
    register_and_activate_menu_items_10403552(pvVar7,0);
    register_and_configure_six_menu_items(pvVar7,*(int *)(*(int *)((int)param_1 + 0x7c) + 8));
    uVar5 = *(uint16_t *)(*(int *)((int)param_1 + 0x7c) + 4);
    uVar6 = *(uint16_t *)(*(int *)((int)param_1 + 0x7c) + 6);
LAB_10371a76:
    register_three_menu_items_10404a44(pvVar7,uVar5,uVar6);
    goto LAB_10371cd0;
  case 2:
    read_two_shorts_from_param2_10372684(param_1,(void *)((int)param_1 + 0x80));
    register_and_activate_menu_items_10403552(pvVar7,1);
    register_and_configure_six_menu_items(pvVar7,*(int *)(*(int *)((int)param_1 + 0x7c) + 8));
    dispatch_mode_specific_handler_1040508a((int)pvVar7,0xc,*(void **)((int)param_1 + 0x6c),param_4);
    dispatch_mode_specific_handler_1040508a((int)pvVar7,0xd,*(void **)((int)param_1 + 0x70),param_4);
    dispatch_mode_specific_handler_1040508a((int)pvVar7,0xe,*(void **)((int)param_1 + 0x74),param_4);
    dispatch_mode_specific_handler_1040508a((int)pvVar7,0xf,*(void **)((int)param_1 + 0x78),param_4);
    forward_eight_bytes_to_subobject((int)param_1);
    goto LAB_10371cd0;
  case 3:
    register_and_activate_menu_items_10403552(pvVar7,2);
    forward_eight_bytes_to_subobject((int)param_1);
    uVar4 = *(uint32_t *)((int)param_1 + 0x54);
    puVar8[3] = 1;
    puVar8[7] = 1;
    break;
  case 4:
    register_and_activate_menu_items_10403552(pvVar7,3);
    register_and_configure_six_menu_items(pvVar7,*(int *)(*(int *)((int)param_1 + 0x7c) + 8));
    goto LAB_10371cd0;
  case 5:
    uVar4 = *(uint32_t *)((int)param_1 + 0x58);
    puVar8[3] = 0;
    puVar8[7] = 0;
    register_four_menu_items_10404378((int)pvVar7,uVar4,0,0,puVar8[3],puVar8[7]);
    iVar1 = check_mode_flag_cleared((int)param_1);
    bVar9 = iVar1 == 0;
    iVar1 = check_mode_parameter_threshold((int)param_1);
    bVar10 = iVar1 == 0;
    if ((*(int *)((int)param_1 + 0x54) == 2) && (iVar1 = read_field_at_offset_0x4a8((int)param_1), iVar1 != 0)) {
      bVar9 = false;
      bVar10 = false;
    }
    uVar4 = *(uint32_t *)((int)param_1 + 0x54);
    puVar8[3] = bVar9;
    puVar8[7] = bVar10;
    break;
  case 6:
    if (*(int *)((int)param_1 + 0x54) == 0) {
      register_and_select_menu_item_10404afc((int)pvVar7,(uint)*(byte *)((int)param_1 + 100));
    }
    else if (*(int *)((int)param_1 + 0x54) == 1) {
      register_and_select_menu_item_10404bc8((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x65));
    }
    iVar1 = check_mode_flag_cleared((int)param_1);
    iVar2 = check_mode_parameter_threshold((int)param_1);
    uVar4 = *(uint32_t *)((int)param_1 + 0x54);
    puVar8[3] = iVar1 == 0;
    puVar8[7] = iVar2 == 0;
    break;
  case 7:
    read_two_shorts_from_param2_10372684(param_1,(void *)((int)param_1 + 0x294));
    switch(*(uint32_t *)((int)param_1 + 0x54)) {
    case 2:
      register_and_select_menu_items_10404c94((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x66));
      break;
    case 3:
      dispatch_five_mode_variants((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x67));
      break;
    case 4:
      invoke_virtual_slot_on_two_objects_10405502((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x68));
      break;
    case 5:
      dispatch_seven_virtual_cases((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x69));
      break;
    case 6:
      dispatch_mode_parameter_update_10405aa8((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x6a));
      break;
    case 7:
      dispatch_mode_parameter_update_10405fc2((int)pvVar7,(uint)*(byte *)((int)param_1 + 0x6b));
    }
    iVar1 = check_mode_flag_cleared((int)param_1);
    iVar2 = check_mode_parameter_threshold((int)param_1);
    uVar4 = *(uint32_t *)((int)param_1 + 0x54);
    puVar8[3] = iVar1 == 0;
    puVar8[7] = iVar2 == 0;
    break;
  default:
    goto LAB_10371cd0;
  }
  register_four_menu_items_10404378((int)param_1 + 0x20,uVar4,1,1,puVar8[3],puVar8[7]);
LAB_10371cd0:
  cVar3 = read_byte_at_offset_0x1d((int)pvVar7);
  if (cVar3 != '\0') {
    dispatch_object_state_update_10491fb2((int)pvVar7,0);
  }
  return;
}
