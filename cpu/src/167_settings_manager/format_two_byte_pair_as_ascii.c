/* @k10d format_two_byte_pair_as_ascii @ 0x10475a46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_two_byte_pair_as_ascii(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  format_int_as_three_digit_string(__frv_reg_unset(4),(char *)__frv_reg_unset(5),__frv_reg_unset(6));
  bVar2 = read_byte_at_offset_two(*(void **)(param_4 + 4));
  bVar3 = read_byte_at_offset_three(*(void **)(param_4 + 4));
  cVar1 = *(char *)(param_4 + 1);
  *(uint8_t *)(param_2 + 3) = 0x5f;
  if (cVar1 == '\0') {
    *(byte *)(param_2 + 4) = bVar3 / 10 + 0x30;
    *(byte *)(param_2 + 5) = bVar3 % 10 + 0x30;
    *(byte *)(param_2 + 6) = bVar2 / 10 + 0x30;
    *(byte *)(param_2 + 7) = bVar2 % 10 + 0x30;
  }
  else {
    *(byte *)(param_2 + 4) = bVar2 / 10 + 0x30;
    *(byte *)(param_2 + 5) = bVar2 % 10 + 0x30;
    *(byte *)(param_2 + 6) = bVar3 / 10 + 0x30;
    *(byte *)(param_2 + 7) = bVar3 % 10 + 0x30;
  }
  *(uint8_t *)(param_2 + 8) = 0;
  return;
}
