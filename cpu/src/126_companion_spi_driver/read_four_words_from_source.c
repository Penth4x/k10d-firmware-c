/* @k10d read_four_words_from_source @ 0x104356e0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads four consecutive 32-bit values from param_1 via read_two_byte_array_element and
 *   stores them in param_2.
 * summary:
 *   Calls read_two_byte_array_element four times with indices 0 through 3, writing each
 *   result into successive elements of the param_2 array. Returns the constant 4, likely
 *   indicating the number of words transferred. The callee read_two_byte_array_element is
 *   not named, so the specific data source or subsystem is not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_four_words_from_source(uint32_t param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_two_byte_array_element(param_1,0);
  *param_2 = uVar1;
  uVar1 = read_two_byte_array_element(param_1,1);
  param_2[1] = uVar1;
  uVar1 = read_two_byte_array_element(param_1,2);
  param_2[2] = uVar1;
  uVar1 = read_two_byte_array_element(param_1,3);
  param_2[3] = uVar1;
  return 4;
}
