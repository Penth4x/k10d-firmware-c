/* @k10d extract_high_two_bits @ 0x1044bb30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the top two bits (bits 7 and 6) of the first byte of the input pointer.
 * summary:
 *   The function takes a byte pointer, reads the first byte, and right-shifts it by 6
 *   positions to isolate the most significant two bits. It returns this 2-bit value as an
 *   integer. No other operations or memory accesses are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_high_two_bits(byte *param_1)

{
  return (int)(uint)*param_1 >> 6;
}
