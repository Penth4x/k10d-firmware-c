/* @k10d dispatch_mode_by_id @ 0x103f629a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f62ca) overlaps instruction at (ram,0x103f62c8)
    */

int dispatch_mode_by_id(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  param_1[5] = param_2;
  if ((param_2 == 0xc) || (piVar2 = param_1, param_2 == 0x11)) {
    register_six_menu_items_103f6aee((int *)__frv_reg_unset(4));
    piVar2 = (int *)get_or_init_singleton_object_103c8200();
  }
  if ((param_1[5] == 0xd) || (param_1[5] == 0xe)) {
    if (param_1[6] == 0x18d0010) {
      register_six_menu_items_103f6aee(param_1);
      piVar2 = (int *)get_or_init_sram_object_103f6d14();
    }
    else if (param_1[6] == 0x18d005b) {
      register_six_menu_items_103f6aee(param_1);
      piVar2 = (int *)get_or_init_sram_object_103fa60e();
    }
  }
  iVar1 = param_1[5];
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    register_six_menu_items_103f6aee(param_1);
    *(uint8_t *)((int)param_1 + 0x32) = 0x8c;
    piVar2 = (int *)0x0;
  }
  if ((param_1[5] == 0x19) || (param_1[5] == 9)) {
    register_six_menu_items_103f6aee(param_1);
    *(uint8_t *)((int)param_1 + 0x32) = 0x50;
    piVar2 = (int *)0x0;
  }
  if (param_1[5] == 0x18) {
    register_six_menu_items_103f6aee(param_1);
    *(uint8_t *)((int)param_1 + 0x32) = 0xb4;
    piVar2 = (int *)0x0;
  }
  if (param_1[5] == 0x2c) {
    register_six_menu_items_103f6aee(param_1);
    *(uint8_t *)((int)param_1 + 0x32) = 0x8c;
    piVar2 = (int *)0x0;
  }
  if (param_1[5] == 10) {
    register_six_menu_items_103f6aee(param_1);
    *(uint8_t *)((int)param_1 + 0x32) = 200;
    piVar2 = (int *)0x0;
  }
  return (int)piVar2;
}
