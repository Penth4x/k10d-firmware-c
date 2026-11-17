/* @k10d write_thirty_two_config_values @ 0x10446106
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a fixed sequence of 32 constant values to a target object via helper functions.
 * summary:
 *   The function takes a single pointer argument and passes it along with a specific
 *   constant to each of 32 distinct callee functions. The constants include various hex
 *   values like 0x500, 0x8101, and 0x1616. The callees are not named, so the specific
 *   subsystem or register being configured is unknown, but the pattern is a straightforward
 *   initialization or configuration sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_thirty_two_config_values(uint32_t param_1)

{
  write_masked_value_to_mmio_104461f8(param_1,0x500);
  write_masked_value_to_40040006(param_1,0x8101);
  write_masked_value_to_4004000a(param_1,0xdc10);
  write_two_bytes_to_4004000c(param_1,0xeb10);
  write_masked_value_to_4004000e(param_1,0x7000);
  write_two_bytes_to_40040010(param_1,0xf010);
  write_masked_value_to_mmio_1044626c(param_1,0x7000);
  write_two_bytes_to_mmio_1044627c(param_1,0xf010);
  write_masked_value_to_mmio_10446286(param_1,0x24);
  write_masked_value_to_40040018(param_1,0x392);
  write_byte_to_0x4004001a(param_1,1);
  write_byte_to_4004001b(param_1,0);
  write_masked_value_to_40040028(param_1,0x138);
  write_mmio_word_to_4004002a(param_1,0x6c0);
  write_low_five_bits_to_mmio(param_1,0);
  write_masked_value_to_40040036(param_1,0);
  write_masked_value_to_40040008(param_1,0);
  write_masked_value_to_mmio_10446476(param_1,0x1616);
  write_masked_value_to_mmio_10446486(param_1,0xf0);
  write_masked_value_to_40040020(param_1,0x100);
  write_masked_value_to_40040022(param_1,1);
  write_masked_value_to_40040024(param_1,0xc9);
  write_masked_value_to_4004002c(param_1,4);
  write_low_byte_to_4004002e(param_1,4);
  write_masked_value_to_40040038(param_1,0x8000);
  write_two_bytes_to_mmio_1044637a(param_1,0xff00);
  write_masked_value_to_4004003c(param_1,0x8000);
  store_param2_to_dat_4004003e(param_1,0xff00);
  write_low_byte_to_0x40040040(param_1,0);
  write_two_bytes_to_mmio_104463aa(param_1,0x8080);
  return;
}
