/* @k10d call_three_times_with_constants @ 0x000ddc54
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Invokes update_bitmask_from_params three times with fixed integer arguments and
 *   DAT_0003f38x pointers.
 * summary:
 *   The function makes three sequential calls to update_bitmask_from_params. The first call
 *   uses arguments 0, 1, and DAT_0003f38b. The second uses 0, 3, and DAT_0003f38d. The
 *   third uses 1, 1, and DAT_0003f389. No other operations or side effects are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_times_with_constants(void)

{
  update_bitmask_from_params(0,1,DAT_0003f38b);
  update_bitmask_from_params(0,3,DAT_0003f38d);
  update_bitmask_from_params(1,1,DAT_0003f389);
  return;
}
