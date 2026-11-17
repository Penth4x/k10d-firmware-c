/* @k10d format_ordered_numeric_fields @ 0x10479f1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_ordered_numeric_fields(uint32_t param_1,char *param_2,void *param_3,int param_4,char param_5,
                 char param_6)

{
  uint32_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  int iVar4;
  
  uVar1 = read_first_word_1045c66c(param_3);
  uVar2 = read_byte_at_offset_two(param_3);
  uVar3 = read_byte_at_offset_three(param_3);
  if (param_5 == '\0') {
    format_integer_as_four_digits_1047a05a(param_1,param_2,uVar1);
    write_two_digit_decimal(param_1,param_2 + 5,uVar2);
    write_two_digit_decimal(param_1,param_2 + 8,uVar3);
    param_2[4] = param_6;
    iVar4 = 7;
  }
  else if (param_5 == '\x01') {
    write_two_digit_decimal(param_1,param_2,uVar2);
    write_two_digit_decimal(param_1,param_2 + 3,uVar3);
    format_integer_as_four_digits_1047a05a(param_1,param_2 + 6,uVar1);
    param_2[2] = param_6;
    iVar4 = 5;
  }
  else {
    if (param_5 != '\x02') goto LAB_10479fd6;
    write_two_digit_decimal(param_1,param_2,uVar3);
    write_two_digit_decimal(param_1,param_2 + 3,uVar2);
    format_integer_as_four_digits_1047a05a(param_1,param_2 + 6,uVar1);
    param_2[2] = param_6;
    iVar4 = 5;
  }
  param_2[iVar4] = param_6;
LAB_10479fd6:
  if (param_4 == 0) {
    read_byte_at_offset_5(param_3);
    read_byte_at_offset_six(param_3);
    read_byte_at_offset_seven(param_3);
    uVar2 = read_byte_at_offset_5(param_3);
    write_two_digit_decimal(param_1,param_2 + 0xb,uVar2);
    uVar2 = read_byte_at_offset_six(param_3);
    write_two_digit_decimal(param_1,param_2 + 0xe,uVar2);
    uVar2 = read_byte_at_offset_seven(param_3);
    write_two_digit_decimal(param_1,param_2 + 0x11,uVar2);
    param_2[10] = param_6;
    param_2[0xd] = param_6;
    param_2[0x10] = param_6;
    iVar4 = 0x13;
  }
  else {
    iVar4 = 10;
  }
  param_2[iVar4] = '\0';
  return;
}
