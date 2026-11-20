/* @k10d initialize_exposure_state @ 0x103a2b7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_exposure_state(cls_105649cc *param_1)

{
  char cVar1;
  uint16_t uVar2;
  ushort uVar3;
  int iVar4;
  uint8_t uVar6;
  uint32_t uVar5;
  uint8_t *puVar7;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  param_1->field_0x119 = 0;
  puVar7 = &param_1->field5_0x8;
  call_helper_on_fetched_object(puVar7,0x10);
  call_helper_on_fetched_object(puVar7,0xf);
  call_helper_on_fetched_object(puVar7,0xd);
  call_helper_on_fetched_object(puVar7,0xe);
  param_1->field_0x118 = 0;
  register_two_menu_items_103a415e(param_1);
  iVar4 = call_two_helpers_in_sequence_104f1b02(param_1->field_0x28);
  param_1->field_0x40 = (char)iVar4;
  param_1->field_0x4d = 0;
  param_1->field_0x4c = 0;
  if (((iVar4 == 0x1e) || (cVar1 = param_1->field_0x40, cVar1 == '\x1c')) || (cVar1 == '\x18')) {
    param_1->field_0x4d = 1;
  }
  else if (cVar1 == '\x16') {
    param_1->field_0x4c = 1;
  }
  uVar6 = classify_state_by_two_checks(param_1->field_0x28);
  param_1->field_0x41 = uVar6;
  uVar6 = compute_value_from_object_state(param_1->field_0x28,0);
  param_1->field_0x42 = uVar6;
  uVar5 = get_setting_by_mode_index_104f01e2(param_1->field_0x28,(uint)(byte)param_1->field_0x41);
  param_1->field_0x44 = (char)uVar5;
  uVar5 = get_mode_dependent_setting_104f0252(param_1->field_0x28,(uint)(byte)param_1->field_0x41);
  param_1->field_0x45 = (char)uVar5;
  uVar5 = get_setting_0xb4(param_1->field_0x28);
  param_1->field_0x43 = (char)uVar5;
  if (param_1->field_0x4c == '\0') {
    if ((param_1->field_0x4d != '\0') && (param_1->field_0x42 == '\0')) {
      uVar5 = get_mode_dependent_setting_104f0252(param_1->field_0x28,(uint)(byte)param_1->field_0x41);
      param_1->field_0x42 = (char)uVar5;
    }
  }
  else {
    param_1->field_0x42 = 0;
  }
  cVar1 = param_1->field_0x41;
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
  param_1->field_0x46 = uVar2;
LAB_103a2ce4:
  if (*(char *)&param_1->field_0x4e == '\0') {
    uVar3 = param_1->field_0x7a;
  }
  else {
    uVar3 = param_1->field_0x82;
  }
  param_1->field_0x48 = uVar3;
  param_1->field_0x4a = param_1->field_0x5a;
  register_menu_items_by_type_103a37ae(param_1);
  apply_context_state_flags(param_1);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar7,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar7);
  request_ui_sync_with_flag_10491f5c(puVar7,1);
  return;
}
