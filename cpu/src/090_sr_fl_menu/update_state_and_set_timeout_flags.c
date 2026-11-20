/* @k10d update_state_and_set_timeout_flags @ 0x103ffb16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Writes a new state value into a struct, adjusts a counter for specific states, and sets
 *   timeout/flag bytes based on the state.
 * summary:
 *   The function stores param_2 at offset 0x14 of the struct. If the field at offset 0x18
 *   is 0x184000e, it increments or decrements the byte at offset 0x20 and calls
 *   update_two_values_with_digit_count. It then branches on the value at offset 0x14 to set
 *   bytes at offsets 0x21, 0x22, and 0x23 to specific constants (0xff, 0x19, 0x50, 0x8c,
 *   0xb4, 200) or calls get_or_create_sram_object_103be36c. For certain states, it also
 *   calls apply_setting_from_table with parameters derived from the struct fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ffc5e) overlaps instruction at (ram,0x103ffc5c)
    */

int update_state_and_set_timeout_flags(cls_105983cc *param_1,int param_2)

{
  cls_105983cc *pcVar1;
  
  param_1->field_0x14 = param_2;
  if (param_1->field_0x18 == 0x184000e) {
    if (param_2 == 0xe) {
      if (param_1->field_0x20 != '\0') {
        param_1->field_0x20 = param_1->field_0x20 + -1;
        update_two_values_with_digit_count(param_1);
      }
    }
    else if ((param_2 == 0xd) && ((byte)param_1->field_0x20 < 0x21)) {
      param_1->field_0x20 = param_1->field_0x20 + 1;
      update_two_values_with_digit_count(param_1);
    }
  }
  pcVar1 = param_1;
  if (param_1->field_0x14 == 0xc) {
    param_1->field_0x21 = 0xff;
    if (param_1->field_0x22 == '\x19') {
      param_1->field_0x23 = 0x50;
      pcVar1 = (cls_105983cc *)0x0;
    }
    else {
      pcVar1 = (cls_105983cc *)get_or_create_sram_object_103be36c();
    }
  }
  if (param_1->field_0x14 == 0x11) {
    apply_setting_from_table(param_1,0x13,(uint)(byte)param_1->field_0x20);
    apply_setting_from_table(param_1,0x12,(uint)(byte)param_1->field_0x21);
    param_1->field_0x21 = 0xff;
    if (param_1->field_0x22 == '\x19') {
      param_1->field_0x23 = 0x50;
      pcVar1 = (cls_105983cc *)0x0;
    }
    else {
      pcVar1 = (cls_105983cc *)get_or_create_sram_object_103be36c();
    }
  }
  if ((param_1->field_0x14 == 0) || (param_1->field_0x14 == 1)) {
    apply_setting_from_table(param_1,0x13,(uint)(byte)param_1->field_0x20);
    apply_setting_from_table(param_1,0x12,(uint)(byte)param_1->field_0x21);
    param_1->field_0x21 = 0xff;
    param_1->field_0x23 = 0x8c;
    pcVar1 = (cls_105983cc *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x21 = 0xff;
    param_1->field_0x23 = 0x8c;
    pcVar1 = (cls_105983cc *)0x0;
  }
  if (param_1->field_0x22 != '\x19') {
    if ((param_1->field_0x14 == 7) || (param_1->field_0x14 == 3)) {
      param_1->field_0x21 = 0xff;
      param_1->field_0x23 = 0x8c;
      pcVar1 = (cls_105983cc *)0x0;
    }
    if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
      param_1->field_0x21 = 0xff;
      param_1->field_0x23 = 0x50;
      pcVar1 = (cls_105983cc *)0x0;
    }
    if (param_1->field_0x14 == 0x18) {
      param_1->field_0x21 = 0xff;
      param_1->field_0x23 = 0xb4;
      pcVar1 = (cls_105983cc *)0x0;
    }
    if (param_1->field_0x14 == 10) {
      param_1->field_0x21 = 0xff;
      param_1->field_0x23 = 200;
      pcVar1 = (cls_105983cc *)0x0;
    }
  }
  return (int)pcVar1;
}
