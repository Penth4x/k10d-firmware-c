/* @k10d init_object_with_timer_and_vcalls_103a47f4 @ 0x103a47f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes an object struct with a 180000ms timeout, computes derived flags, and
 *   invokes several virtual methods.
 * summary:
 *   The function calls two unknown initializers, then conditionally invokes a virtual
 *   method on the object if a flag at offset 4 is zero. It sets a 32-bit field to 180000
 *   (likely a timeout in ms), stores results from two helper functions into byte fields,
 *   and sets several other constants (0x43b, 0x861). It then calls three other functions on
 *   the object and performs two more virtual calls, one of which passes the constant
 *   0x1120075.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_timer_and_vcalls_103a47f4(cls_10564c80 *param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t *puVar4;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  param_1->field_0x65 = '\0';
  param_1->field_0x66 = 0;
  param_1->field_0x34 = 180000;
  uVar1 = check_object_property_43(param_1->field_0x28);
  param_1->field_0x67 = (byte)uVar1;
  param_1->field_0x64 = 1;
  uVar2 = get_setting_by_probe_result(param_1->field_0x28);
  *(char *)&param_1->field_0x50 = (char)uVar2;
  param_1->field_0x60 = 0x43b;
  param_1->field_0x62 = 0x861;
  register_seven_menu_items(param_1);
  puVar4 = &param_1->field5_0x8;
  iVar3 = menu_item_register((int)puVar4);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  register_menu_items_and_update_view(param_1);
  update_pair_object_state(param_1);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar4,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar4);
  iVar3 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120075,0);
  return;
}
