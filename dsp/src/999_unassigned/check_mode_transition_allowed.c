/* @k10d check_mode_transition_allowed @ 0x000d100c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Validates a state transition by checking bit flags in global status registers and
 *   returning a boolean-like result.
 * summary:
 *   The function takes two parameters, likely representing a current state and a target
 *   state or index. It reads several global byte variables (DAT_0003f2d8, DAT_0003cf0e,
 *   etc.) to check specific bit conditions. If param_1 is 0, it performs a series of checks
 *   involving bit 7 and 6 of DAT_0003cf0e and compares a value derived from DAT_0003f2d8
 *   against an array element at DAT_0003cf10 + param_2. If param_1 is non-zero, it checks a
 *   complex combination of bits in DAT_0003f2d8, DAT_0003ce06, DAT_0003cb80, and
 *   DAT_0003c101, along with range checks on DAT_0003cc30 and DAT_0003cd57. It returns
 *   param_1 modified to 0 or -1 based on these conditions, suggesting a permission or
 *   validity check for a state change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int check_mode_transition_allowed(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = DAT_0003f2d8 & 0xf;
    if (((DAT_0003cf0e & 0x80) != 0) && ((DAT_0003f2d8 & 0xf) != 0)) {
      bVar1 = 0;
    }
    if (((DAT_0003cf0e & 0x40) != 0) && (1 < bVar1)) {
      bVar1 = 1;
    }
    if (((&DAT_0003cf10)[param_2] & 0xf) < bVar1) {
      param_1 = -1;
    }
  }
  else if ((((((DAT_0003f2d8 & 0x20) != 0) && ((DAT_0003ce06 & 2) != 0)) &&
            ((DAT_0003cb80 & 8) == 0)) &&
           ((_DAT_0003cc30 < 0x33 && ((DAT_0003f285 & 0xf) <= (DAT_0003cf0f & 0xf))))) &&
          (((DAT_0003c101 & 4) != 0 && ((-1 < DAT_0003cd57 && (DAT_0003cd57 < '\x14')))))) {
    param_1 = 0;
  }
  return param_1;
}
