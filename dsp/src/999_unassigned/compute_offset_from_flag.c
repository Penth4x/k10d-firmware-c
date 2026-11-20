/* @k10d compute_offset_from_flag @ 0x000d0924
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects a 16-bit offset based on a flag bit and stores the sum with a base value into a
 *   global.
 * summary:
 *   Reads a flag bit (bit 3) from DAT_0003c023 to choose between two adjacent 16-bit values
 *   at 0x0003f498 and 0x0003f49a. Adds the selected value to the 16-bit content of
 *   DAT_000000d8 and stores the result in DAT_0003ce70. Sets DAT_0003ce72 to zero. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_offset_from_flag(void)

{
  short sVar1;
  
  sVar1 = _DAT_0003f498;
  if ((DAT_0003c023 & 8) != 0) {
    sVar1 = _DAT_0003f49a;
  }
  _DAT_0003ce70 = (short)_DAT_000000d8 + sVar1;
  _DAT_0003ce72 = 0;
  return;
}
