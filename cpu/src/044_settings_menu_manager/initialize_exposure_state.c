/* @k10d initialize_exposure_state @ 0x103a2b7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_exposure_state(int *param_1)

{
  char cVar1;
  uint16_t uVar2;
  int iVar3;
  uint8_t uVar5;
  uint32_t uVar4;
  int *piVar6;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  *(uint8_t *)((int)param_1 + 0x119) = 0;
  piVar6 = param_1 + 2;
  call_helper_on_fetched_object(piVar6,0x10);
  call_helper_on_fetched_object(piVar6,0xf);
  call_helper_on_fetched_object(piVar6,0xd);
  call_helper_on_fetched_object(piVar6,0xe);
  *(uint8_t *)(param_1 + 0x46) = 0;
  register_two_menu_items_103a415e(param_1);
  iVar3 = call_two_helpers_in_sequence_104f1b02(param_1[10]);
  *(char *)(param_1 + 0x10) = (char)iVar3;
  *(uint8_t *)((int)param_1 + 0x4d) = 0;
  *(uint8_t *)(param_1 + 0x13) = 0;
  if (((iVar3 == 0x1e) || (cVar1 = *(char *)(param_1 + 0x10), cVar1 == '\x1c')) || (cVar1 == '\x18')
     ) {
    *(uint8_t *)((int)param_1 + 0x4d) = 1;
  }
  else if (cVar1 == '\x16') {
    *(uint8_t *)(param_1 + 0x13) = 1;
  }
  uVar5 = classify_state_by_two_checks(param_1[10]);
  *(uint8_t *)((int)param_1 + 0x41) = uVar5;
  uVar5 = compute_value_from_object_state(param_1[10],0);
  *(uint8_t *)((int)param_1 + 0x42) = uVar5;
  uVar4 = get_setting_by_mode_index_104f01e2(param_1[10],(uint)*(byte *)((int)param_1 + 0x41));
  *(char *)(param_1 + 0x11) = (char)uVar4;
  uVar4 = get_mode_dependent_setting_104f0252(param_1[10],(uint)*(byte *)((int)param_1 + 0x41));
  *(char *)((int)param_1 + 0x45) = (char)uVar4;
  uVar4 = get_setting_0xb4(param_1[10]);
  *(char *)((int)param_1 + 0x43) = (char)uVar4;
  if (*(char *)(param_1 + 0x13) == '\0') {
    if ((*(char *)((int)param_1 + 0x4d) != '\0') && (*(char *)((int)param_1 + 0x42) == '\0')) {
      uVar4 = get_mode_dependent_setting_104f0252(param_1[10],(uint)*(byte *)((int)param_1 + 0x41));
      *(char *)((int)param_1 + 0x42) = (char)uVar4;
    }
  }
  else {
    *(uint8_t *)((int)param_1 + 0x42) = 0;
  }
  cVar1 = *(char *)((int)param_1 + 0x41);
  if (cVar1 == '\0') {
    uVar2 = 6;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 3;
  }
  else {
    if (cVar1 != '\x02') goto LAB_103a2ce4;
    uVar2 = 2;
  }
  *(uint16_t *)((int)param_1 + 0x46) = uVar2;
LAB_103a2ce4:
  if (*(char *)((int)param_1 + 0x4e) == '\0') {
    uVar2 = *(uint16_t *)((int)param_1 + 0x7a);
  }
  else {
    uVar2 = *(uint16_t *)((int)param_1 + 0x82);
  }
  *(uint16_t *)(param_1 + 0x12) = uVar2;
  *(uint16_t *)((int)param_1 + 0x4a) = *(uint16_t *)((int)param_1 + 0x5a);
  register_menu_items_by_type_103a37ae(param_1);
  apply_context_state_flags(param_1);
  dispatch_event_to_object_10492252(piVar6,param_1);
  request_ui_sync_and_set_flag(piVar6);
  request_ui_sync_with_flag_10491f5c(piVar6,1);
  return;
}
