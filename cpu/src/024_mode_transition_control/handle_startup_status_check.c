/* @k10d handle_startup_status_check @ 0x1036e37c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_startup_status_check(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_20 [4];
  uint32_t uStack_c;
  
  puVar3 = auStack_20;
  uVar2 = 0;
  uStack_c = 0x18;
  dispatch_object_state_update_1036e02a(param_1,0);
  iVar1 = check_status_and_set_error_code((int)param_1,&uStack_c);
  if (iVar1 == 0) {
    *(uint8_t *)((int)param_1 + 0x2b4) = 1;
    set_object_field_from_flag(param_1);
    puVar3[3] = 0;
    register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,uStack_c,1,0,puVar3[3]);
    release_object_at_offset_0x14_1036dfd0(param_1);
  }
  else {
    *(uint8_t *)((int)param_1 + 0x2b4) = 1;
    set_object_field_from_flag(param_1);
    puVar3[3] = 1;
    register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x15,0,0,puVar3[3]);
    release_object_at_offset_0x14_1036dfd0(param_1);
    uVar2 = map_two_state_codes((int)param_1);
    iVar1 = process_buffer_and_return_offset_1036c00a(param_1,uVar2);
    if (iVar1 != 1) {
      puVar3[3] = 0;
      register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x10,0,0,puVar3[3]);
      release_object_at_offset_0x14_1036dfd0(param_1);
    }
    check_kernel_call_success_10459fea(0x7d0);
    invoke_virtual_slot_two_on_four_objects_1036b766();
    *(uint8_t *)((int)param_1 + 0x2b4) = 0;
    uVar2 = 1;
  }
  return uVar2;
}
