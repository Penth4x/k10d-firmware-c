/* @k10d dispatch_mode_change_event_103b65d0 @ 0x103b65d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b6622) overlaps instruction at (ram,0x103b6620)
    */

void dispatch_mode_change_event_103b65d0(void *param_1,uint32_t param_2)

{
  bool bVar1;
  uint32_t extraout_r4;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 0x57) != '\0') {
    return;
  }
  iVar4 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar4 + 0x14))
            ((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar4 + 0x10),0x1120065,0);
  bVar1 = false;
  *(uint32_t *)((int)param_1 + 0x30) = param_2;
  uVar3 = 0;
  switch(param_2) {
  case 0x203000a:
    uVar3 = 0;
    set_object_and_three_substates(param_1,0);
    bVar1 = true;
    break;
  case 0x203000b:
    uVar3 = 1;
    goto LAB_103b6736;
  case 0x203000c:
    uVar3 = 2;
    goto LAB_103b6736;
  case 0x203000d:
    uVar3 = 3;
    iVar4 = 0;
    goto LAB_103b66ae;
  case 0x203000e:
    uVar3 = get_setting_by_mode_flag_104f08ac(*(uint32_t *)((int)param_1 + 0x28));
    iVar4 = 1;
    goto LAB_103b66ae;
  case 0x203000f:
  case 0x2030014:
  case 0x2030015:
  case 0x2030016:
  case 0x203001a:
  case 0x203001b:
  case 0x203001c:
    break;
  case 0x2030010:
    uVar3 = 7;
    iVar4 = 0;
LAB_103b66ae:
    invoke_virtual_slot_two_103b70ce(param_1,iVar4);
    bVar1 = true;
    break;
  case 0x2030011:
    uVar3 = 8;
    goto LAB_103b6736;
  case 0x2030012:
    uVar3 = 9;
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      iVar4 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
    }
    set_object_and_three_substates(param_1,0);
    bVar1 = false;
    goto LAB_103b6764;
  case 0x2030013:
    set_object_and_three_substates(param_1,1);
    uVar3 = get_setting_by_mode_flag_104f0946(*(int *)((int)param_1 + 0x28));
    iVar4 = menu_item_register((int)param_1 + 8);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
LAB_103b6736:
    bVar1 = true;
    break;
  case 0x2030017:
    uVar3 = 4;
    set_setting_based_on_flag_104f0860(*(uint32_t *)((int)param_1 + 0x28),4);
    goto LAB_103b66a2;
  case 0x2030018:
    uVar3 = 5;
    set_setting_based_on_flag_104f0860(*(uint32_t *)((int)param_1 + 0x28),5);
    goto LAB_103b66a2;
  case 0x2030019:
    uVar3 = 6;
    set_setting_based_on_flag_104f0860(*(uint32_t *)((int)param_1 + 0x28),6);
LAB_103b66a2:
    invoke_virtual_slot_two_with_flags((int)param_1);
    bVar1 = false;
    goto LAB_103b6764;
  case 0x203001d:
    uVar3 = 0xc;
    uVar2 = 0xc;
    goto LAB_103b674a;
  case 0x203001e:
    uVar3 = 0xd;
    uVar2 = 0xd;
    goto LAB_103b674a;
  case 0x203001f:
    uVar3 = 0xe;
    uVar2 = 0xe;
LAB_103b674a:
    bVar1 = true;
    set_setting_by_index_check(*(uint32_t *)((int)param_1 + 0x28),uVar2);
    dispatch_virtual_slot_two_103b6fe0(param_1);
    break;
  default:
    uVar3 = 0;
  }
  bVar1 = !bVar1;
LAB_103b6764:
  if (!bVar1) {
    if ((*(char *)((int)param_1 + 0x58) == '\0') &&
       (iVar4 = *(int *)((int)param_1 + 0x5c) + 1, *(int *)((int)param_1 + 0x5c) = iVar4, iVar4 == 2
       )) {
      *(uint8_t *)((int)param_1 + 0x58) = 1;
      call_helper_on_fetched_pointer();
    }
    set_setting_based_on_check(*(uint32_t *)((int)param_1 + 0x28),uVar3);
    read_setting_by_index(*(int *)((int)param_1 + 0x28),uVar3);
    uVar2 = get_setting_by_index_and_mode(*(int *)((int)param_1 + 0x28),uVar3);
    set_mode_dependent_settings(*(uint32_t *)((int)param_1 + 0x28),extraout_r4,uVar2,uVar3);
    dispatch_viewfinder_update((int)param_1,uVar3);
  }
  return;
}
