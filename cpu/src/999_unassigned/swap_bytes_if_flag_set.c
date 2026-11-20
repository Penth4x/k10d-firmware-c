/* @k10d swap_bytes_if_flag_set @ 0x104e4336
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Conditionally swaps the two bytes of a 16-bit value based on a flag parameter.
 * summary:
 *   The function takes a 16-bit value in param_2 and a flag in param_3. If param_3 is zero,
 *   it performs a byte swap on param_2 (swapping the high and low bytes). Otherwise, it
 *   returns param_2 unchanged. The result is returned in the upper 16 bits of the return
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint swap_bytes_if_flag_set(uint32_t param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = (param_2 & 0xff) << 8 | (int)param_2 >> 8 & 0xffffU;
  }
  return param_2;
}
