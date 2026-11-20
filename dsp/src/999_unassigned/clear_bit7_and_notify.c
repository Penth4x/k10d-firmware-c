/* @k10d clear_bit7_and_notify @ 0x000dd606
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 7 of DAT_0003c802 and passes the result to update_bitmask_from_params with
 *   fixed arguments 0 and 7.
 * summary:
 *   The function masks off bit 7 (0x80) of the global DAT_0003c802, leaving bits 0-6
 *   intact. It then calls update_bitmask_from_params with the first argument 0, the second
 *   argument 7, and the third argument being the modified value of DAT_0003c802. The role
 *   of DAT_0003c802 and update_bitmask_from_params is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit7_and_notify(void)

{
  DAT_0003c802 = DAT_0003c802 & 0x7f;
  update_bitmask_from_params(0,7,DAT_0003c802);
  return;
}
