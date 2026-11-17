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

int update_state_and_set_timeout_flags(int *param_1,int param_2)

{
  int *piVar1;
  
  param_1[5] = param_2;
  if (param_1[6] == 0x184000e) {
    if (param_2 == 0xe) {
      if (*(char *)(param_1 + 8) != '\0') {
        *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
        update_two_values_with_digit_count(param_1);
      }
    }
    else if ((param_2 == 0xd) && (*(byte *)(param_1 + 8) < 0x21)) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) + 1;
      update_two_values_with_digit_count(param_1);
    }
  }
  piVar1 = param_1;
  if (param_1[5] == 0xc) {
    *(uint8_t *)((int)param_1 + 0x21) = 0xff;
    if (*(char *)((int)param_1 + 0x22) == '\x19') {
      *(uint8_t *)((int)param_1 + 0x23) = 0x50;
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)get_or_create_sram_object_103be36c();
    }
  }
  if (param_1[5] == 0x11) {
    apply_setting_from_table(param_1,0x13,(uint)*(byte *)(param_1 + 8));
    apply_setting_from_table(param_1,0x12,(uint)*(byte *)((int)param_1 + 0x21));
    *(uint8_t *)((int)param_1 + 0x21) = 0xff;
    if (*(char *)((int)param_1 + 0x22) == '\x19') {
      *(uint8_t *)((int)param_1 + 0x23) = 0x50;
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)get_or_create_sram_object_103be36c();
    }
  }
  if ((param_1[5] == 0) || (param_1[5] == 1)) {
    apply_setting_from_table(param_1,0x13,(uint)*(byte *)(param_1 + 8));
    apply_setting_from_table(param_1,0x12,(uint)*(byte *)((int)param_1 + 0x21));
    *(uint8_t *)((int)param_1 + 0x21) = 0xff;
    *(uint8_t *)((int)param_1 + 0x23) = 0x8c;
    piVar1 = (int *)0x0;
  }
  if (param_1[5] == 0x2c) {
    *(uint8_t *)((int)param_1 + 0x21) = 0xff;
    *(uint8_t *)((int)param_1 + 0x23) = 0x8c;
    piVar1 = (int *)0x0;
  }
  if (*(char *)((int)param_1 + 0x22) != '\x19') {
    if ((param_1[5] == 7) || (param_1[5] == 3)) {
      *(uint8_t *)((int)param_1 + 0x21) = 0xff;
      *(uint8_t *)((int)param_1 + 0x23) = 0x8c;
      piVar1 = (int *)0x0;
    }
    if ((param_1[5] == 0x19) || (param_1[5] == 9)) {
      *(uint8_t *)((int)param_1 + 0x21) = 0xff;
      *(uint8_t *)((int)param_1 + 0x23) = 0x50;
      piVar1 = (int *)0x0;
    }
    if (param_1[5] == 0x18) {
      *(uint8_t *)((int)param_1 + 0x21) = 0xff;
      *(uint8_t *)((int)param_1 + 0x23) = 0xb4;
      piVar1 = (int *)0x0;
    }
    if (param_1[5] == 10) {
      *(uint8_t *)((int)param_1 + 0x21) = 0xff;
      *(uint8_t *)((int)param_1 + 0x23) = 200;
      piVar1 = (int *)0x0;
    }
  }
  return (int)piVar1;
}
