/* @k10d language_screen_on_event @ 0x103df1d2
 * name: verified (structural evidence: decomp: FUN_10484be4(settings,0xa9,+0x20); FUN_10484988(settings,1); +0x21 '>' -> 0x1b, FUN_103db21e)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Event handler of the power-on Language screen (cls_105969f8): on confirm (event 0x11)
 *   stores setting 0xa9 = the chosen index, applies it (0x1052b7d2), sets first-run flag A
 *   and, in power-on mode (+0x21 == 0x3e), opens the next first-run screen 0x103db21e.
 * summary:
 *   VERIFIED: decomp: setting_set(settings,0xa9,+0x20); first_run_set_flag_a(settings,1);
 *   +0x21 '>' -> 0x1b, get_first_run_screen_obj
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103df2a6) overlaps instruction at (ram,0x103df2a4)
    */

int language_screen_on_event(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar1 = param_1;
  if (param_2 == 0xc) {
    if (*(char *)(param_1 + 0x21) == '>') {
      *(uint8_t *)(param_1 + 0x21) = 0x1a;
      iVar1 = get_first_run_screen_obj();
    }
    else {
      iVar1 = get_or_init_singleton_object_103c8200();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0x11) {
    setting_set(*(int *)(param_1 + 8),0xa9,(uint)*(byte *)(param_1 + 0x20));
    uVar2 = get_or_init_sram_block_1052b6fc();
    apply_selected_language(uVar2,*(uint8_t *)(param_1 + 0x20));
    first_run_set_flag_a(*(uint32_t *)(param_1 + 8),1);
    if (*(char *)(param_1 + 0x21) == '>') {
      *(uint8_t *)(param_1 + 0x21) = 0x1b;
      iVar1 = get_first_run_screen_obj();
    }
    else {
      iVar1 = get_or_init_singleton_object_103c8200();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x14) == 1)) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar1 = 0;
  }
  if (*(char *)(param_1 + 0x21) != '>') {
    if ((*(int *)(param_1 + 0x14) == 7) || (*(int *)(param_1 + 0x14) == 3)) {
      *(uint8_t *)(param_1 + 0x22) = 0x8c;
      iVar1 = 0;
    }
    if ((*(int *)(param_1 + 0x14) == 0x19) || (*(int *)(param_1 + 0x14) == 9)) {
      *(uint8_t *)(param_1 + 0x22) = 0x50;
      iVar1 = 0;
    }
    if (*(int *)(param_1 + 0x14) == 0x18) {
      *(uint8_t *)(param_1 + 0x22) = 0xb4;
      iVar1 = 0;
    }
    if (*(int *)(param_1 + 0x14) == 0x2c) {
      *(uint8_t *)(param_1 + 0x22) = 0x8c;
      iVar1 = 0;
    }
    if (*(int *)(param_1 + 0x14) == 10) {
      *(uint8_t *)(param_1 + 0x22) = 200;
      iVar1 = 0;
    }
  }
  return iVar1;
}
