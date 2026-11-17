/* @k10d format_timestamp_string @ 0x1049c770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_timestamp_string(uint32_t param_1,void *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  iVar2 = read_first_word_1045c66c(param_2);
  uVar3 = iVar2 % 1000 & 0xffff;
  *param_3 = (char)(iVar2 / 1000) + '0';
  uVar4 = uVar3 % 100;
  cVar1 = (char)(uVar4 / 10);
  param_3[1] = (char)(uVar3 / 100) + '0';
  param_3[2] = cVar1 + '0';
  param_3[3] = (char)uVar4 + cVar1 * -10 + '0';
  param_3[4] = ':';
  bVar5 = read_byte_at_offset_two(param_2);
  param_3[5] = bVar5 / 10 + 0x30;
  param_3[6] = bVar5 % 10 + 0x30;
  param_3[7] = ':';
  bVar5 = read_byte_at_offset_three(param_2);
  param_3[8] = bVar5 / 10 + 0x30;
  param_3[9] = bVar5 % 10 + 0x30;
  param_3[10] = ' ';
  bVar5 = read_byte_at_offset_5(param_2);
  param_3[0xb] = bVar5 / 10 + 0x30;
  param_3[0xc] = bVar5 % 10 + 0x30;
  param_3[0xd] = ':';
  bVar5 = read_byte_at_offset_six(param_2);
  param_3[0xe] = bVar5 / 10 + 0x30;
  param_3[0xf] = bVar5 % 10 + 0x30;
  param_3[0x10] = ':';
  bVar5 = read_byte_at_offset_seven(param_2);
  param_3[0x11] = bVar5 / 10 + 0x30;
  param_3[0x12] = bVar5 % 10 + 0x30;
  param_3[0x13] = '\0';
  return;
}
