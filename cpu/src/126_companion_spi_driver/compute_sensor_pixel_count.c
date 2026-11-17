/* @k10d compute_sensor_pixel_count @ 0x1044bd60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calculates the total number of pixels in a sensor region based on its type and
 *   dimensions.
 * summary:
 *   The function first calls extract_high_two_bits to determine a type or mode. If the
 *   result is 0, it retrieves parameters via read_low_nibble_at_offset_5 and
 *   extract_two_bit_field, and a base value via extract_16bit_value_from_packet, then
 *   computes a product involving shifts and multiplications. If the result is 1, it
 *   multiplies the value from extract_16bit_value_from_packet by 0x400. Otherwise, it
 *   returns 0. The arithmetic suggests calculating a size or count, likely related to
 *   sensor readout or buffer dimensions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_sensor_pixel_count(byte *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    bVar2 = read_low_nibble_at_offset_5(param_1);
    cVar3 = extract_two_bit_field(param_1);
    iVar1 = extract_16bit_value_from_packet(param_1);
    iVar1 = (iVar1 + 1) * (2 << (cVar3 + 1U & 0xf)) * ((uint)(2 << (bVar2 - 1 & 0xf)) >> 9);
  }
  else if (iVar1 == 1) {
    iVar1 = extract_16bit_value_from_packet(param_1);
    iVar1 = (iVar1 + 1) * 0x400;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
