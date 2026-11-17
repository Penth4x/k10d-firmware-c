/* @k10d write_word_to_array @ 0x1043603a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to a specific element of a word array.
 * summary:
 *   The function calculates the address of an element in an array of 16-bit words using
 *   param_1 as the base address and param_2 as the index. It stores the value of param_3 at
 *   the calculated offset. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_to_array(int param_1,int param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 4 + param_2 * 2) = param_3;
  return;
}
