/* @k10d language_screen_on_event @ 0x103df1d2
 * name: verified (structural evidence: decomp: FUN_10484be4(settings,0xa9,+0x20); FUN_10484988(settings,1); +0x21 '>' -> 0x1b, FUN_103db21e)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Event handler of the power-on Language screen (cls_105969f8): on confirm (event 0x11)
 *   stores setting 0xa9 = the chosen index, applies it (0x1052b7d2), sets first-run flag A
 *   and, in power-on mode (+0x21 == 0x3e), opens the next first-run screen 0x103db21e.
 * summary:
 *   VERIFIED: decomp: setting_set(settings,0xa9,+0x20); first_run_set_flag_a(settings,1);
 *   +0x21 '>' -> 0x1b, get_or_init_second_first_run_screen
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103df2a6) overlaps instruction at (ram,0x103df2a4)
    */

cls_105969f8 * language_screen_on_event(cls_105969f8 *param_1,int param_2)

{
  cls_105969f8 *pcVar1;
  uint32_t uVar2;
  
  param_1->field_0x14 = param_2;
  pcVar1 = param_1;
  if (param_2 == 0xc) {
    if (param_1->field_0x21 == '>') {
      param_1->field_0x21 = 0x1a;
      pcVar1 = (cls_105969f8 *)get_or_init_second_first_run_screen();
    }
    else {
      pcVar1 = (cls_105969f8 *)get_or_init_singleton_object_103c8200();
    }
  }
  if (param_1->field_0x14 == 0x11) {
    setting_set(param_1->field_0x8,0xa9,(uint)(byte)param_1->field_0x20);
    uVar2 = get_or_init_sram_block_1052b6fc();
    apply_selected_language(uVar2,param_1->field_0x20);
    first_run_set_flag_a(param_1->field_0x8,1);
    if (param_1->field_0x21 == '>') {
      param_1->field_0x21 = 0x1b;
      pcVar1 = (cls_105969f8 *)get_or_init_second_first_run_screen();
    }
    else {
      pcVar1 = (cls_105969f8 *)get_or_init_singleton_object_103c8200();
    }
  }
  if ((param_1->field_0x14 == 0) || (param_1->field_0x14 == 1)) {
    param_1->field_0x22 = 0x8c;
    pcVar1 = (cls_105969f8 *)0x0;
  }
  if (param_1->field_0x21 != '>') {
    if ((param_1->field_0x14 == 7) || (param_1->field_0x14 == 3)) {
      param_1->field_0x22 = 0x8c;
      pcVar1 = (cls_105969f8 *)0x0;
    }
    if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
      param_1->field_0x22 = 0x50;
      pcVar1 = (cls_105969f8 *)0x0;
    }
    if (param_1->field_0x14 == 0x18) {
      param_1->field_0x22 = 0xb4;
      pcVar1 = (cls_105969f8 *)0x0;
    }
    if (param_1->field_0x14 == 0x2c) {
      param_1->field_0x22 = 0x8c;
      pcVar1 = (cls_105969f8 *)0x0;
    }
    if (param_1->field_0x14 == 10) {
      param_1->field_0x22 = 200;
      pcVar1 = (cls_105969f8 *)0x0;
    }
  }
  return pcVar1;
}
