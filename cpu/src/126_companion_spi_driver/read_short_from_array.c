/* @k10d read_short_from_array @ 0x104360d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit signed value from an array at a given index.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). It calculates the
 *   offset by multiplying the index by 2 and adding 4, then dereferences the resulting
 *   address as a short integer. It returns the value found at that location. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_array(int param_1,int param_2)

{
  return (int)*(short *)(param_1 + 4 + param_2 * 2);
}
