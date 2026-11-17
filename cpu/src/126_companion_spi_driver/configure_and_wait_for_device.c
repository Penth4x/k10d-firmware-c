/* @k10d configure_and_wait_for_device @ 0x104421b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Configures a device via a series of register writes and waits for a status flag to
 *   clear.
 * summary:
 *   The function calls a sequence of 18 helper functions, passing param_1 as the first
 *   argument to all of them. Several callees receive specific constants (0, 0x400, 8) or
 *   the other parameters (param_2 through param_5). After the configuration sequence, it
 *   enters a loop calling test_bit15_of_vtable_slot until it returns 0. Finally, it calls
 *   test_bit_8_of_vtable_slot and returns its result. The pattern suggests initializing a
 *   peripheral or subsystem and waiting for it to be ready.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
configure_and_wait_for_device(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_struct_flags_and_fields(__frv_reg_unset(4));
  set_low_nibble_of_word(param_1,0);
  set_bits_10_11_in_word(param_1,0x400);
  set_bits_4_to_6_in_word(param_1,0);
  set_bits_5_7_of_word_at_offset_0x18(param_1,param_5);
  set_low_three_bits_of_word(param_1,param_5);
  set_bits_3_4_in_word_10442052(param_1,8);
  set_bits_3_4_in_word_10442090(param_1,8);
  set_bits_8_9_in_word(param_1,0);
  store_value_at_offset_0x1c_104420c0(param_1,param_2);
  store_value_at_offset_0x20(param_1,param_3);
  store_value_at_offset_0x24_104420d0(param_1,0);
  store_value_at_offset_0x28_104420d8(param_1,0);
  store_value_at_offset_0x2c(param_1,param_4);
  store_value_at_offset_0x30_104420e8(param_1,0);
  set_bit15_of_word_at_offset_0x18(param_1);
  iVar1 = test_bit15_of_vtable_slot(param_1);
  while (iVar1 != 0) {
    iVar1 = test_bit15_of_vtable_slot(param_1);
  }
  uVar2 = test_bit_8_of_vtable_slot(param_1);
  clear_struct_flags_and_fields(param_1);
  return uVar2;
}
