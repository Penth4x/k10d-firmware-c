/* @k10d process_state_0x3030009 @ 0x10365ae8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 005_shooting_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_state_0x3030009(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  if (*(int *)((int)param_1 + 0x68) == 0x3030009) {
    write_second_field_of_struct(param_1,0);
    set_object_flag_and_init_state(param_1);
    init_struct_with_size_and_register(param_1);
    *(uint32_t *)((int)param_1 + 0x6c) = 0x2e;
    *(uint8_t *)((int)param_1 + 0xe0) = 1;
    while (iVar2 = register_and_activate_event((int)param_1), iVar2 == 0xb) {
      uVar3 = get_sram_field_at_offset_0x3c((uint32_t)(param_1));
      register_menu_item_with_limit(0x80018060/*SDRAM*/,uVar3);
    }
    *(uint8_t *)((int)param_1 + 0xe0) = 0;
    if (iVar2 == 1) {
      register_menu_item_with_limit(0x80018060/*SDRAM*/,100);
    }
    else if (iVar2 == 2) {
      iVar2 = 1;
    }
    check_kernel_call_success_10459fea();
    set_field_and_call_helper_10365e18((int)param_1);
    write_second_field_of_struct(param_1,1);
    if (iVar2 == 1) {
      invoke_virtual_slot_two_on_four_objects_1036b766();
      uStack_c = 0;
      iVar2 = dispatch_event_and_return_offset(param_1,&uStack_c,0xffffffff);
      if (iVar2 == 1) {
        uVar3 = get_or_create_singleton_object_1036c796();
        uVar4 = 2;
      }
      else {
        uVar3 = get_or_create_singleton_object_1036c796();
        uVar4 = 1;
      }
    }
    else {
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar4 = 1;
    }
    uVar3 = read_array_element_bounded(uVar3,uVar4);
    uVar1 = *(uint *)((int)param_1 + 0x6c);
    uVar4 = _DAT_105bb5f4/*ROM*/;
    if (uVar1 != 3) {
      if (uVar1 < 4) {
        if ((uVar1 != 0) && (uVar1 != 1)) {
          return uVar3;
        }
      }
      else if ((uVar1 != 7) && (uVar1 != 10)) {
        if (uVar1 != 0x29) {
          return uVar3;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar4 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar4);
  }
  else {
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar3 = read_array_element_bounded(uVar3,2);
  }
  return uVar3;
}
