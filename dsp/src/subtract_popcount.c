/* @k10d subtract_popcount @ 0x000e1058
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Subtracts the number of set bits in param_1 from param_2.
 * summary:
 *   Iterates through the 16 bits of param_1, shifting right by one each iteration. In each
 *   step, it subtracts the least significant bit of param_1 from param_2. The loop
 *   terminates when param_1 becomes zero. The final value of param_2 is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int subtract_popcount(uint param_1,int param_2)

{
  for (; param_1 != 0; param_1 = param_1 >> 1 & 0xffff) {
    param_2 = (int)(short)((short)param_2 - ((ushort)param_1 & 1));
  }
  return param_2;
}
