/* @k10d update_nibble_via_callback @ 0x000e36ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Replaces bits 4-5 of DAT_00000006 with the low two bits of a value returned by
 *   classify_value_by_thresholds.
 * summary:
 *   Extracts bits 4-5 of the global DAT_00000006 and passes them as an argument to
 *   classify_value_by_thresholds. The low two bits of the return value are then written
 *   back into bits 4-5 of DAT_00000006, leaving other bits unchanged. The role of
 *   DAT_00000006 and classify_value_by_thresholds is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_nibble_via_callback(void)

{
  byte bVar1;
  
  bVar1 = classify_value_by_thresholds((DAT_00000006 & 0x3f) >> 4);
  DAT_00000006 = DAT_00000006 & 0xcf | (bVar1 & 3) << 4;
  return;
}
