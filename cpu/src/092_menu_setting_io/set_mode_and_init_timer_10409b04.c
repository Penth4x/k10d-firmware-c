/* @k10d set_mode_and_init_timer_10409b04 @ 0x10409b04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID in a struct, conditionally initializes a timer or subsystem based on
 *   mode and state, and sets a timeout value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at 0x14 against specific constants (0x25, 0x26, 0x10, 0xf, 0xc, 0x11,
 *   etc.) to determine which helper function to call (get_or_init_sram_object_103e111a or
 *   get_or_create_sram_object_103be36c). For several specific mode values, it also writes a
 *   byte value (0x8c, 0x50, 0xb4, 200) to offset 0x22, likely representing a timeout or
 *   delay parameter. The return value is the result of the last helper call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10409bd2) overlaps instruction at (ram,0x10409bd0)
    */

cls_10599a88 * set_mode_and_init_timer_10409b04(cls_10599a88 *param_1,int param_2)

{
  int iVar1;
  cls_10599a88 *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0x25) || (pcVar2 = param_1, param_2 == 0x26)) {
    pcVar2 = (cls_10599a88 *)get_or_init_sram_object_103e111a();
    param_1->field_0x18 = 0x1830015;
  }
  if ((param_1->field_0x14 == 0x10) &&
     (((iVar1 = param_1->field_0x18, iVar1 == 0x183000f || (iVar1 == 0x1830012)) ||
      (iVar1 == 0x1830011)))) {
    pcVar2 = (cls_10599a88 *)get_or_init_sram_object_103e111a();
  }
  if ((param_1->field_0x14 == 0xf) &&
     (((iVar1 = param_1->field_0x18, iVar1 == 0x1830015 || (iVar1 == 0x1830018)) ||
      (iVar1 == 0x1830017)))) {
    pcVar2 = (cls_10599a88 *)get_or_init_sram_object_103e111a();
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    pcVar2 = (cls_10599a88 *)get_or_create_sram_object_103be36c();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10599a88 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10599a88 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10599a88 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10599a88 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10599a88 *)0x0;
  }
  return pcVar2;
}
