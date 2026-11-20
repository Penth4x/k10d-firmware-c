/* @k10d dispatch_mode_state_change_103e8a78 @ 0x103e8a78
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Updates a state field in a context struct and dispatches to mode-specific handlers
 *   based on the new state value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks this value against several constants (0x11, 0xc, 7, 0, 1, 3, 0x19, 9, 0x18,
 *   0x2c, 10) to determine which handler to invoke or which timeout value to set at offset
 *   0x22. For state 0x11, it further checks a sub-state at offset 0x18 and calls various
 *   initialization or cleanup routines, including setting_get for specific IDs. The
 *   function returns 0 or the result of init_singleton_object_103cc008.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e8b98) overlaps instruction at (ram,0x103e8b96)
    */

cls_10597680 * dispatch_mode_state_change_103e8a78(cls_10597680 *param_1,int param_2)

{
  int iVar1;
  cls_10597680 *pcVar2;
  uint32_t uVar3;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x11) {
    if (param_1->field_0x18 == 0x194000e) {
      apply_settings_update((void *)(param_1->field_0x8));
      iVar1 = get_or_create_singleton_object_104bb22a();
      uVar3 = *(uint32_t *)(iVar1 + 4);
      dispatch_event_with_lock_104b8876(uVar3,0);
      dispatch_event_with_lock_104b89c2(uVar3,0);
      acquire_lock_and_call_handler(uVar3,4);
      send_message_with_timeout_104b981c(uVar3,0x40);
      if ((param_1->field_0xc & 1) == 1) {
        uVar3 = setting_get(param_1->field_0x8,0x135);
        *(uint32_t *)&param_1->field_0x24 = uVar3;
        uVar3 = setting_get(param_1->field_0x8,0x16b);
        *(uint32_t *)&param_1->field_0x28 = uVar3;
        update_setting_and_refresh_copy_10485072((void *)(param_1->field_0x8),(uint32_t)(0));
        apply_mode_setting_defaults_103e8d02((int)(param_1));
        iVar1 = get_or_create_singleton_object_10485138();
        write_structured_data_blocks(*(void **)(iVar1 + 0x24));
      }
      send_two_settings_and_state((int)(param_1));
      param_1->field_0x22 = 0xfa;
      pcVar2 = (cls_10597680 *)0x0;
    }
    else if (param_1->field_0x18 == 0x1940011) {
      pcVar2 = (cls_10597680 *)init_singleton_object_103cc008();
    }
  }
  if (param_1->field_0x14 == 0xc) {
    pcVar2 = (cls_10597680 *)init_singleton_object_103cc008();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597680 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597680 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10597680 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597680 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10597680 *)0x0;
  }
  return pcVar2;
}
