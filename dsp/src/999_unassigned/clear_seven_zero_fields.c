/* @k10d clear_seven_zero_fields @ 0x000d5c00
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets seven adjacent 32-bit data fields to zero.
 * summary:
 *   The function writes the value 0 to seven distinct global data locations: DAT_0003c319,
 *   DAT_0003c318, DAT_0003c320, DAT_0003c31a, _DAT_0003c280, _DAT_0003c314, and
 *   _DAT_0003c310. It has no callees and performs no other operations. The specific roles
 *   of these data fields are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_seven_zero_fields(void)

{
  DAT_0003c319 = 0;
  DAT_0003c318 = 0;
  DAT_0003c320 = 0;
  DAT_0003c31a = 0;
  _DAT_0003c280 = 0;
  _DAT_0003c314 = 0;
  _DAT_0003c310 = 0;
  return;
}
