/* @k10d accumulate_ten_sample_values_000e9304 @ 0x000e9304
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads ten values from a sequence of MMIO registers and passes their sum to a post-
 *   processing function.
 * summary:
 *   The function loops 10 times, selecting one of five register groups based on the value
 *   in _DAT_0003c21e. For each iteration, it waits for a specific status bit (0x40) to be
 *   set in a control register, clears a data register, and adds the value from a
 *   corresponding data register to an accumulator (_DAT_0003c210). After the loop, it calls
 *   divide_two_integers with the accumulated sum and the count 10, storing the result back
 *   into _DAT_0003c210. It also initializes several local variables and clears DAT_0000042c
 *   at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_ten_sample_values_000e9304(void)

{
  byte bVar1;
  
  _DAT_0003c210 = 0;
  DAT_0000007a = 0x23;
  DAT_00000086 = 0x23;
  bVar1 = 0;
  do {
    if (_DAT_0003c21e == 0) {
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      DAT_00000078 = 0;
      _DAT_0003c210 = _DAT_0000007e + _DAT_0003c210;
      DAT_00000079 = DAT_00000079 | 0x82;
    }
    else if (_DAT_0003c21e == 1) {
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      DAT_00000078 = 0;
      _DAT_0003c210 = _DAT_00000080 + _DAT_0003c210;
      DAT_00000079 = DAT_00000079 | 0x82;
    }
    else if (_DAT_0003c21e == 2) {
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      DAT_00000078 = 0;
      _DAT_0003c210 = _DAT_00000082 + _DAT_0003c210;
      DAT_00000079 = DAT_00000079 | 0x82;
    }
    else if (_DAT_0003c21e == 3) {
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      DAT_00000078 = 0;
      _DAT_0003c210 =
           (short)CONCAT31(CONCAT21(_DAT_00000082,DAT_00000084),DAT_00000085) + _DAT_0003c210;
      DAT_00000079 = DAT_00000079 | 0x82;
    }
    else if (_DAT_0003c21e == 4) {
      do {
      } while ((DAT_00000085 & 0x40) == 0);
      DAT_00000084 = 0;
      _DAT_0003c210 = (short)_DAT_00000089 + _DAT_0003c210;
      DAT_00000085 = DAT_00000085 | 0x82;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 10);
  _DAT_0003c210 = divide_two_integers(_DAT_0003c210,10);
  DAT_0000042c = 0;
  return;
}
