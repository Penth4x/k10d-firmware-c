/* @k10d parse_bcd_or_call_helpers @ 0x104b70d8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Decodes a 32-bit BCD value into four nibbles and three bytes, or dispatches to two
 *   helper functions based on a mode parameter.
 * summary:
 *   The function branches on param_2. If param_2 is 1, it calls
 *   read_field_at_offset_0x10_104b74a8 to get a pointer, then unpacks the first two 32-bit
 *   words at that location: the first word is split into four 4-bit nibbles (BCD digits)
 *   and the second word is split into three 8-bit bytes. If param_2 is 5, it calls
 *   poll_until_bit_clears with arguments (param_1, 0x10, 5) followed by
 *   poll_until_bit1_clear(param_1). The BCD unpacking suggests parsing of a date/time or
 *   similar structured value from a parsed data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_bcd_or_call_helpers(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    puVar2 = (uint *)read_field_at_offset_0x10_104b74a8(*param_1);
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = uVar1 & 0xf;
    puVar2[1] = uVar1 >> 4 & 0xf;
    puVar2[2] = uVar1 >> 8 & 0xf;
    puVar2[3] = uVar3 & 0xff;
    puVar2[4] = uVar3 >> 8 & 0xff;
    puVar2[5] = uVar3 >> 0x10 & 0xff;
    puVar2[6] = uVar3 >> 0x18;
  }
  else if (param_2 == 5) {
    poll_until_bit_clears(param_1,0x10,5);
    poll_until_bit1_clear(param_1);
  }
  return;
}
