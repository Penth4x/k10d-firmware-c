/* @k10d init_object_with_alignment_check @ 0x10441df4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
init_object_with_alignment_check(uint32_t param_1,uint param_2,uint param_3,uint param_4,uint8_t param_5)

{
  uint32_t uVar1;
  
  if (((param_4 == (param_4 & 0xffffffe0)) && ((param_2 & 0x1f) == 0)) && ((param_3 & 0x1f) == 0)) {
    uVar1 = 5;
  }
  else if (((param_4 == (param_4 & 0xfffffffc)) && ((param_2 & 3) == 0)) && ((param_3 & 3) == 0)) {
    uVar1 = 2;
  }
  else if (((param_4 != (param_4 & 0xfffffffe)) || ((param_2 & 1) != 0)) ||
          (uVar1 = 1, (param_3 & 1) != 0)) {
    uVar1 = 0;
  }
  clear_struct_flags_and_fields(param_1);
  set_low_nibble_of_word(param_1,0);
  set_bits_10_11_in_word(param_1,0x400);
  set_bits_4_to_6_in_word(param_1,0);
  set_bits_5_7_of_word_at_offset_0x18(param_1,uVar1);
  set_low_three_bits_of_word(param_1,uVar1);
  set_bits_3_4_in_word_10442052(param_1,8);
  set_bits_3_4_in_word_10442090(param_1,8);
  set_bits_8_9_in_word(param_1,0);
  store_value_at_offset_0x1c_104420c0(param_1,param_2);
  store_value_at_offset_0x20_104420c8(param_1,param_3);
  store_value_at_offset_0x24_104420d0(param_1,0);
  store_value_at_offset_0x28_104420d8(param_1,0);
  store_value_at_offset_0x2c(param_1,param_4);
  store_value_at_offset_0x30_104420e8(param_1,0);
  set_bit_14_in_word_at_offset_0x18(param_1,param_5);
  set_bit15_of_word_at_offset_0x18(param_1);
  return 1;
}
