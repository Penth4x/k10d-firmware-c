/* @k10d dispatch_mode_change_request_103dd22e @ 0x103dd22e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Updates a state field and dispatches initialization or cleanup actions based on the
 *   requested mode value.
 * summary:
 *   Writes param_2 to offset 0x14 of the object. If param_2 is 0xc or 0x11, it performs
 *   setup involving setting updates and first-run flags before calling
 *   check_init_magic_at_offset_0x14. If param_2 is 0xd, it checks a specific ID at offset
 *   0x18 and calls get_language_select_screen. For other values, it sets a byte at offset
 *   0x25 to 0x8c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10596808 * dispatch_mode_change_request_103dd22e(cls_10596808 *param_1,int param_2)

{
  int iVar1;
  cls_10596808 *pcVar2;
  uint32_t *puVar3;
  
  param_1->field_0x14 = param_2;
  if (param_2 == 0xc) {
    iVar1 = check_init_magic_at_offset_0x14(param_1->field_0x8);
    if (iVar1 == 0) {
      pcVar2 = (cls_10596808 *)get_or_init_screen_object();
      return pcVar2;
    }
  }
  else if (param_2 == 0x11) {
    setting_set(param_1->field_0x8,0xa7,(uint)(byte)param_1->field_0x22);
    setting_set(param_1->field_0x8,0xa5,(uint)(byte)param_1->field_0x24);
    first_run_set_flag_b(param_1->field_0x8,1);
    iVar1 = check_init_magic_at_offset_14(param_1->field_0x8);
    if (iVar1 == 0) {
      setting_set(param_1->field_0x8,0xaa,(uint)*(byte *)((byte)param_1->field_0x24 + 0x105967be/*ROM*/));
      puVar3 = (uint32_t *)get_or_init_sram_block_1052b6fc();
      call_three_helpers_on_struct_1052b8d6(puVar3);
      init_two_magic_fields_104849d8(param_1->field_0x8,1);
    }
    iVar1 = check_init_magic_at_offset_0x14(param_1->field_0x8);
    if (iVar1 == 0) {
      pcVar2 = (cls_10596808 *)get_or_init_screen_object();
      return pcVar2;
    }
  }
  else {
    if (param_2 == 0xd) {
      if (param_1->field_0x18 != 0x195000d) {
        return param_1;
      }
      pcVar2 = (cls_10596808 *)get_language_select_screen();
      first_run_set_flag_a(param_1->field_0x8,0);
      return pcVar2;
    }
    if ((param_2 != 0) && (param_2 != 1)) {
      return param_1;
    }
  }
  param_1->field_0x25 = -0x74;
  return (cls_10596808 *)0x0;
}
