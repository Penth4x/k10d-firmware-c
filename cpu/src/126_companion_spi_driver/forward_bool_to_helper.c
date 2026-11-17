/* @k10d forward_bool_to_helper @ 0x1043c496
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes its single pointer argument to check_bit2_of_vtable_offset_0x18 and returns the
 *   resulting bool unchanged.
 * summary:
 *   A one-line wrapper that calls check_bit2_of_vtable_offset_0x18 with param_1 and returns
 *   the boolean result. No local state, side effects, or camera-specific behavior are
 *   visible in this function itself; the actual role depends entirely on the unnamed
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_bool_to_helper(void *param_1)

{
  bool bVar1;
  
  bVar1 = check_bit2_of_vtable_offset_0x18(param_1);
  return bVar1;
}
