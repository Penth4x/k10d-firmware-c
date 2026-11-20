/* @k10d clamp_two_byte_counters @ 0x000e619e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps two byte-sized state variables to be within one unit of two RAM input values.
 * summary:
 *   The function reads two byte values from RAM (cRam000000b6 and _DAT_000000b2) and
 *   compares them against two stored byte variables (DAT_0003c04e and DAT_0003c04f). It
 *   updates each stored variable to match the input value if the difference exceeds one
 *   unit in either direction. No callees are invoked, and the function only performs local
 *   memory updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_two_byte_counters(void)

{
  char cVar1;
  
  if ((DAT_0003c04e < cRam000000b6) && (DAT_0003c04e + 1 < (int)cRam000000b6)) {
    DAT_0003c04e = cRam000000b6;
  }
  if ((cRam000000b6 < DAT_0003c04e) && ((int)cRam000000b6 < DAT_0003c04e + -1)) {
    DAT_0003c04e = cRam000000b6;
  }
  cVar1 = (char)_DAT_000000b2;
  if ((DAT_0003c04f < cVar1) && (DAT_0003c04f + 1 < (int)cVar1)) {
    DAT_0003c04f = cVar1;
  }
  if ((cVar1 < DAT_0003c04f) && ((int)cVar1 < DAT_0003c04f + -1)) {
    DAT_0003c04f = cVar1;
  }
  return;
}
