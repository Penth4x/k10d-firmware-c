/* @k10d clamp_value_by_flags_000c7e7e @ 0x000c7e7e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns param_1 or a stored value from DAT_0003c571 based on three global flag/limit
 *   checks.
 * summary:
 *   The function checks three global variables: DAT_0003c58b bit 0, a combination of
 *   DAT_0003c589 bit 0 and DAT_0003c18f bit 3, and compares DAT_0003c571 against param_1.
 *   If all conditions are met, it substitutes DAT_0003c571 for param_1 before returning. No
 *   callees are invoked; the behavior is purely a conditional clamp or pass-through of the
 *   input value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_by_flags_000c7e7e(uint param_1)

{
  if (((DAT_0003c58b & 1) != 0) &&
     ((((DAT_0003c589 & 1) == 0 || ((DAT_0003c18f & 8) != 0)) && (DAT_0003c571 < param_1)))) {
    param_1 = (uint)DAT_0003c571;
  }
  return param_1;
}
